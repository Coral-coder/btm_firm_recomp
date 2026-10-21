/*
 * AW20036 LED-matrix driver for Bond Touch More -- reconstruction.
 *
 * See aw20036.h for the mapping back to the decompiled vendor functions.
 *
 * Faithful to the vendor wire protocol:
 *   - all transfers are 2-byte [reg, val] writes to I2C slave 0x3A
 *     (vendor: FUN_0001eeac(handle, 0x3A, {reg,val}, 2, 0));
 *   - a commit selects page 2, writes 27 scaling bytes, selects page 1,
 *     writes 27 PWM bytes where PWM = colour >> 2, then writes the enable
 *     registers (names.txt @ 0x2024c);
 *   - set_brightness applies the same >=3 / >=5 clamp fix-up seen at 0x20824.
 *
 * The one piece that requires the vendor's in-flash data tables for a
 * bit-exact match is the physical channel/register map (built at runtime by
 * FUN_00020614). It is isolated in the tables below so the exact CSx/SWy
 * wiring can be dropped in without touching the protocol logic.
 */

#include "aw20036.h"
#include <string.h>
#include "nrf_drv_twi.h"
#include "nrf_delay.h"
#include "app_util_platform.h"

/* ---- AW20036 register model -------------------------------------------- */

#define AW20036_REG_PAGE     0xF0   /* page/command select register        */
#define AW20036_PAGE_CFG     0xC0   /* page 0: global config               */
#define AW20036_PAGE_PWM     0xC1   /* page 1: per-channel PWM duty         */
#define AW20036_PAGE_SCALING 0xC2   /* page 2: per-channel scaling/current  */

/* Page-0 config registers used at init. */
#define AW20036_REG_GCR      0x00   /* global control (chip enable)         */
#define AW20036_REG_GCCR     0x01   /* global constant-current              */
#define AW20036_REG_RESET    0x2F   /* software reset (write 0x00)          */

/* Physical channel index (0..53) for each logical LED's R,G,B.
 *
 * Linear placeholder map (LED i -> channels 3*i, 3*i+1, 3*i+2). Replace with
 * the vendor map recovered from FUN_00020614 for an exact hardware match;
 * nothing else in this file needs to change. */
static const uint8_t aw20036_chan[AW20036_LED_COUNT][3] = {
    { 0,  1,  2}, { 3,  4,  5}, { 6,  7,  8},
    { 9, 10, 11}, {12, 13, 14}, {15, 16, 17},
    {18, 19, 20}, {21, 22, 23}, {24, 25, 26},
};

/* ---- Driver state ------------------------------------------------------- */

static const nrf_drv_twi_t m_twi = NRF_DRV_TWI_INSTANCE(0);
static bool          m_twi_ready;

/* RAM framebuffer, mirroring the vendor's 9 x RGB records. */
static aw20036_rgb_t m_rgb[AW20036_LED_COUNT];
static aw20036_rgb_t m_scaling[AW20036_LED_COUNT];
static bool          m_enabled[AW20036_LED_COUNT];

/* ---- Low-level transfer ------------------------------------------------- */

/* 2-byte [reg,val] write to slave 0x3A. Equivalent of FUN_0001eeac. */
static void aw20036_write(uint8_t reg, uint8_t val)
{
    uint8_t buf[2] = { reg, val };
    if (m_twi_ready) {
        (void)nrf_drv_twi_tx(&m_twi, AW20036_I2C_ADDR, buf, sizeof(buf), false);
    }
}

static void aw20036_select_page(uint8_t page)
{
    aw20036_write(AW20036_REG_PAGE, page);
}

/* ---- Public API --------------------------------------------------------- */

bool aw20036_init(uint8_t scl_pin, uint8_t sda_pin)
{
    const nrf_drv_twi_config_t cfg = {
        .scl                = scl_pin,
        .sda                = sda_pin,
        .frequency          = NRF_TWI_FREQ_400K,
        .interrupt_priority = APP_IRQ_PRIORITY_HIGH,
        .clear_bus_init     = false,
    };

    ret_code_t err = nrf_drv_twi_init(&m_twi, &cfg, NULL, NULL);
    if (err != NRF_SUCCESS) {
        m_twi_ready = false;
        return false;
    }
    nrf_drv_twi_enable(&m_twi);
    m_twi_ready = true;

    memset(m_rgb, 0, sizeof(m_rgb));
    memset(m_enabled, 0, sizeof(m_enabled));
    /* Default per-channel scaling to full current. */
    memset(m_scaling, 0xFF, sizeof(m_scaling));

    /* Reset and bring up the controller. */
    aw20036_select_page(AW20036_PAGE_CFG);
    aw20036_write(AW20036_REG_RESET, 0x00);
    nrf_delay_ms(2);
    aw20036_select_page(AW20036_PAGE_CFG);
    aw20036_write(AW20036_REG_GCCR, 0x00);   /* global current baseline     */
    aw20036_write(AW20036_REG_GCR,  0x01);   /* chip enable                 */

    aw20036_all_off();
    return true;
}

