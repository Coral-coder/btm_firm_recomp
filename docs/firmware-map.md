# Bond Touch More vendor firmware: map

A map of the vendor application image (`reference/nrf51822_xxac.bin`, SHA-256
`0b0754f3…f7d5`, firmware "3.1.1_0"), written from the disassembly and
decompilation in this repo, to guide the replacement firmware in
`firmware/bondTouchMore/`.

This page is the overview. The detail, with addresses as evidence, is in four
parts:

| Part | Covers |
|---|---|
| [01 System and board](firmware-map/01-system-board.md) | Boot order, timers, scheduler events, pins, battery, touch controller, watchdog, system-off, error and DFU paths, accelerometer |
| [02 LEDs and haptics](firmware-map/02-leds-haptics.md) | Display module, every animation, touch rendering, partner menu, AW86224 init and pan, AW20036 bring-up and pattern engine |
| [03 BLE and commands](firmware-map/03-ble-commands.md) | GATT database, advertising, security, the FFB1 command table, notifications, FFB2 touch transfer, ANCS, compatibility checklist |
| [04 State machine and storage](firmware-map/04-state-machine-storage.md) | The 21 states and every transition, FSM timers and RAM, settings records, flash budget |

Everything here is static analysis (plus emulation of the LED and haptic
functions with I2C stubbed). Nothing has been checked on hardware; items that
need it are listed under [Open questions](#open-questions).

## Image layout

| Region | Range | Notes |
|---|---|---|
| SoftDevice S130 v2.0.1 | `0x00000`–`0x1AFFF` | Not part of the image |
| Vector table | `0x1B000` | SP `0x20007F80`, reset `0x2F4F0` |
| Code | `0x1B0C0`–`0x31230` | 47 KB SDK, 43 KB vendor, 0.3 KB runtime |
| Read-only data, then `.data` image | to `0x340A0`, then to `0x341AC` | `.data` is 272 bytes |
| FDS (settings and bonds) | three 1 KB pages directly below the bootloader | Absolute address unknown: the bootloader start comes from UICR |
| Bootloader | above FDS | Not in this image |
| RAM | `0x20002028`–`0x20007F80` | `.data` to `0x20002138`; 0x26-byte retained diagnostics block at `0x20007F80` |

Interrupts in use: POWER_CLOCK, TWI0, TWI1, GPIOTE, ADC, WDT, RTC1
(app_timer), SWI0 (app_timer), SWI2 (SoftDevice events). No UART.

Vendor source files, in link order, with size:

| File | Start | Bytes | Role |
|---|---|---|---|
| `main` | `0x1f758` | 944 | Boot, timers, touch callback |
| `int_mngr` | `0x1fb08` | 1264 | Pins, TWI wrappers, GPIOTE handlers, fault handler |
| `AW20036` | `0x1fff8` | 4888 | LED driver |
| `display` | `0x21310` | 6352 | Animations, touch rendering, menu |
| `HMD_AW86224` | `0x22be0` | 3732 | Two haptic drivers |
| (accelerometer, unnamed) | `0x23a74` | 2188 | Bit-banged SPI driver; `tus.txt` still counts it as haptics |
| `event_mngr` | `0x24300` | 1024 | Scheduler events to FSM events |
| `battery` | `0x24700` | 464 | ADC, percent table, thresholds |
| `app_cmd` | `0x248d0` | 2088 | FFB1 command dispatcher |
| `ble_bond3_service` | `0x250f8` | 676 | Vendor GATT service |
| `ble_bond3` | `0x2539c` | 5476 | BLE glue, peer manager, ANCS |
| `bond3_fsm` | `0x26900` | 8192 | Device state machine |
| `touch_low_level` | `0x28900` | 1024 | Touch controller |
| `bond3_watchdog` | `0x28d00` | 132 | Watchdog |
| `nvs_storage` | `0x28d84` | 4608 | Settings on FDS, diagnostics block |

## Hardware, corrected

This replaces the pin and device tables in `hardware.md` where they differ.

| Pin | Use |
|---|---|
| P0.01 | AW20036 enable. Rev 1: driven. Rev 2: released to an external pull-up |
| P0.02 | AW20036 interrupt (falling) |
| P0.03 / P0.04 | TWI1 SCL / SDA: AW20036 (`0x3A`), haptic driver B (`0x58`) |
| P0.05, P0.07 | Haptic driver resets (which is which is unknown) |
| P0.06 | Battery sense, AIN7, 1.2 V reference, firmware assumes a 1:4 divider |
| P0.08 | Charger present, active low. Also a wake source |
| P0.09 | Charge status (polarity unconfirmed) |
| P0.10 / 11 / 12 / 14 | Accelerometer SPI: clock / out / in / chip select (bit-banged) |
| P0.15 | Accelerometer interrupt (rising): the double tap |
| P0.17 | Touch controller reset, active low |
| P0.18 | Touch controller interrupt (falling). Also a wake source |
| P0.19 | Unknown; pulsed low for about 2 ms when the charger is plugged in |
| P0.28 | Board revision strap: high = Rev 1, low = Rev 2 |
| P0.29 / P0.30 | TWI0 SDA / SCL: touch controller (`0x15`), haptic driver A (`0x58`) |

| Device | Finding |
|---|---|
| Touch controller | Hynitron CST8xx family, two-point. `0x6A` is its bootloader address, used once at start-up. Position: `(240 − Y) / 26`, clamped to 8 |
| Accelerometer | MiraMEMS DA217-class (unconfirmed). Its tap interrupt opens the partner menu |
| Haptics | Two AW86224, run in CONT mode only; amplitude is register `0x1E` (drive level), rewritten every 50 ms. No waveform data, no calibration |
| LEDs | AW20036. Page 1 is DIM (colour >> 2), page 2 is FADE (brightness). Only pattern engine 0 is used |
| Charger | No I2C charger or fuel gauge. Two status pins only |

## How the firmware is put together

```
 touch INT ─┐                       ┌─ display ── AW20036
 accel INT ─┤                       ├─ motors ─── AW86224 ×2
 charger ───┼─ app_scheduler ─ event_mngr ─ bond3_fsm ─┤
 timers ────┘                       ▲                  ├─ nvs_storage ── FDS
                                    │                  └─ ble_bond3 ── FFB1/FFB2 notify
 SoftDevice events (SWI2) ─ ble_bond3 ─ app_cmd ───────┘
```

- **Main loop:** `app_sched_execute()` then sleep. Pin and timer events go
  through the scheduler. BLE events do not: they run in interrupt context and
  call the state machine directly, which is why the vendor code needs a
  "busy / pending transition" mechanism.
- **State machine:** 21 states, 19 in use. The paths that matter are
  advertising → handshake → connected → (double tap) menu → recording →
  sending, and connected → playing → optional reply menu.
- **Animations:** finite ones run on the LED chip's own pattern engine while
  the CPU busy-waits; sweeps are blocking delay loops.
- **Storage:** three small FDS records (device, settings, statistics), each
  written twice, with a save on every boot and every touch.

## Behaviour worth knowing before writing ours

- **No on/off control.** Every wake is a reset. Unpaired: system-off after
  60 s, woken by touch or charger. Paired: advertises until the battery is
  critical.
- **The bar is asleep while connected.** A double tap wakes it and opens the
  partner menu.
- **Recording is always 200 samples (10 s).** No early end on finger lift; a
  touch-controller gesture cancels.
- **No queue for incoming touches.** One arriving outside the connected-idle
  state is dropped and can corrupt a playback in progress.
- **Off while charging.** The MCU is in system-off for the whole time on the
  charger.
- **No link security.** Every characteristic is open, the handshake token is
  the constant `"12345678"`, and commands are not gated by the handshake:
  DFU entry, bond deletion and settings work for any nearby device.
- **Any application error reboots into the DFU bootloader**; a HardFault hangs
  forever on a blinking animation.

## Installing a replacement

The vendor update package carries a signed init packet (ECDSA P-256 over the
image hash; hardware version 51, SoftDevice requirement `0x87`). The app can
put the bracelet into DFU mode over BLE (`[01 2A]`, GPREGRET `0xB1`), but the
bootloader should then accept only images signed with the vendor's key.
Whether it does is untested.

Plan for it not accepting ours:

1. Reach the SWD pads on one bracelet.
2. If read-back protection is set, a full erase is the only way in; that also
   removes the vendor bootloader.
3. Flash S130 v2.0.1, a bootloader built with our own key, and our app.
   After that, updates over BLE work with our packages.

The app region is small: about 127 KB between `0x1B000` and the FDS pages if
the bootloader sits where SDK 12.3 puts it (unconfirmed), so updates are
single-bank. Our image must stay well under that.

## Recommended build order

Each step is testable on its own and leaves a working device.

1. **Board layer.** Pins as in the table above, both TWI buses, watchdog
   (3 s, paused in sleep), revision strap. Already partly done.
2. **LEDs.** Done as a driver. Add power sequencing on P0.01, the
   brightness / dim model, and non-blocking animations driven by app_timer
   instead of the chip's pattern engine and busy-waits.
3. **Haptics.** Reset pulse, the 10-write CONT-mode init per bus, GO / drive
   level / STOP, the pan table with clamping. A missing motor should degrade,
   not crash.
4. **Touch bar.** Reset and bootloader handshake, interrupt plus 30 ms
   re-read, position maths, 100 ms release timeout, sleep and wake.
5. **Accelerometer.** SPI init sequence, tap interrupt, suspend and resume,
   sensitivity register.
6. **Battery and charger.** ADC sampling, the percent table, thresholds,
   charger pins.
7. **Settings.** One FDS record with the vendor field layout (keep the file
   id and key if existing settings should survive), written on change with a
   debounce.
8. **BLE, compatibility core.** The items in the checklist in part 03:
   name, service, FFB1 / FFB2 / FFB3, handshake, the dozen commands the apps
   use, battery service.
9. **State machine.** Advertising, handshake, connected, menu, recording,
   sending, playing, reply menu, charger, battery-critical. All events through
   the scheduler, so no pending-transition mechanism.
10. **Our own bootloader and update path.**

Things to do differently from the vendor, none of which break the apps:

- Queue incoming touches instead of dropping them.
- Read the notification-enabled state from the stack, so bonded reconnects
  still get notifications.
- Buffer FFB2 writes per packet, so fast writes cannot overwrite each other.
- Gate dangerous commands (DFU entry, forget, factory) behind the handshake.
- Clamp motor levels and LED indices; bounds-check command arguments.
- Write flash on change, not on every boot and touch.
- Recover from an application error with a plain reset.
- Optional: end a recording on release, stay awake on the charger. Both change
  what the user sees, so decide them deliberately.

What can be left out: factory test states and commands, the diagnostics dump,
ANCS (and with it any need for pairing at the system level), the duplicate
settings copies, pattern engines 1 and 2, animations 3 and 4.

## Corrections to earlier notes

| Earlier note | Finding |
|---|---|
| `hardware.md`: `0x6A` is an unconfirmed charger | Touch controller bootloader address |
| `hardware.md`: P0.15 is touch-related | Accelerometer interrupt |
| `hardware.md`: page 1 PWM, page 2 scaling | Page 1 DIM (current), page 2 FADE (PWM) |
| `names.txt`: scheduler code 6 is touch gesture 3 | Code 6 is the P0.15 handler; gesture 3 is code 5 → FSM event 6 (cancel recording) |
| `names.txt`: `motor_pan_position` writes a gain register | `0x1E` is the CONT-mode drive level |
| `tus.txt`: `HMD_AW86224` runs to `0x24300` | An accelerometer driver starts at `0x23a74` |
| `sdk_matches.tsv`: `0x2e118`, `0x268b0` | `pm_sec_params_set`; the FFB2 receive-counter reset |
| iOS docs: commands `0x43` / `0x44` are ANCS | Enter / leave "wait for double tap". ANCS is `0x53` / `0x57` |
| iOS docs: `[01 30]` requests the firmware version | It starts the handshake; the version is `[01 1C]` |
| iOS docs: a `ff10` characteristic | Does not exist; FFB3 reads `0x43` |
| iOS docs: factory commands `0x12` and `0x15` | Swapped |

## Open questions

These need a bracelet, a logic analyser or the exact datasheets.

1. Does the vendor bootloader accept an unsigned or differently signed image?
   Is read-back protection set? Where are the SWD pads?
2. Bootloader start address (UICR), hence the FDS pages and the real size
   limit for our app.
3. P0.08 / P0.09 polarity and the charger IC; what the P0.19 pulse drives;
   the battery divider ratio.
4. Which of P0.05 / P0.07 resets which haptic driver, and which end of the bar
   is position 0.
5. Exact touch controller and accelerometer parts; which gesture reports
   code 3; whether the tap interrupt is single or double.
6. AW20036 and AW86224 specifics taken from sibling datasheets: DIM bits 7:6,
   drive-level bit 7, `DRV2_TIME = 0xFF`, and the loop count of animations
   8 to 10 (as read, they would outlast the watchdog).
7. Whether the "charged" LEDs really stay lit while the MCU is in system-off.
8. Whether iOS rewrites the notification subscriptions on a bonded reconnect.
9. Whether the serial-number characteristic exists on real units (it is built
   from uninitialised memory), which also fixes the attribute handles.
