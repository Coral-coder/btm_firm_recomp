# btm_firm_recomp

Recompilation project for **Bond Touch More** (v3 / BTM) firmware.

Target: **nRF51822_xxac** + SoftDevice **S130 v2.0.1**, built with **nRF5 SDK
12.3.0** and `arm-none-eabi-gcc`. The application links at flash base
`0x1B000`, immediately after the S130 SoftDevice — matching the base recorded
in `fw-src/bondTouchMore/names.txt` and the vendor image.

## What this is

`fw-src/` holds Ghidra/Keil **decompiler output** for five Bond Touch devices
(reference material, not buildable source). This project reconstructs the
**bondTouchMore** target into a genuinely compilable, flashable firmware
project, bringing device subsystems across from the decompiled reference one
at a time while keeping the build green at every step.

## Replacement firmware

`firmware/bondTouchMore/` is a new, original firmware for the device, built on
SDK 12.3 / S130 with the hardware facts recovered from the vendor image
(`docs/hardware.md`). It is separate from the matching (byte-identical) work
in `matching/`.

Current state: SoftDevice/timer bring-up, board-revision strap (P0.28),
low-power pin setup, both I2C buses (TWI0 P0.30/P0.29, TWI1 P0.03/P0.04) and a
complete AW20036 LED driver (framebuffer, per-LED enable bits, global current,
hardware pattern engines, status/IRQ service). Boots to a dim teal on all nine
LEDs. Next: AW86224 haptics on both buses, touch controller (0x15, INT P0.18),
GPIOTE for the interrupt lines, then BLE.

## Layout

```
firmware/bondTouchMore/
  Makefile                 # arm-none-eabi build (overrides SDK's 2015 toolchain path)
  bondTouchMore_nrf51.ld   # linker script: FLASH 0x1B000, 32 KB RAM part
  config/sdk_config.h      # SDK module configuration (TWI enabled)
  main.c                   # entry point + SoftDevice/clock/timer bring-up + subsystem hooks
  aw20036.c / aw20036.h    # AW20036 9-LED matrix driver (reconstructed)
scripts/fetch_sdk.sh       # downloads + stages the nRF5 SDK at build/sdk (gitignored)
fw-src/                    # decompiled reference for all targets (input material)
build/                     # SDK staging (gitignored, not committed)
```

## Building

```sh
# 1. Toolchain (Debian/Ubuntu):
sudo apt-get install -y gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi

# 2. Stage the Nordic SDK (one-time, ~70 MB download):
./scripts/fetch_sdk.sh

# 3. Build:
make -C firmware/bondTouchMore
```

Output: `firmware/bondTouchMore/_build/nrf51822_xxac.{out,hex,bin}`.

Verified: `.text`/vector table at `0x1B000`, initial SP `0x20008000`
(top of 32 KB RAM), reset vector resolves to `Reset_Handler`, `.data` loads
from flash to RAM. (The newlib `_read/_write/...` "not implemented" link
warnings are expected on bare metal — those syscalls are never called.)

Flashing to real hardware (needs a SWD probe + `nrfjprog`):

```sh
make -C firmware/bondTouchMore flash_softdevice   # once
make -C firmware/bondTouchMore flash
```

## Reconstruction status

| Subsystem | Source refs (names.txt) | Status |
|-----------|-------------------------|--------|
| Toolchain + SDK + linker/startup | — | ✅ builds + links at correct layout |
| System bring-up (SoftDevice, clock, app_timer, main loop) | `0x1b114` reset path | ✅ skeleton |
| AW20036 LED matrix driver | `0x2024c`, `0x203e8`, `0x20108`, `0x2084c`, `0x2087c`, `0x20824`, `0x20614` | ✅ reconstructed (behavioural) |
| Dual AW86224 haptics | `0x22db8`, `0x23238`, `0x232c0`, `0x232d4` | ⬜ hook stubbed |
| Touch front-end + FFB2 sample path | `0x254cc` | ⬜ hook stubbed |
| State machine (21 states) | `0x269b8`, `btm_fsm.py` | ⬜ hook stubbed |
| BLE app-command protocol | `0x249c4` dispatch, table `0x3312c` | ⬜ hook stubbed |

### Notes on fidelity

This reconstructs the **vendor's observable behaviour**, not a byte-identical
image (a from-source rebuild with a modern compiler never is). The decompiler
output references ~1,500 absolute data addresses and ~600 unnamed functions
whose exact layouts only exist in the original link.

Where a detail depends on an in-flash data table, it is isolated behind a
single table in the relevant module so the exact values can be dropped in from
the vendor image. The **AW20036 channel and enable register maps are exact**,
extracted from the vendor image by `tools/extract_aw20036_map.py`, which
emulates the register-map builder `FUN_00020614` with Unicorn and reads the
resulting command records. The driver's page model (`0xF0` select; `0xC0`/
`0xC1`/`0xC2` for the enable/PWM/scaling pages) and the `PWM = colour >> 2`
rule were likewise confirmed against the image.

The vendor image (`reference/nrf51822_xxac.bin`, the application at flash
`0x1B000`) is **not committed**; place it there to re-run the extraction tool.

The AW20036 driver faithfully reproduces the wire protocol: 2-byte `[reg,val]`
writes to I2C slave `0x3A`, page-2 scaling (27 bytes) then page-1 PWM
(27 bytes) then the packed enable registers (`0x31..0x36`), and the
`set_brightness` clamp fix-up seen at `0x20824`.
