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

/* The original build kept this call out of line in aw20036_check_status(). */
#define NOINLINE __attribute__((noinline))

#define AW20036_ADDR   0x3A
#define AW_LED_COUNT   9

#define AW_REG_PAGE    0xF0
#define AW_PAGE_CFG    0xC0
#define AW_PAGE_PWM    0xC1
#define AW_PAGE_SCALE  0xC2
#define AW_PAGE_PWMSL  0xC3

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

#line 91 "../../../common/display/AW20036.c"
static inline uint8_t aw_read(uint8_t reg)
{
    uint8_t val;
    ret_code_t err_code;

    err_code = nrf_drv_twi_tx(&m_twi_aw, AW20036_ADDR, &reg, 1, false);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_drv_twi_rx(&m_twi_aw, AW20036_ADDR, &val, 1);
    APP_ERROR_CHECK(err_code);

    return val;
}

/* @ 0x1fff8  Set the global current (upper bits of register 0x03). */
void aw20036_set_current(uint8_t current)
{
    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    aw_write(0x02, 0x01);
    aw_write(0x03, current + (aw_read(0x03) & 0x0F));
    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    aw_write(0x01, 0x00);
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

/* Defaults, defined in .data elsewhere (0x2000209c..0x200020a1). */
typedef struct { uint8_t r, g, b; } aw_color_t;
extern aw_color_t m_aw_default_color;
extern uint8_t    m_aw_scale_r;
extern uint8_t    m_aw_scale_g;
extern uint8_t    m_aw_scale_b;

#define AW_LED_INIT(i, reg, mask, pr, pg, pb)                       \
    do {                                                            \
        m_aw_leds[i].en           = 1;                              \
        m_aw_leds[i].en_reg       = (reg);                          \
        m_aw_leds[i].en_mask      = (mask);                         \
        memcpy(m_aw_leds[i].rgb, &m_aw_default_color, 3);           \
        m_aw_leds[i].scale[0]     = m_aw_scale_r;                   \
        m_aw_leds[i].scale[1]     = m_aw_scale_g;                   \
        m_aw_leds[i].scale[2]     = m_aw_scale_b;                   \
        m_aw_leds[i].pwm_reg[0]   = (pr);                           \
        m_aw_leds[i].pwm_reg[1]   = (pg);                           \
        m_aw_leds[i].pwm_reg[2]   = (pb);                           \
        m_aw_leds[i].scale_reg[0] = (pr);                           \
        m_aw_leds[i].scale_reg[1] = (pg);                           \
        m_aw_leds[i].scale_reg[2] = (pb);                           \
    } while (0)

/* Fill the LED table with the board's channel/enable mapping. */
/* @ 0x20614  NONMATCHING: register allocation (image keeps scale_r in r8) */
void aw20036_init_table(void)
{
    AW_LED_INIT(0, 0x32, 0x38, 0x0A, 0x0B, 0x09);
    AW_LED_INIT(1, 0x34, 0x38, 0x16, 0x17, 0x15);
    AW_LED_INIT(2, 0x36, 0x38, 0x22, 0x23, 0x21);
    AW_LED_INIT(3, 0x31, 0x07, 0x01, 0x00, 0x02);
    AW_LED_INIT(4, 0x33, 0x07, 0x0D, 0x0C, 0x0E);
    AW_LED_INIT(5, 0x35, 0x07, 0x19, 0x18, 0x1A);
    AW_LED_INIT(6, 0x31, 0x38, 0x04, 0x05, 0x03);
    AW_LED_INIT(7, 0x33, 0x38, 0x10, 0x11, 0x0F);
    AW_LED_INIT(8, 0x35, 0x38, 0x1C, 0x1D, 0x1B);
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

/* @ 0x2089c  Drive every LED to one colour, bypassing the LED table. */
void aw20036_fill(aw_color_t color)
{
    aw_write(AW_REG_PAGE, AW_PAGE_PWM);
    for (uint8_t reg = 0; reg < 36; reg += 12)
    {
        aw_write(reg,     color.g);
        aw_write(reg + 1, color.r);
        aw_write(reg + 2, color.b);
    }
    for (uint8_t reg = 3; reg < 39; reg += 6)
    {
        aw_write(reg,     color.b);
        aw_write(reg + 1, color.r);
        aw_write(reg + 2, color.g);
    }
}

/* Hardware pattern generator settings, passed by value (r0:r1). */
typedef struct
{
    uint8_t pattern;    /* generator 0..2                 */
    uint8_t cfg1;       /* -> 0x47 + pattern               */
    uint8_t cfg0;       /* -> 0x44 + pattern               */
    uint8_t t[4];       /* -> 0x4A + 4*pattern .. +3       */
    uint8_t ctrl;       /* -> 0x56 + pattern               */
} aw_pattern_t;

/* @ 0x20a28  Configure hardware pattern generator 0..2. */
int32_t aw20036_pattern_config(aw_pattern_t cfg)
{
    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    switch (cfg.pattern)
    {
        case 0:
            aw_write(0x44, cfg.cfg0);
            aw_write(0x47, cfg.cfg1);
            aw_write(0x4A, cfg.t[0]);
            aw_write(0x4B, cfg.t[1]);
            aw_write(0x4C, cfg.t[2]);
            aw_write(0x4D, cfg.t[3]);
            aw_write(0x56, cfg.ctrl);
            break;
        case 1:
            aw_write(0x45, cfg.cfg0);
            aw_write(0x48, cfg.cfg1);
            aw_write(0x4E, cfg.t[0]);
            aw_write(0x4F, cfg.t[1]);
            aw_write(0x50, cfg.t[2]);
            aw_write(0x51, cfg.t[3]);
            aw_write(0x57, cfg.ctrl);
            break;
        case 2:
            aw_write(0x46, cfg.cfg0);
            aw_write(0x49, cfg.cfg1);
            aw_write(0x52, cfg.t[0]);
            aw_write(0x53, cfg.t[1]);
            aw_write(0x54, cfg.t[2]);
            aw_write(0x55, cfg.t[3]);
            aw_write(0x58, cfg.ctrl);
            break;
        default:
            return -1;
    }
    return 0;
}

/* @ 0x20da4  Start pattern generator n (optionally with bit n+4 in 0x43). */
int32_t aw20036_pattern_start(uint8_t n, bool flag)
{
    uint8_t val;

    aw_write(AW_REG_PAGE, AW_PAGE_CFG);

    val = aw_read(0x43) | (1 << n);
    if (flag)
    {
        val |= 1 << (n + 4);
    }
    aw_write(0x43, val);

    aw_write(0x59, aw_read(0x59) | (1 << n));
    return 0;
}

/* @ 0x20ed4  Stop pattern generator n. */
NOINLINE int32_t aw20036_pattern_stop(uint8_t n)
{
    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    aw_write(0x43, aw_read(0x43) & ~(1 << n));
    aw_write(0x59, aw_read(0x59) & ~(1 << n));
    return 0;
}

/* @ 0x20fec  Write one value (0..3) to all 36 channels on page 3. */
void aw20036_set_all_page3(uint8_t val)
{
    aw_write(AW_REG_PAGE, AW_PAGE_PWMSL);
    if (val < 4)
    {
        for (int ch = 0; ch < 36; ch++)
        {
            aw_write(ch, val);
        }
    }
}

/* @ 0x21070  Status poll: stop any pattern generator that has finished. */
void aw20036_check_status(void)
{
    uint8_t status;

    aw_write(AW_REG_PAGE, AW_PAGE_CFG);
    status = aw_read(0x0B);
    if (status & 0x10)
    {
        aw20036_pattern_stop(0);
    }
    if (status & 0x20)
    {
        aw_write(AW_REG_PAGE, AW_PAGE_CFG);
        aw_write(0x43, aw_read(0x43) & ~(1 << 1));
        aw_write(0x59, aw_read(0x59) & ~(1 << 1));
    }
    if (status & 0x40)
    {
        aw_write(AW_REG_PAGE, AW_PAGE_CFG);
        aw_write(0x43, aw_read(0x43) & ~(1 << 2));
        aw_write(0x59, aw_read(0x59) & ~(1 << 2));
    }
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
