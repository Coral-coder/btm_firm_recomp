# Bond Touch More firmware: main / int_mngr / event_mngr / battery / touch_low_level / watchdog

Static analysis only; nothing was modified. Everything below is read from the listing or the binary at the address given, except items marked *unconfirmed*.

Three corrections to existing notes:
- **I2C 0x6A is not a charger/PMIC.** It is the touch controller's bootloader address (Hynitron boot handshake), used only in touch init.
- **`names.txt` is wrong about sched code 6.** Code 6 comes from the P0.15 GPIO handler, not from touch reg 0x01 == 3. Gesture 3 produces sched 5 → FSM 6.
- **P0.15 is the INT of an accelerometer** on bit-banged SPI (P0.10/11/12/14), not touch-related.

SVC numbering used (S130 v2.0.1): 0x3C `sd_power_system_off`, 0x44 `sd_power_gpregret_set`, 0x46 `sd_power_gpregret_get`, 0x48 `sd_app_evt_wait`. app_timer prescaler is 0, so 1 tick = 1/32768 s.

## 1. Boot sequence

`main` is at 0x1f840.

| # | Call site | Target | What it does |
|---|---|---|---|
| 1 | 0x1f842 | 0x29e78 | Init retained diagnostics block at 0x20007F80 (see section 8) |
| 2 | 0x1f846 | 0x28d14 | Watchdog init, start and first feed (section 7) |
| 3 | 0x1f852 | `app_timer_init` 0x1ba14 | prescaler 0, op-queue arg 9 (so `APP_TIMER_OP_QUEUE_SIZE` = 8, *unconfirmed*), buffer 0x20002410, no scheduler hook |
| 4 | 0x1f862, 0x1f872 | `app_timer_create` | Battery timer and 1 Hz timer (section 2) |
| 5 | 0x1f87a | 0x1fdec | GPIO/GPIOTE init; also creates the 30 ms touch re-read timer |
| 6 | 0x1f87e | 0x24490 | `app_sched_init(event_size 12, queue 20, buf 0x20002644)` |
| 7 | 0x1f882–0x1f89c | inline | Read `POWER->RESETREAS` (0x40000400) directly (SoftDevice not yet enabled). If bit 1 (DOG) is set, 0x29e44 increments the WDT-reset counter. Write the value back to clear it; save at 0x20002550 (getter 0x1fae0, used by nvs init at 0x2966e) |
| 8 | 0x1f89e | 0x24234 | Accelerometer init over bit-banged SPI (section 8) |
| 9 | 0x1f8a2, 0x1f8a6 | 0x1fcd0, 0x1fd04 | TWI0 (SCL 30, SDA 29) and TWI1 (SCL 3, SDA 4): 400 kHz (0x06400000), priority 3, no handler (blocking), then enable |
| 10 | 0x1f8ac | 0x287bc | Touch init with callback 0x1f785 (section 6) |
| 11 | 0x1f8b4 | 0x1d92c | `nrf_pwr_mgmt_init(0x8000)`; error line 0x1D1 |
| 12 | 0x1f8bc | 0x28d74 | WDT feed |
| 13 | 0x1f8c0 | 0x25c5c | BLE stack init (outside scope, read from pseudo-C only). `softdevice_handler_init` with LF clock config at 0x3336c = `01 00 00 07`: XTAL, rc_ctiv 0, rc_temp_ctiv 0, 20 ppm; event buffer 0x200027f0 length 0x48; no scheduler. Then default config (0 central, 1 peripheral), `vs_uuid_count` = 5, service-changed = 1, `softdevice_enable` 0x31214. Device name "Bond More" |
| 14 | 0x1f8c4 | 0x2953c | nvs_storage init |
| 15 | 0x1f8c8–0x1f8d0 | 0x219f8, 0x29db0, 0x22690 | Display init, then stored brightness applied |
| 16 | 0x1f8d4–0x1f8fa | 0x29de8→0x23238, 0x22e34, 0x22be0, 0x237f4, 0x22ccc, 0x29de8→0x23238, 0x29df4→0x232c0 | Motor level table, four motor/haptic init calls (not individually examined), level table again, balance |
| 17 | 0x1f8fe | 0x284d8 | FSM init: disables touch event classes 1–3 and the touch INT, puts touch to sleep (0x28c48), 0x21ad4, accelerometer suspend (0x242d0), creates 4 FSM timers, dispatches FSM event 1 |
| 18 | 0x1f902 | 0x292bc | nvs: uses version getters 0x1fb08/0c/10 = 1, 1, 3 (firmware "1.1.3", format `%d.%d.%d_%d` at 0x33330, build getter 0x1fb3c = 0); purpose *unconfirmed* |
| 19 | 0x1f906 | 0x28d74 | WDT feed |
| 20 | 0x1f90a | 0x266cc | BLE services/advertising (outside scope) |
| 21 | 0x1f90e | 0x24750 | ADC init (section 5) |
| 22 | 0x1f912–0x1f92e | `app_timer_start` | Battery timer 0x3C0000 ticks, immediate battery event via 0x244b4, then 1 Hz timer 0x8000 ticks |

