/*
 * aw20036.c -- AW20036 9-LED RGB matrix driver for the Bond Touch More.
 */
#include "aw20036.h"

#include <string.h>
#include "board.h"
#include "twi_bus.h"

/* ---- Register model ------------------------------------------------------ */

#define REG_PAGE          0xF0
#define PAGE(n)           (0xC0 | (n))
#define PAGE_CFG          PAGE(0)
#define PAGE_PWM          PAGE(1)
#define PAGE_SCALE        PAGE(2)

#define REG_CFG_01        0x01
#define REG_CFG_02        0x02
#define REG_CURRENT       0x03   /* upper nibble: global current */
#define REG_STATUS        0x0B   /* 0x10 << n: pattern n finished */
#define REG_PAT_RUN       0x43
#define REG_PAT_GO        0x59

#define DEFAULT_SCALE     0x20

/* ---- Board wiring --------------------------------------------------------- */

typedef struct
{
    uint8_t ch[3];        /* R, G, B channel register (same on PWM/scale pages) */
    uint8_t en_reg;       /* enable register on page 0                         */
    uint8_t en_mask;      /* this LED's bits in en_reg                         */
} led_wiring_t;

static const led_wiring_t m_wiring[AW20036_LED_COUNT] =
{
    { { 0x0A, 0x0B, 0x09 }, 0x32, 0x38 },
    { { 0x16, 0x17, 0x15 }, 0x34, 0x38 },
    { { 0x22, 0x23, 0x21 }, 0x36, 0x38 },
    { { 0x01, 0x00, 0x02 }, 0x31, 0x07 },
    { { 0x0D, 0x0C, 0x0E }, 0x33, 0x07 },
    { { 0x19, 0x18, 0x1A }, 0x35, 0x07 },
    { { 0x04, 0x05, 0x03 }, 0x31, 0x38 },
    { { 0x10, 0x11, 0x0F }, 0x33, 0x38 },
    { { 0x1C, 0x1D, 0x1B }, 0x35, 0x38 },
};

/* Enable registers in the order the vendor firmware writes them. */
static const uint8_t m_en_regs[] = { 0x31, 0x32, 0x33, 0x34, 0x35, 0x36 };

/* ---- Framebuffer ---------------------------------------------------------- */

typedef struct
{
    aw20036_color_t color;
    uint8_t         scale[3];
    bool            on;
} led_state_t;

static led_state_t m_led[AW20036_LED_COUNT];

/* ---- Low level ------------------------------------------------------------ */

static ret_code_t wr(uint8_t reg, uint8_t val)
{
    return twi_bus_write_reg(BOARD_LED_TWI, BOARD_LED_ADDR, reg, val);
}

static ret_code_t rd(uint8_t reg, uint8_t * p_val)
{
    return twi_bus_read_reg(BOARD_LED_TWI, BOARD_LED_ADDR, reg, p_val);
}

static ret_code_t page(uint8_t p)
{
    return wr(REG_PAGE, p);
}

#define TRY(expr) do { ret_code_t err_ = (expr); if (err_ != NRF_SUCCESS) return err_; } while (0)

/* Value of one enable register: OR of the bits of every enabled LED in it. */
static uint8_t enable_value(uint8_t reg)
{
    uint8_t val = 0;
    for (uint8_t i = 0; i < AW20036_LED_COUNT; i++)
    {
        if (m_wiring[i].en_reg == reg && m_led[i].on)
        {
            val |= m_wiring[i].en_mask;
        }
    }
    return val;
}

static ret_code_t write_enables(void)
{
    TRY(page(PAGE_CFG));
    for (uint8_t i = 0; i < sizeof(m_en_regs); i++)
    {
        TRY(wr(m_en_regs[i], enable_value(m_en_regs[i])));
    }
    return NRF_SUCCESS;
}

static ret_code_t write_led_channels(uint8_t led)
{
    uint8_t const * rgb = &m_led[led].color.r;

    TRY(page(PAGE_SCALE));
    for (uint8_t c = 0; c < 3; c++)
    {
        TRY(wr(m_wiring[led].ch[c], m_led[led].scale[c]));
    }
    TRY(page(PAGE_PWM));
    for (uint8_t c = 0; c < 3; c++)
    {
        TRY(wr(m_wiring[led].ch[c], rgb[c] >> 2));
    }
    return NRF_SUCCESS;
}

/* ---- Public API ------------------------------------------------------------- */

