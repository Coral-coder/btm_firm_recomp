/*
 * Bond Touch More (Bond3) replacement firmware.
 *
 * Target : nRF51822_xxac + SoftDevice S130 v2.0.1 (nRF5 SDK 12.3.0)
 * App base: 0x1B000 (immediately after the S130 SoftDevice).
 *
 * Original code written against the hardware facts recovered from the vendor
 * image (see docs/hardware.md). Bring-up order: SoftDevice, timers, board
 * revision + low-power pin setup, both I2C buses, then the device drivers.
 */

#include <stdint.h>
#include <string.h>

#include "nordic_common.h"
#include "nrf.h"
#include "nrf_soc.h"
#include "nrf_sdm.h"
#include "ble.h"
#include "nrf_drv_clock.h"
#include "softdevice_handler.h"
#include "app_timer.h"
#include "app_error.h"

#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "board.h"
#include "twi_bus.h"
#include "aw20036.h"

/* app_timer configuration: 32.768 kHz RTC, prescaler matching the vendor
 * timing noted in names.txt (leds_execute_timer uses prescaler 32 on v2;
 * the BTM scheduler runs off app_timer at the SDK default here). */
#define APP_TIMER_PRESCALER      0
#define APP_TIMER_OP_QUEUE_SIZE  8

#define CENTRAL_LINK_COUNT       0
#define PERIPHERAL_LINK_COUNT    1

/* ---- SoftDevice / BLE event plumbing ------------------------------------ */

/* BLE events are dispatched here; individual services are attached as their
 * reconstruction lands (FFA6 app-command write, FFA4/FFA5 CCCDs, etc.). */
static void ble_evt_dispatch(ble_evt_t *p_ble_evt)
{
    (void)p_ble_evt;
    /* TODO(reconstruct): ble_bond_service_on_write dispatch, conn params,
     * advertising restart. See names.txt: ffb1_app_cmd_dispatch @ 0x249c4. */
}

static void sys_evt_dispatch(uint32_t sys_evt)
{
    (void)sys_evt;
    /* TODO(reconstruct): flash/fstorage system events for settings storage. */
}

static void softdevice_init(void)
{
    nrf_clock_lf_cfg_t clock_lf_cfg = {
        .source        = NRF_CLOCK_LF_SRC_XTAL,
        .rc_ctiv       = 0,
        .rc_temp_ctiv  = 0,
        .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM
    };

    uint32_t err_code;
    SOFTDEVICE_HANDLER_INIT(&clock_lf_cfg, NULL);

    ble_enable_params_t ble_enable_params;
    err_code = softdevice_enable_get_default_config(CENTRAL_LINK_COUNT,
                                                    PERIPHERAL_LINK_COUNT,
                                                    &ble_enable_params);
    APP_ERROR_CHECK(err_code);

    err_code = softdevice_enable(&ble_enable_params);
    APP_ERROR_CHECK(err_code);

    err_code = softdevice_ble_evt_handler_set(ble_evt_dispatch);
    APP_ERROR_CHECK(err_code);

    err_code = softdevice_sys_evt_handler_set(sys_evt_dispatch);
    APP_ERROR_CHECK(err_code);
}

static void timers_init(void)
{
    APP_TIMER_INIT(APP_TIMER_PRESCALER, APP_TIMER_OP_QUEUE_SIZE, false);
}

/* ---- Board bring-up --------------------------------------------------- */

/* Read the revision strap on P0.28: pulled up it reads high on Rev 1 and low
 * on Rev 2. The pin is returned to the low-power disconnected state. */
static board_rev_t board_rev_detect(void)
{
    nrf_gpio_cfg_input(BOARD_REV_STRAP_PIN, NRF_GPIO_PIN_PULLUP);
    nrf_delay_us(10);
    board_rev_t rev = nrf_gpio_pin_read(BOARD_REV_STRAP_PIN) ? BOARD_REV_1 : BOARD_REV_2;
    nrf_gpio_cfg_default(BOARD_REV_STRAP_PIN);
    return rev;
}

/* Unused pins as disconnected inputs (lowest leakage), as the vendor does. */
static void board_pins_low_power(board_rev_t rev)
{
    static const uint8_t unused[] = BOARD_UNUSED_PINS;
    for (uint8_t i = 0; i < sizeof(unused); i++)
    {
        nrf_gpio_cfg_default(unused[i]);
    }
    if (rev >= BOARD_REV_2)
    {
        nrf_gpio_cfg_default(BOARD_UNUSED_PIN_REV2);
    }
}

#define LED_CURRENT_LEVEL  2      /* conservative global current, 0..15 */

static void leds_init(void)
{
    APP_ERROR_CHECK(aw20036_init(LED_CURRENT_LEVEL));

    /* Boot indication: dim teal on all nine LEDs. */
    const aw20036_color_t boot = { .r = 0x00, .g = 0x40, .b = 0x40 };
    for (uint8_t i = 0; i < AW20036_LED_COUNT; i++)
    {
        aw20036_set_color(i, boot);
        aw20036_enable(i, true);
    }
    APP_ERROR_CHECK(aw20036_commit());
}

static void motor_init(void)  { /* TODO: AW86224 on both buses (0x58) */ }
static void touch_init(void)  { /* TODO: touch controller 0x15, INT P0.18 */ }
static void ble_app_init(void){ /* TODO: GATT service + app command protocol */ }

int main(void)
{
    softdevice_init();
    timers_init();

    board_rev_t rev = board_rev_detect();
    board_pins_low_power(rev);

    APP_ERROR_CHECK(twi_bus_init());
    leds_init();
    motor_init();
    touch_init();
    ble_app_init();

    for (;;)
    {
        /* Idle until an event wakes us; the SoftDevice services radio work. */
        uint32_t err_code = sd_app_evt_wait();
        APP_ERROR_CHECK(err_code);
    }
}