Main loop (0x1f936–0x1f93e): `app_sched_execute()` (0x1b364), then `nrf_pwr_mgmt_run()` (0x1d944), which calls `sd_app_evt_wait`. Nothing else: no WDT feed in the loop.

## 2. app_timers

| ID variable (const ptr) | Mode | Period | Handler | Created / started | Action |
|---|---|---|---|---|---|
| 0x200024ec (0x32f14) | repeated | 0x3C0000 = 120 000 ms | 0x1f824 | 0x1f862 / 0x1f91a | Posts sched code 7 (battery sample). Start/stop wrapper 0x1fa74(on); start also posts an immediate sample |
| 0x2000252c (0x32f18) | repeated | 0x8000 = 1000 ms | 0x1f75c | 0x1f872 / 0x1f92e | Posts sched code 11 (uptime tick). Wrapper 0x1faac(on) |
| 0x20002558 (0x32f38) | single | 0x3D7 = 983 ticks = 30 ms | 0x1fd70 | 0x1fdf6 / 0x1fd5c | Extra touch read (0x28970) 30 ms after the last touch INT; restarted on each INT |
| 0x20003048 (0x33c58) | single | 0xCCD = 3277 ticks = 100 ms | 0x286e8 | 0x287d2 / 0x289c4 | Touch release timeout; restarted on every touch read |

FSM timers created in 0x284d8 (outside scope, listed for completeness; periods set by the FSM):
- 0x20002e3c single, handler 0x26918 → sched 10
- 0x20002dfc repeated, handler 0x26990 → sched 10
- 0x20002e1c single, handler 0x2690c → `0x1f9f8(1)` (re-enable single-finger events)
- 0x20002e5c single, handler 0x26904 → 0x268b0

## 3. Scheduler events → FSM events

Event struct is 12 bytes: byte 0 = code, bytes 1–11 zero. Payloads travel in globals, not in the event. All are posted with handler 0x24380, which jumps through the table at 0x33044 (12 entries, read from the binary). FSM dispatch is 0x269b8.

| Code | Posted by | Action in 0x24380 | FSM event |
|---|---|---|---|
| 0, 1 | nobody | none (0x24396) | none |
| 2 | touch callback type 3 (release), 0x1f7b8 | | 7 |
| 3 | touch callback type 2 (one finger), 0x1f7d0; Y stored at 0x200024eb | | 4 |
| 4 | touch callback type 1 (two fingers), 0x1f7f0; Y1 → 0x200024e9, Y2 → 0x200024ea | | 5 |
| 5 | touch callback type 0 (gesture reg 0x01 == 3), 0x1f7c4 | | 6 |
| 6 | P0.15 rising handler 0x1fd78 (only if the pin reads high) | 0x22b10: feed WDT, spin until display-busy flag 0x2000262c is 0 | 9 (open menu) |
| 7 | battery timer / 0x244b4 | 0x24788 sample; if battery state == 3 | 0x1C (28), only when critical |
| 8 | P0.08 handler 0x1fdb0, pin low | flag 0x200024e8 = 1; P0.19 pulse (section 4); 100 ms busy delay | 10 |
| 9 | P0.08 handler, pin high | flag 0x200024e8 = 0 | 11 |
| 10 | FSM timers 0x26918 / 0x26990 | | 3 |
| 11 | 1 Hz timer 0x1f75c | retained[+4]++ (uptime s); if byte 0x20002841 == 0 then retained[+8]++ | none |

