/*
 * board.h -- Bond Touch More (Bond3) hardware definition.
 *
 * nRF51822-QFAC (256 KB flash / 32 KB RAM), SoftDevice S130 v2.0.1.
 * Values recovered from the vendor firmware; see docs/hardware.md.
 */
#ifndef BOARD_H__
#define BOARD_H__

#include <stdint.h>

/* ---- I2C buses (both 400 kHz, IRQ priority 3 in the vendor build) ------- */

#define BOARD_TWI0_SCL_PIN      30
#define BOARD_TWI0_SDA_PIN      29

#define BOARD_TWI1_SCL_PIN      3
#define BOARD_TWI1_SDA_PIN      4

/* ---- I2C devices --------------------------------------------------------- */

/* AW20036 9-LED RGB matrix driver (TWI1). */
#define BOARD_LED_TWI           1
#define BOARD_LED_ADDR          0x3A

/* AW86224 haptic drivers: one per bus at the same address (motor A / B). */
#define BOARD_HAPTIC_A_TWI      0
#define BOARD_HAPTIC_B_TWI      1
#define BOARD_HAPTIC_ADDR       0x58

/* Capacitive touch controller (gesture in register 0x01) on TWI0. */
#define BOARD_TOUCH_TWI         0
#define BOARD_TOUCH_ADDR        0x15

/* Unidentified device on TWI0 used by the state machine (likely charger/PMIC). */
#define BOARD_AUX_TWI           0
#define BOARD_AUX_ADDR          0x6A

/* ---- Interrupt / status inputs ------------------------------------------ */

#define BOARD_LED_INT_PIN       2   /* AW20036 INTN, falling edge, pull-up      */
#define BOARD_TOUCH_INT_PIN     18  /* touch controller INT, falling, pull-up    */
#define BOARD_TOUCH_WAKE_PIN    15  /* rising edge, pull-down (touch-related)    */
#define BOARD_STATUS_PIN        8   /* both edges, pull-up (two-state input)     */

/* ---- Board revision strap ------------------------------------------------ */

/* Briefly pulled up and read at boot: high = Rev 1, low = Rev 2. */
#define BOARD_REV_STRAP_PIN     28

/* Pins left as disconnected inputs for low power. P0.01 only on Rev 2+. */
#define BOARD_UNUSED_PINS       { 19, 20, 28 }
#define BOARD_UNUSED_PIN_REV2   1

typedef enum
{
    BOARD_REV_1 = 1,
    BOARD_REV_2 = 2,
} board_rev_t;

#endif /* BOARD_H__ */
