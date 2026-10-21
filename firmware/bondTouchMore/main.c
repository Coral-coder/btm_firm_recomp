/*
 * Bond Touch More (v3 / BTM) firmware -- recompilation skeleton.
 *
 * Target : nRF51822_xxac + SoftDevice S130 v2.0.1 (nRF5 SDK 12.3.0)
 * App base: 0x1B000 (immediately after the S130 SoftDevice).
 *
 * This file provides the clean, buildable entry point and system bring-up.
 * The device-specific logic (AW20036 LED matrix, dual AW86224 haptics,
 * touch FSM, BLE application-command protocol) is reconstructed subsystem by
 * subsystem under this skeleton from fw-src/bondTouchMore/, keeping the build
 * green at every step. Each reconstructed subsystem is wired in through the
 * hooks marked below.
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

/* ---- Device subsystem bring-up ------------------------------------------ */
/* Each of these is a hook for a reconstructed subsystem. They are no-ops in
 * the skeleton so the firmware links and runs the SoftDevice bring-up; they
 * are filled in from fw-src as each subsystem is rebuilt. */

/* TWI pins for the AW20036. Placeholder GPIO numbers; confirm against the
 * board from the vendor TWI config before flashing to real hardware. */
#define AW20036_SCL_PIN  7
#define AW20036_SDA_PIN  8

static void leds_init(void)
{
    (void)aw20036_init(AW20036_SCL_PIN, AW20036_SDA_PIN);
}
static void motor_init(void)  { /* TODO: dual AW86224 haptics (I2C 0x58) */ }
static void touch_init(void)  { /* TODO: touch front-end + FFB2 sample path */ }
static void fsm_init(void)    { /* TODO: fsm_dispatch_event, 21-state machine */ }
static void ble_app_init(void){ /* TODO: GATT services + ffb1_app_cmd_dispatch */ }

int main(void)
{
    /* Match the vendor reset path shape: clear app RAM region, bring up the
     * low-frequency clock, SoftDevice, timers, then device subsystems. */
    softdevice_init();
    timers_init();

    leds_init();
    motor_init();
    touch_init();
    fsm_init();
    ble_app_init();

    for (;;)
    {
        /* Idle until an event wakes us; the SoftDevice services radio work. */
        uint32_t err_code = sd_app_evt_wait();
        APP_ERROR_CHECK(err_code);
    }
}