The touch callback (0x1f784) gates each class on an enable flag, set by 0x1f9f8(n) and cleared by 0x1f9bc(n):
- n = 0 → 0x2000254e (release)
- n = 1 → 0x2000254d (one finger)
- n = 2 → 0x2000254c (two fingers)
- n = 3 → 0x2000254f (gesture)

Position getters: 0x1fa38 (single Y), 0x1fa44 (Y1, Y2).

## 4. GPIO

Set up in 0x1fdec. GPIOTE inputs use `nrf_drv_gpiote_in_init` with `hi_accuracy` = 0, so they are PORT/SENSE based.

| Pin | Role | Config | Evidence |
|---|---|---|---|
| P0.01 | unused on Rev ≥ 2 | PIN_CNF = 2 (disconnected) when revision > 1 | 0x1feb4 |
| P0.02 | AW20036 INTN | in, HiToLo, pull-up (cfg 0x0302); handler 0x1fd38 → 0x22af4, clear busy flag, 0x21ad4 | 0x1fe92 |
| P0.03 / P0.04 | TWI1 SCL / SDA | | 0x1fd04 |
| P0.06 | battery sense, AIN7 | ADC PSEL = 0x80 | .data 0x200020d8 |
| P0.08 | charger/USB present, active low (*role unconfirmed*) | in, toggle, pull-up (cfg 0x0303); handler 0x1fdb0: low → sched 8, high → sched 9. Polled by 0x1ff98 (returns 1 if low) | 0x1fe4a |
| P0.09 | charger status (*role unconfirmed*) | plain input, pull-up (PIN_CNF = 0x0C), no interrupt. Read by 0x1ffac: if P0.08 is low, wait 1 s, return P0.09 level; else 0 | 0x1fe82 |
| P0.10 / 11 / 12 / 14 | accelerometer SPI: SCK / MOSI / MISO / CS | 10, 11, 14 output (3) driven high; 12 input (0). All set to 2 on suspend | 0x24234, 0x23a74, 0x24318 |
| P0.15 | accelerometer INT | in, LoToHi, pull-down (cfg 0x0101); handler 0x1fd78 → sched 6. Enable/disable 0x1ff60 | 0x1fe0a |
| P0.17 | touch reset, active low | output; pulsed low 20 ms | 0x287fe, 0x28c00 |
| P0.18 | touch INT | in, HiToLo, pull-up (cfg 0x0302); handler 0x1fd4c. Enable/disable 0x1ff7c | 0x1fe68 |
| P0.19 | unknown output | disconnected at init. On sched 8: PIN_CNF = 3, 1 ms, OUTCLR bit 19, 1 ms, PIN_CNF = 2 (a low pulse of about 2 ms) | 0x1fe42, 0x243e8–0x2443c |
| P0.20–P0.25 | unused | PIN_CNF = 2 | 0x1fe38, 0x1febe–0x1fed8 |
| P0.28 | revision strap | 0x1fb14 on every call: pull-up, read, back to disconnected. High → 1 (Rev 1), low → 2 (Rev 2) | 0x1fb14 |
| P0.29 / P0.30 | TWI0 SDA / SCL | Touch init additionally writes PIN_CNF = 3 (push-pull output) and OUTSET on both, after TWI0 is enabled; effect on the nRF51 TWI *unconfirmed* | 0x287dc–0x287fc |

Resolved from the old table:
- P0.08: behaviour is consistent with a charger power-good line. After a plug-in, the FSM reads P0.09 one second later and enters state 12 if high, state 11 if low (0x282dc–0x282ec, via transition helper 0x285b8). That fits "charged" vs "charging" on an open-drain STAT pin, but is *unconfirmed* on hardware.
- P0.15: accelerometer interrupt, not a button and not touch.
- No motor-enable, LED-enable or charger-enable output is driven in these translation units; only P0.17, P0.19, the SPI pins and the P0.29/30 writes above.

