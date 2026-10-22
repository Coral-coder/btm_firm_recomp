# Bond Touch More (Bond3) hardware

Recovered from the vendor application image (`nrf51822_xxac.bin`, SHA-256
`0b0754f3…f7d5`). Addresses in parentheses are where the evidence lives in the
image. Items marked *unconfirmed* are inferences that still need checking on
hardware.

## SoC

- nRF51822-QFAC: 256 KB flash, 32 KB RAM.
- SoftDevice S130 v2.0.1; application at flash `0x1B000`.
- Application RAM `0x20002028`–`0x20007F80`. The top `0x80` bytes are left
  free; the initial stack pointer is `0x20007F80`.
- Built by the vendor with nRF5 SDK 12.3 and GCC 10.3.1 (GNU Arm Embedded
  10.3-2021.10), `-O3`, `DEBUG`/`DEBUG_NRF` defined.
- Product strings: `Bond More`, `Bond003`, `Bond3_Rev_1`, `Bond3_Rev_2`.

## I²C buses

Both buses are set up by small wrappers (`0x1fcd0`, `0x1fd04`) at 400 kHz,
interrupt priority 3, with bus clearing off.

| Bus  | Peripheral   | SCL   | SDA   |
|------|--------------|-------|-------|
| TWI0 | `0x40003000` | P0.30 | P0.29 |
| TWI1 | `0x40004000` | P0.03 | P0.04 |

| Address | Device                       | Bus         | Source file           |
|---------|------------------------------|-------------|-----------------------|
| `0x3A`  | AW20036 9×RGB LED driver     | TWI1        | `AW20036.c`           |
| `0x58`  | AW86224 haptic driver ×2     | TWI0 + TWI1 | `HMD_AW86224.c`       |
| `0x15`  | capacitive touch controller  | TWI0        | `touch_low_level.c`   |
| `0x6A`  | *unconfirmed*: charger/PMIC  | TWI0        | used from `bond3_fsm.c` |

The two haptic drivers share address `0x58`: one sits on each bus (motors A and
B), which is how the firmware pans vibration between them.

## GPIO

| Pin   | Use                                  | Config                       | Handler   |
|-------|--------------------------------------|------------------------------|-----------|
| P0.02 | AW20036 INTN                          | falling edge, pull-up        | `0x1fd38` |
| P0.18 | touch controller interrupt            | falling edge, pull-up        | `0x1fd4c` |
| P0.15 | touch-related, *unconfirmed*          | rising edge, pull-down       | `0x1fd70` |
| P0.08 | two-state input → scheduler events 8/9 | both edges, pull-up          | `0x1fdb0` |
| P0.28 | board-revision strap                  | pull-up, read once, then disconnected | `0x1fb14` |
| P0.19, P0.20 | unused                         | input, disconnected          |           |
| P0.01 | unused on Rev 2                       | input, disconnected          |           |

Revision strap: P0.28 high means Rev 1, low means Rev 2.

## AW20036 LED driver

- Register page select: write `0xC0 + page` to register `0xF0`. Page 0 is
  config and enables, page 1 is PWM, page 2 is scaling (current), page 3 is the
  per-channel value set by `aw20036_set_all_page3`.
- Writes are 2-byte `[reg, value]`; reads write the register and then read 1
  byte.
- PWM is the 8-bit colour shifted right by 2.
- Per-LED channel registers (R, G, B), identical on pages 1 and 2:

  | LED | R    | G    | B    | enable reg | enable bits |
  |-----|------|------|------|------------|-------------|
  | 0   | 0x0A | 0x0B | 0x09 | 0x32       | 0x38        |
  | 1   | 0x16 | 0x17 | 0x15 | 0x34       | 0x38        |
  | 2   | 0x22 | 0x23 | 0x21 | 0x36       | 0x38        |
  | 3   | 0x01 | 0x00 | 0x02 | 0x31       | 0x07        |
  | 4   | 0x0D | 0x0C | 0x0E | 0x33       | 0x07        |
  | 5   | 0x19 | 0x18 | 0x1A | 0x35       | 0x07        |
  | 6   | 0x04 | 0x05 | 0x03 | 0x31       | 0x38        |
  | 7   | 0x10 | 0x11 | 0x0F | 0x33       | 0x38        |
  | 8   | 0x1C | 0x1D | 0x1B | 0x35       | 0x38        |

  LEDs 3+6, 4+7 and 5+8 share an enable register (`0x07 | 0x38`).
- Setup (`aw20036_set_current`): page 0; reg `0x02 = 0x01`;
  reg `0x03 = current + (reg 0x03 & 0x0F)`; page 0; reg `0x01 = 0x00`.
- Hardware pattern engines 0–2: registers `0x44+n`, `0x47+n`,
  `0x4A+4n`…`0x4D+4n` and `0x56+n`. They are started by setting bit `n` in
  `0x43` (optionally bit `n+4`) and in `0x59`. Status register `0x0B` bits
  `0x10`/`0x20`/`0x40` mean "pattern n done". The interrupt arrives on P0.02.

## Touch controller (0x15)

The interrupt handler reads register `0x01` (gesture ID), retrying up to 10
times on I²C error. Value 3 triggers the "open menu" event.
