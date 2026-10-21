/*
 * AW20036 LED-matrix driver for Bond Touch More.
 *
 * Reconstructed from fw-src/bondTouchMore/ (names.txt + decompiled
 * aw20036_* functions at 0x2024c, 0x203e8, 0x20108, 0x2084c, 0x2087c,
 * 0x20824, 0x20614).
 *
 * The device drives 9 front RGB LEDs through an Awinic AW20036 constant-
 * current matrix controller on TWI (I2C slave 0x3A). The firmware keeps a
 * RAM framebuffer and pushes it to the chip in three register groups:
 *
 *   page 2 (scaling / per-channel current)  : 27 bytes (9 LEDs x R,G,B)
 *   page 1 (PWM duty)                        : 27 bytes, PWM = colour >> 2
 *   enable registers                         : 6 packed bytes
 *
 * This module reproduces that wire behaviour over nrf_drv_twi.
 */

#ifndef AW20036_H__
#define AW20036_H__

#include <stdint.h>
#include <stdbool.h>

#define AW20036_LED_COUNT   9      /* 9 RGB front LEDs            */
#define AW20036_I2C_ADDR    0x3A   /* 7-bit TWI slave address    */

/* One LED's colour (0..255 per channel, as stored in the framebuffer). */
typedef struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
} aw20036_rgb_t;

/* Initialise the TWI peripheral and the AW20036 (reset, global current,
 * matrix type). scl_pin/sda_pin are nRF GPIO numbers. Returns true on a
 * successful chip probe. */
bool aw20036_init(uint8_t scl_pin, uint8_t sda_pin);

/* Set one LED's colour in the framebuffer (does not push to the chip). */
void aw20036_set_rgb(uint8_t led, aw20036_rgb_t rgb);

/* Set one LED's per-channel scaling (current limit), 0..255. Mirrors
 * aw20036_set_brightness @ 0x20824, including its >=3 / >=5 clamp fix-up. */
void aw20036_set_brightness(uint8_t led, uint8_t scale_r,
                            uint8_t scale_g, uint8_t scale_b);

/* Push the whole framebuffer to the chip (scaling, PWM, enables).
 * Mirrors aw20036_commit_all @ 0x2024c. */
void aw20036_commit_all(void);

/* Push a single LED (scaling x3, PWM x3, enable).
 * Mirrors aw20036_commit_led @ 0x203e8. */
void aw20036_commit_led(uint8_t led);

/* Disable all LEDs and write the cleared enable registers.
 * Mirrors aw20036_all_off @ 0x2084c. */
void aw20036_all_off(void);

/* Write the packed channel-enable registers from the current enable state.
 * Mirrors aw20036_write_enables @ 0x20108. */
void aw20036_write_enables(void);

#endif /* AW20036_H__ */
