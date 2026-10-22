/*
 * aw20036.h -- AW20036 9-LED RGB matrix driver for the Bond Touch More.
 *
 * Colours are kept in a RAM framebuffer; nothing reaches the chip until
 * aw20036_commit() / aw20036_commit_led(). Board wiring (channel registers,
 * enable bits) is described in docs/hardware.md.
 */
#ifndef AW20036_H__
#define AW20036_H__

#include <stdint.h>
#include <stdbool.h>
#include "sdk_errors.h"

#define AW20036_LED_COUNT       9
#define AW20036_PATTERN_COUNT   3

typedef struct
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
} aw20036_color_t;

/* Hardware pattern engine timing, written to the engine's registers as-is. */
typedef struct
{
    uint8_t cfg0;     /* reg 0x44 + n          */
    uint8_t cfg1;     /* reg 0x47 + n          */
    uint8_t t[4];     /* regs 0x4A + 4n .. +3  */
    uint8_t ctrl;     /* reg 0x56 + n          */
} aw20036_pattern_t;

/* Bring the chip up: global current, default scaling, all LEDs dark. */
ret_code_t aw20036_init(uint8_t current_level);

/* Global current, 0..15 (upper nibble of register 0x03). */
ret_code_t aw20036_set_current(uint8_t level);

/* Framebuffer edits (call a commit function to apply). */
void aw20036_set_color(uint8_t led, aw20036_color_t color);
void aw20036_set_scale(uint8_t led, uint8_t r, uint8_t g, uint8_t b);
void aw20036_enable(uint8_t led, bool on);

/* Push the framebuffer: everything, or one LED. */
ret_code_t aw20036_commit(void);
ret_code_t aw20036_commit_led(uint8_t led);

/* Turn every LED off (enable registers cleared). */
ret_code_t aw20036_all_off(void);

/* Program and run the chip's hardware pattern engines (breathing etc.). */
ret_code_t aw20036_pattern_config(uint8_t n, aw20036_pattern_t const * p_cfg);
ret_code_t aw20036_pattern_start(uint8_t n, bool flag);
ret_code_t aw20036_pattern_stop(uint8_t n);

/* Handle the INTN line (P0.02): stop engines that have finished. */
ret_code_t aw20036_irq_service(void);

#endif /* AW20036_H__ */