ret_code_t aw20036_set_current(uint8_t level)
{
    uint8_t cur;

    TRY(page(PAGE_CFG));
    TRY(wr(REG_CFG_02, 0x01));
    TRY(rd(REG_CURRENT, &cur));
    TRY(wr(REG_CURRENT, (uint8_t)((level << 4) | (cur & 0x0F))));
    TRY(page(PAGE_CFG));
    return wr(REG_CFG_01, 0x00);
}

ret_code_t aw20036_init(uint8_t current_level)
{
    memset(m_led, 0, sizeof(m_led));
    for (uint8_t i = 0; i < AW20036_LED_COUNT; i++)
    {
        memset(m_led[i].scale, DEFAULT_SCALE, sizeof(m_led[i].scale));
    }
    TRY(aw20036_set_current(current_level));
    return aw20036_commit();
}

void aw20036_set_color(uint8_t led, aw20036_color_t color)
{
    if (led < AW20036_LED_COUNT)
    {
        m_led[led].color = color;
    }
}

void aw20036_set_scale(uint8_t led, uint8_t r, uint8_t g, uint8_t b)
{
    if (led < AW20036_LED_COUNT)
    {
        m_led[led].scale[0] = r;
        m_led[led].scale[1] = g;
        m_led[led].scale[2] = b;
    }
}

void aw20036_enable(uint8_t led, bool on)
{
    if (led < AW20036_LED_COUNT)
    {
        m_led[led].on = on;
    }
}

ret_code_t aw20036_commit(void)
{
    for (uint8_t i = 0; i < AW20036_LED_COUNT; i++)
    {
        TRY(write_led_channels(i));
    }
    return write_enables();
}

ret_code_t aw20036_commit_led(uint8_t led)
{
    if (led >= AW20036_LED_COUNT)
    {
        return NRF_ERROR_INVALID_PARAM;
    }
    TRY(write_led_channels(led));
    TRY(page(PAGE_CFG));
    return wr(m_wiring[led].en_reg, enable_value(m_wiring[led].en_reg));
}

ret_code_t aw20036_all_off(void)
{
    for (uint8_t i = 0; i < AW20036_LED_COUNT; i++)
    {
        m_led[i].on = false;
    }
    return write_enables();
}

ret_code_t aw20036_pattern_config(uint8_t n, aw20036_pattern_t const * p_cfg)
{
    if (n >= AW20036_PATTERN_COUNT || p_cfg == NULL)
    {
        return NRF_ERROR_INVALID_PARAM;
    }
    TRY(page(PAGE_CFG));
    TRY(wr(0x44 + n, p_cfg->cfg0));
    TRY(wr(0x47 + n, p_cfg->cfg1));
    for (uint8_t k = 0; k < 4; k++)
    {
        TRY(wr(0x4A + 4 * n + k, p_cfg->t[k]));
    }
    return wr(0x56 + n, p_cfg->ctrl);
}

static ret_code_t update_bits(uint8_t reg, uint8_t set, uint8_t clear)
{
    uint8_t val;
    TRY(rd(reg, &val));
    return wr(reg, (uint8_t)((val | set) & ~clear));
}

ret_code_t aw20036_pattern_start(uint8_t n, bool flag)
{
    if (n >= AW20036_PATTERN_COUNT)
    {
        return NRF_ERROR_INVALID_PARAM;
    }
    uint8_t run = (uint8_t)(1u << n);
    if (flag)
    {
        run |= (uint8_t)(1u << (n + 4));
    }
    TRY(page(PAGE_CFG));
    TRY(update_bits(REG_PAT_RUN, run, 0));
    return update_bits(REG_PAT_GO, (uint8_t)(1u << n), 0);
}

ret_code_t aw20036_pattern_stop(uint8_t n)
{
    if (n >= AW20036_PATTERN_COUNT)
    {
        return NRF_ERROR_INVALID_PARAM;
    }
    TRY(page(PAGE_CFG));
    TRY(update_bits(REG_PAT_RUN, 0, (uint8_t)(1u << n)));
    return update_bits(REG_PAT_GO, 0, (uint8_t)(1u << n));
}

ret_code_t aw20036_irq_service(void)
{
    uint8_t status;

    TRY(page(PAGE_CFG));
    TRY(rd(REG_STATUS, &status));
    for (uint8_t n = 0; n < AW20036_PATTERN_COUNT; n++)
    {
        if (status & (0x10u << n))
        {
            TRY(aw20036_pattern_stop(n));
        }
    }
    return NRF_SUCCESS;
}