## 5. Battery

- **Init** (0x24750): `nrf_drv_adc_init` with priority 3 and handler 0x244dd, then channel enable for the config at 0x200020d8.
- **Channel config** word 0x00008002 (.data image at 0x340a0 + offset): 10-bit resolution, input not prescaled (1/1), reference VBG 1.2 V, AIN7 (P0.06).
- **Sampling**: every 120 s plus once at boot and whenever the timer is re-enabled. Blocking `nrf_drv_adc_sample_convert` (0x1f47c) in 0x24788, with a WDT feed before and after.
- **Millivolts** (0x247a0–0x247b6): `mV = ((raw * 1200) / 1023) << 2`, stored as u16 at 0x200027ee. The ×4 implies an external 1:4 divider (*unconfirmed*); full scale is 4.8 V and the step is 4 mV.
- **Percent** (u8 at 0x200027ec): above 4099 mV → 100. Otherwise linear interpolation between adjacent rows of the table at 0x330c0 (`{u8 pct, u8 pad, u16 mV}` × 12); below 3400 mV → 0.

| % | 100 | 90 | 80 | 70 | 60 | 50 | 40 | 30 | 20 | 10 | 5 | 0 |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| mV | 4100 | 4000 | 3920 | 3880 | 3840 | 3810 | 3780 | 3750 | 3700 | 3620 | 3550 | 3400 |

- **Thresholds** come from settings (0x20003098 +0x18 and +0x1C, low byte of each; getter 0x29d18). If either is 0, defaults are written by 0x29d00: 0x0092F80F and 0x0000FF05, i.e. 15 % and 5 %. The upper bytes look like RGB colours (F8,92,00 and FF,00,00), *unconfirmed*.
- **State** byte 0x200027e8 (getter 0x248b8):
  - 3 if pct ≤ 5: sched handler raises FSM event 0x1C.
  - 2 if pct ≤ 15: if flag 0x200020d5 is set (initial value 1, setter 0x248c4), sets display-busy and plays `display_animation(1)`.
  - 1 otherwise.
- After every sample, 0x26020 pushes the percentage to the BLE battery characteristic. Getter 0x248a0 returns `{pct, mV}` packed in one word.
- The ADC callback 0x244dc (buffer average, same formula) is dead code: the only calls into the ADC driver are init, channel enable and sample_convert.
- **Charging detection**: GPIO only (P0.08 / P0.09, section 4). There is no fuel gauge or charger on I2C.
- **I2C 0x6A**: three accesses in the whole image, all in touch init on TWI0:
  - 0x28784: write `[0xA0, 0x01, 0xAB]`
  - 0x28738: write `[0xA0, 0x03]`, then read 1 byte, expecting 0x55
  
  The other `#0x6a` literals (0x1b462, 0x2971c) are not I2C; 0x2971c is an error line number.

## 6. Touch controller (0x15 on TWI0)

**Chip**: Hynitron CST8xx family. Evidence: address 0x15; bootloader at 0x6A with the 0xA001 ← 0xAB / 0xA003 handshake; reg 0x01 gesture, 0x02 finger count, 0x04/0x06 X/Y low bytes; 0xE5 = 0x03 deep sleep. The firmware also reads 0x0A/0x0C (second point), so it is a two-point part or custom firmware. The exact variant is *unconfirmed*; I believe the 0x55 boot ID points to the CST816T/D generation rather than the CST816S, but that is from memory. Registers 0xA7 (chip ID), 0xFA and 0xFE are never accessed.

**Init** (0x287bc):
1. Create the release timer.
2. P0.29 and P0.30 set as outputs, high.
3. P0.17 output; low 20 ms, high; low 20 ms, high; wait 10 ms.
4. Up to 10 attempts of the 0x6A boot handshake. Delay 8 ms after an I2C failure, 4 ms after a wrong ID; stop when 0x55 is read. The result is not stored or used.
5. P0.17 low 20 ms, then high (leaves boot mode).
6. Store the callback at 0x20003044.

