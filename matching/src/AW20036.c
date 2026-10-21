/*
 * AW20036.c -- 9-LED RGB matrix driver (Awinic AW20036 on TWI1, slave 0x3A).
 *
 * Decompiled to match the vendor image byte-for-byte with GCC 10.3.1 -O3.
 * Functions marked NONMATCHING compile to equivalent but not identical code.
 */
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "nrf_drv_twi.h"
#include "app_error.h"

#define AW20036_ADDR   0x3A
#define AW_LED_COUNT   9

#define AW_REG_PAGE    0xF0
#define AW_PAGE_CFG    0xC0
#define AW_PAGE_PWM    0xC1
#define AW_PAGE_SCALE  0xC2

/* One LED: current enable bits, the enable register/bitmask it belongs to,
 * colour, per-channel scaling, and the PWM / scaling register numbers of its
 * R,G,B channels. Filled in by aw20036_init_table(). */
typedef struct
{
    uint8_t en;           /* enable bits currently written for this LED  */
    uint8_t en_reg;       /* enable register (page 0)                    */
    uint8_t en_mask;      /* this LED's bits in en_reg                   */
    uint8_t rgb[3];       /* colour, 0..255 (PWM = colour >> 2)           */
    uint8_t scale[3];     /* per-channel scaling (current)                */
    uint8_t pwm_reg[3];   /* channel registers, page 1                    */
    uint8_t scale_reg[3]; /* channel registers, page 2                    */
} aw_led_t;

static aw_led_t m_aw_leds[AW_LED_COUNT];

/* TWI1 instance, defined with the other bus instances elsewhere (0x20002094). */
extern nrf_drv_twi_t m_twi_aw;

#line 75 "../../../common/display/AW20036.c"
static inline void aw_write(uint8_t reg, uint8_t val)
{
    uint8_t buf[2] = { reg, val };
    ret_code_t err_code;

    err_code = nrf_drv_twi_tx(&m_twi_aw, AW20036_ADDR, buf, sizeof(buf), false);
    APP_ERROR_CHECK(err_code);
}

/* @ 0x20108 */
void aw20036_write_enables(void)
{
    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    aw_write(m_aw_leds[3].en_reg, m_aw_leds[3].en + m_aw_leds[6].en);
    aw_write(m_aw_leds[0].en_reg, m_aw_leds[0].en);
    aw_write(m_aw_leds[4].en_reg, m_aw_leds[4].en + m_aw_leds[7].en);
    aw_write(m_aw_leds[1].en_reg, m_aw_leds[1].en);
    aw_write(m_aw_leds[5].en_reg, m_aw_leds[5].en + m_aw_leds[8].en);
    aw_write(m_aw_leds[2].en_reg, m_aw_leds[2].en);
}

/* @ 0x2024c */
void aw20036_commit_all(void)
{
    aw_write(AW_REG_PAGE, AW_PAGE_SCALE);
    for (int i = 0; i < AW_LED_COUNT; i++)
    {
        aw_write(m_aw_leds[i].scale_reg[0], m_aw_leds[i].scale[0]);
        aw_write(m_aw_leds[i].scale_reg[1], m_aw_leds[i].scale[1]);
        aw_write(m_aw_leds[i].scale_reg[2], m_aw_leds[i].scale[2]);
    }

    aw_write(AW_REG_PAGE, AW_PAGE_PWM);
    for (int i = 0; i < AW_LED_COUNT; i++)
    {
        aw_write(m_aw_leds[i].pwm_reg[0], m_aw_leds[i].rgb[0] >> 2);
        aw_write(m_aw_leds[i].pwm_reg[1], m_aw_leds[i].rgb[1] >> 2);
        aw_write(m_aw_leds[i].pwm_reg[2], m_aw_leds[i].rgb[2] >> 2);
    }

    aw20036_write_enables();
}

/* @ 0x203e8 */
void aw20036_commit_led(uint8_t led)
{
    aw_write(AW_REG_PAGE, AW_PAGE_SCALE);
    aw_write(m_aw_leds[led].scale_reg[0], m_aw_leds[led].scale[0]);
    aw_write(m_aw_leds[led].scale_reg[1], m_aw_leds[led].scale[1]);
    aw_write(m_aw_leds[led].scale_reg[2], m_aw_leds[led].scale[2]);

    aw_write(AW_REG_PAGE, AW_PAGE_PWM);
    aw_write(m_aw_leds[led].pwm_reg[0], m_aw_leds[led].rgb[0] >> 2);
    aw_write(m_aw_leds[led].pwm_reg[1], m_aw_leds[led].rgb[1] >> 2);
    aw_write(m_aw_leds[led].pwm_reg[2], m_aw_leds[led].rgb[2] >> 2);

    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    switch (led)
    {
        case 0:
            aw_write(m_aw_leds[0].en_reg, m_aw_leds[0].en);
            break;
        case 1:
            aw_write(m_aw_leds[1].en_reg, m_aw_leds[1].en);
            break;
        case 2:
            aw_write(m_aw_leds[2].en_reg, m_aw_leds[2].en);
            break;
        case 3:
            aw_write(m_aw_leds[3].en_reg, m_aw_leds[3].en + m_aw_leds[6].en);
            break;
        case 4:
            aw_write(m_aw_leds[4].en_reg, m_aw_leds[4].en + m_aw_leds[7].en);
            break;
        case 5:
            aw_write(m_aw_leds[5].en_reg, m_aw_leds[5].en + m_aw_leds[8].en);
            break;
        case 6:
            aw_write(m_aw_leds[3].en_reg, m_aw_leds[3].en + m_aw_leds[6].en);
            break;
        case 7:
            aw_write(m_aw_leds[4].en_reg, m_aw_leds[4].en + m_aw_leds[7].en);
            break;
        case 8:
            aw_write(m_aw_leds[5].en_reg, m_aw_leds[5].en + m_aw_leds[8].en);
            break;
        default:
            break;
    }
}

/* @ 0x20824  NONMATCHING: register allocation / address order */
void aw20036_set_brightness(uint32_t led, uint8_t r, uint32_t g, uint32_t b)
{
    m_aw_leds[led].scale[0] = r;
    if (g < 3 || b < 5)
    {
        m_aw_leds[led].scale[1] = g;
        m_aw_leds[led].scale[2] = b;
    }
    else
    {
        m_aw_leds[led].scale[1] = g - 2;
        m_aw_leds[led].scale[2] = b - 4;
    }
}

/* @ 0x2084c */
void aw20036_all_off(void)
{
    for (int i = 0; i < AW_LED_COUNT; i++)
    {
        m_aw_leds[i].en = 0;
    }
    aw20036_write_enables();
}

/* @ 0x2087c  NONMATCHING: address order */
void aw20036_set_rgb(uint32_t led, uint32_t rgb)
{
    memcpy(m_aw_leds[led].rgb, &rgb, 3);
}

/* @ 0x20a08 */
void aw20036_led_on(uint8_t led, bool on)
{
    if (on)
    {
        m_aw_leds[led].en = m_aw_leds[led].en_mask;
    }
    else
    {
        m_aw_leds[led].en = 0;
    }
}