void aw20036_set_rgb(uint8_t led, aw20036_rgb_t rgb)
{
    if (led < AW20036_LED_COUNT) {
        m_rgb[led] = rgb;          /* FUN_00031764: copy 3 bytes into record */
    }
}

void aw20036_set_brightness(uint8_t led, uint8_t scale_r,
                            uint8_t scale_g, uint8_t scale_b)
{
    if (led >= AW20036_LED_COUNT) {
        return;
    }
    /* Clamp fix-up observed at 0x20824: the green/blue scaling are reduced by
     * a fixed offset unless they are already small. */
    m_scaling[led].r = scale_r;
    if (scale_g < 3 || scale_b < 5) {
        m_scaling[led].g = scale_g;
        m_scaling[led].b = scale_b;
    } else {
        m_scaling[led].g = (uint8_t)(scale_g - 2);
        m_scaling[led].b = (uint8_t)(scale_b - 4);
    }
}

void aw20036_commit_all(void)
{
    uint8_t led, c;

    /* Page 2: scaling / per-channel current (27 writes). */
    aw20036_select_page(AW20036_PAGE_SCALING);
    for (led = 0; led < AW20036_LED_COUNT; led++) {
        const uint8_t *s = &m_scaling[led].r;
        for (c = 0; c < 3; c++) {
            aw20036_write(aw20036_chan[led][c], s[c]);
        }
    }

    /* Page 1: PWM duty = colour >> 2 (27 writes). */
    aw20036_select_page(AW20036_PAGE_PWM);
    for (led = 0; led < AW20036_LED_COUNT; led++) {
        const uint8_t *rgb = &m_rgb[led].r;
        for (c = 0; c < 3; c++) {
            aw20036_write(aw20036_chan[led][c], (uint8_t)(rgb[c] >> 2));
        }
    }

    aw20036_write_enables();
}

void aw20036_commit_led(uint8_t led)
{
    uint8_t c;
    if (led >= AW20036_LED_COUNT) {
        return;
    }

    aw20036_select_page(AW20036_PAGE_SCALING);
    for (c = 0; c < 3; c++) {
        aw20036_write(aw20036_chan[led][c], (&m_scaling[led].r)[c]);
    }

    aw20036_select_page(AW20036_PAGE_PWM);
    for (c = 0; c < 3; c++) {
        aw20036_write(aw20036_chan[led][c], (uint8_t)((&m_rgb[led].r)[c] >> 2));
    }

    m_enabled[led] = true;
    aw20036_write_enables();
}

void aw20036_all_off(void)
{
    memset(m_enabled, 0, sizeof(m_enabled));  /* clear all 9 enable flags    */
    aw20036_write_enables();
}

/* Write the packed channel-enable registers (page 0).
 *
 * Mirrors aw20036_write_enables @ 0x20108: a page select followed by the
 * enable bytes. The vendor packs two logical LEDs per enable register; here
 * we expose one enable bit per physical channel across the AW20036's enable
 * register bank (6 bytes covering 48 channels; we use the first 27). */
void aw20036_write_enables(void)
{
    uint8_t enbytes[6];
    uint8_t led, c, ch;

    memset(enbytes, 0, sizeof(enbytes));
    for (led = 0; led < AW20036_LED_COUNT; led++) {
        if (!m_enabled[led]) {
            continue;
        }
        for (c = 0; c < 3; c++) {
            ch = aw20036_chan[led][c];
            enbytes[ch >> 3] |= (uint8_t)(1u << (ch & 7));
        }
    }

    aw20036_select_page(AW20036_PAGE_CFG);
    for (c = 0; c < sizeof(enbytes); c++) {
        /* AW20036 channel-enable registers start at 0x02 on page 0. */
        aw20036_write((uint8_t)(0x02 + c), enbytes[c]);
    }
}