No configuration registers are written to 0x15: no sensitivity, auto-sleep or IRQ-control writes.

**Other commands**:
- 0x28c00: reset/wake. P0.17 low 20 ms, then high.
- 0x28c48: sleep. Up to 10 tries of: reset pulse, 100 ms wait, write `[0xE5, 0x03]`.
- The FSM calls these, and 0x1ff7c to gate the INT, on state changes.

**Read** (0x28970), triggered by the P0.18 falling edge (0x1fd4c) and once more by the 30 ms timer. Each register is a separate 1-byte write (no stop) plus 1-byte read, retried up to 10 times.

| Register | Meaning | Stored at |
|---|---|---|
| 0x01 | gesture; value 3 → callback type 0 and the rest is skipped | |
| 0x02 | finger count | 0x20003030 |
| 0x04 | X1 low (unused by main) | 0x20003032 |
| 0x06 | Y1 low | 0x20003036 |
| 0x0A | X2 low (unused) | 0x20003034 |
| 0x0C | Y2 low | 0x20003038 |

- Callback message, 12 bytes: `{u8 type; u8 x1; u8 y1; u8 x2; u8 y2; pad[3]; u32 touch_duration_ms}`. Types: 0 gesture, 1 two fingers, 2 one finger, 3 release. A finger count other than 1 or 2 produces no callback.
- Time base: RTC1 COUNTER delta × 125 / 4096 = ms, accumulated at 0x20003068 while the "touching" flag 0x20003040 is set.
- Release is not read from the chip. It is the 100 ms timer expiring with no further reads (0x286e8): type 3 with the total duration, then the duration is cleared.
- Position → LED (0x1fa5c, and the same formula inline at 0x26e86): `pos = (240 - Y) / 26`, with 9 clamped to 8. So Y runs 0..240 along the bar, giving 9 slots of 26 counts, and Y = 240 maps to LED 0. Only the low byte of Y is used; X is ignored.
- Two fingers give two independent positions (Y1, Y2).
- Only gesture code 3 is recognised. In the standard CST816 map 3 is a swipe; its meaning on this bar is *unconfirmed*.

## 7. Watchdog

- Init at 0x28d14 from the config at 0x33c88 = `{behaviour 0, reload 3000 ms, priority 3}`.
- `CONFIG` = 0, so it pauses in sleep and in debug halt. CRV = 3000 × 32768 / 1000 = 98304 (0x1f616–0x1f62a).
- One channel (RR0), id at 0x20003074. Started at 0x1f668.
- Feed is 0x28d74, writing 0x6E524635 to RR[ch] (0x1f724).
- Because it pauses in sleep, the 3 s budget is CPU-awake time. There is no feed in the main loop.
- Feeds come from: main (twice during init), the battery sample (twice every 120 s), sched code 6, the display, motor, FSM, nvs and app_cmd paths (about 110 call sites), and the error and HardFault handlers.
- The WDT timeout IRQ callback 0x28d04 also "feeds", which cannot stop the reset.

## 8. Other behaviour a rewrite must reproduce

**System-off entry** (bond3_fsm; `sd_power_system_off` wrapper at 0x26900):
- 0x26954 (timer-driven): 0x21ad4, accelerometer suspend, 0x23224; then PIN_CNF[18] = PIN_CNF[8] = 0x0003000C (pull-up, SENSE low), then system off. Wake sources are the touch INT or a charger plug-in.
- 0x26c2e (state 11 path, entered on FSM event 10): LEDs mask 0x38, accelerometer suspend, touch sleep; PIN_CNF[8] = 0x0002000C (pull-up, SENSE high), then system off. Wake is on P0.08 rising (unplug). So the MCU is off while on the charger (*interpretation unconfirmed*).
- Every wake is a full reset. Other GPIOTE-enabled pins keep their SENSE unless the FSM has disabled them via 0x1ff60 / 0x1ff7c.

**GPREGRET / DFU**:
- App command path at 0x24dfe: optional animation 11 on Rev 2, `sd_power_gpregret_set(0xB1)` (0x248d0), feed, 1.5 s delay, feed, gpregret get (0x248d4), feed, `NVIC_SystemReset`.
- 0xB1 is the SDK 12 `BOOTLOADER_DFU_START` value.

**Error handler** (`app_error_fault_handler` 0x1fb84, reached from `app_error_handler` 0x1b210 and the SoftDevice fault path 0x30fe6):
- Logs, records the fault in the retained block (0x29f4c) and in 0x2000250c.
- Then `sd_power_gpregret_set(0xB1)`, feed, 1.5 s delay, feed, system reset. Any app error therefore reboots into the DFU bootloader.
- Assert callback 0x1f82c calls `app_error_handler(0xDEADBEEF, line, file)`.

**HardFault** (0x1d8e4 → 0x1fb40): stores the stacked PC and a count in the retained block, plays `display_animation(2)`, then loops forever feeding the WDT once a second. It never resets.

**Other resets**: plain `NVIC_SystemReset` at 0x1faec (called from nvs init at 0x29926) and at 0x25862 (BLE).

**Retained RAM block** at 0x20007F80, above the stack, 0x26 bytes, zeroed unless the u16 at +0x16 equals 0xCAFE:

| Offset | Content | Writer |
|---|---|---|
| +0x04 | uptime seconds | 0x29ec0 |
| +0x08 | seconds while byte 0x20002841 == 0 | 0x29edc |
| +0x0C | HardFault count (u16) | 0x29e34 |
| +0x0E | WDT-reset count (u16) | 0x29e44 |
| +0x10 | HardFault PC | 0x29e34 |
| +0x18 / +0x1C | last fault id / info | 0x29f4c |
| +0x20 | app-error count (u16) | 0x29f4c |

**Accelerometer** (code at 0x23a74–0x2436c, between `HMD_AW86224` and `event_mngr`; not in `tus.txt`):
- Bit-banged SPI: CS P0.14, SCK P0.10, MOSI P0.11, MISO P0.12. Read is 0x23a74 (reg | 0x80), write is 0x23e34.
- Init (0x24234) writes, in order: 0x10 = 0x05, 0x16 = 0x50, 0x17 = 0x00, 0x19 = 0x10, 0x1A = 0x00, 0x20 = 0x8C, 0x21 = 0x00, 0x2A = 0x07, 0x2B = 0x0A, 0x0F = 0x00, 0x11 = 0x14.
- Suspend (0x242d0): 0x11 |= 0x80; 0x7F ← 0x83, 0x69, 0xBD; 0x8C &= ~0x40; pins released; flag 0x20002642 = 1.
- Resume (0x24340): 0x11 &= 0x7F, then re-init.
- Tap threshold setter (0x2436c): 0x2B = (a << 5) | (b & 0x1F).
- The register map and the 0x7F unlock sequence match the MiraMEMS DA213/DA217 family (*unconfirmed*). Its INT on P0.15 is the "open menu" tap.

**Hardware revision**: getter 0x1fb14 is used by display, app_cmd, FSM and BLE to select Rev 1 / Rev 2 behaviour and the `Bond3_Rev_n` string.

## Open questions

1. P0.19: what the 2 ms low pulse on charger plug-in drives.
2. P0.08 / P0.09 polarity and meaning on hardware, and which charger IC is fitted (there is none on I2C).
3. The battery divider ratio (the firmware assumes ×4 on P0.06) and whether the divider is switched.
4. The exact Hynitron part, the meaning of gesture code 3 on this bar, and whether the push-pull writes to P0.29/P0.30 in touch init matter.
5. Which accelerometer interrupt (single or double tap) reg 0x16 = 0x50 / 0x19 = 0x10 selects, and the exact chip.
6. The purpose of 0x292bc and 0x266cc, and the four motor init calls in step 16: only their call order was established.
7. SoftDevice enable details (RAM start, attribute table size, TX power) live in 0x25c5c / 0x31214 and were only read from pseudo-C.
8. Whether `nrf_pwr_mgmt_init`'s 0x8000 argument has any effect (0x1d92c ignores it).
