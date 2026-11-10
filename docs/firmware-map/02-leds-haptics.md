# Bond Touch More: display, AW86224 haptics and remaining AW20036 items

Read-only analysis; nothing in the repo was modified. Evidence is the listing/pseudo-C plus a Unicorn emulation of the vendor functions with `nrf_drv_twi_tx` (0x1eeac) / `nrf_drv_twi_rx` (0x1ef70) stubbed, so the register sequences below are what the code actually emits. Delay loops are `nrf_delay_us`-style (about 1 µs per iteration), so "ms" for blocking animations excludes I2C time.

Register names come from two public datasheets of the same chip families, not the exact parts: AW20108 (for the AW20036) and AW86223 (for the AW86224). The firmware's register usage matches both maps, but treat the names as unconfirmed for the exact parts.

Corrections to existing docs:
- **AW20036 pages are the other way round from `hardware.md`**: page 1 is DIM (6-bit DC current, firmware writes colour>>2) and page 2 is FADE (8-bit PWM, firmware writes brightness). Page 3 is the pattern-select register per channel.
- **AW86224 register 0x1E is not a gain register.** It is CONTCFG7 `DRV2_LVL`, the sustained drive level in CONT mode. The map you listed is shifted by one: 0x07 PLAYCFG2 (GAIN), 0x08 PLAYCFG3, 0x09 PLAYCFG4, 0x0A–0x16 WAVCFG, 0x18–0x22 CONTCFG. Register 0x00 is SRST; the chip ID is at 0x64.
- **The address range 0x23a74–0x2437f is not haptics.** It is a bit-banged SPI accelerometer driver (see §2.6).
- **The motor balance table is `.data`**, not initialised at run time as `FIRMWARE_LED_VIBE.md` says.

---

## 1. display module (0x21310–0x22be0)

### 1.1 State and tables

| Address | Init | Meaning |
|---|---|---|
| 0x20002578 | bss | `m_aw_leds[9]`, 15 bytes each |
| 0x2000209c | `00 25 25` | AW default colour |
| 0x2000209f | `20 20 20` | AW default per-channel scale |
| 0x200020a4 | `00 00 FF` | factory LED test blue |
| 0x200020a8 | `00 C0 00` | factory LED test green |
| 0x200020ac | `90 00 00` | red: factory test, finger 2, "cancel" sweep |
| 0x200020b0 | `70 50 40` | default warm white: sweeps, pairing, finger 1 |
| 0x200020b3 | `01` | `m_display_asleep` (1 = AW20036 powered down) |
| 0x200020b4 | `25 24 23 22 20 1e 1b 18 14 10 0b 05` | slot-sweep step delays: 37,36,35,34,32,30,27,24,20,16,11,5 ms |
| 0x200020c0 | `C8` | brightness (FADE of a "full" LED), default 200 |
| 0x200020c1 | `08` | dim brightness; becomes `max(1, brightness>>3)` once set |
| 0x200020d5 | `01` | battery-alert animation allowed (setter 0x248c4) |
| 0x20002600 | bss | fallback colour for colour mode 0; never written, so black |
| 0x20002603 | bss | colour mode |
| 0x20002604 / 0x20002608 | bss | software-animation descriptor pointer and step; never written |
| 0x2000260c | bss | the module's app_timer |
| 0x2000262c | bss | "pattern busy" flag |
| 0x20002634 / 0x20002630 | bss | colour 1 / colour 2 (written by `ffb2_on_write` at 0x254f8 / 0x25500) |

Jump tables read from the binary:
- 0x32fa8 (animation 0..11): `214ae 21418 21510 21530 21550 21570 21576 21582 215a0 215ac 2146a 2148c`
- 0x32fd8 (scheduler event 0..7): `21e20 21e42 21e64 21dd2 21ea4 21eb8 21dea 21e0c`
- 0x32ff8 (partner-menu page 0..7): `22340 2212c 22166 221a4 22218 22254 222c8 21ff6`

### 1.2 Timers

The module owns one app_timer: id 0x2000260c, created in `display_init` (0x21a00) as REPEATED with handler 0x21310. The handler posts a scheduler event to 0x21324, which steps a descriptor (`step_fn` at +0xc, `end_cb` at +0x10, "all off at end" at +4).

**This is dead code.** Nothing ever starts the timer or writes the descriptor pointer; the only reference is the `app_timer_stop` at 0x21354. Every animation is either an AW20036 hardware pattern or a blocking delay loop. The 50 ms touch tick is an FSM timer (0x20002dfc, 0x666 ticks).

### 1.3 Power control, init, brightness

P0.01 is the AW20036 enable pin (inferred from sequencing; unconfirmed on hardware).
- Off: `PIN_CNF[1]=3` (output), `OUTCLR` bit 1.
- On, Rev 1: `OUTSET` bit 1.
- On, Rev 2: `PIN_CNF[1]=2` (input, disconnected), which relies on an external pull-up.

| Function | Addr | Behaviour |
|---|---|---|
| `display_init` | 0x219f8 | Create timer; P0.01 low 1 ms; enable; `aw20036_init_table`; 5 ms; `aw20036_set_current(settings[0x22]<<4)`; load brightness from settings if non-zero. Leaves `asleep=1`. |
| `display_wake_now` | 0x21380 | Enable; 2 ms; `aw20036_set_current`; `asleep=0`. Inlined again in 0x21b00 and 0x21cf0. |
| `display_sleep` | 0x21ad4 | If awake: P0.01 low, `asleep=1`. |
| `display_wake` | 0x21b00 | If asleep: as 0x21380. |
| `display_set_brightness(b)` | 0x22690 | `b==0` ignored; else `bright=b`, `dim=max(1,b>>3)`. Cmd 0x4D passes `args[1]` unchecked (0x24f36). |

Brightness handling:
- Brightness is 1..255 and is written to **page 2 FADE** (8-bit PWM) for each channel. `aw20036_set_brightness` subtracts 2 from G and 4 from B when G≥3 and B≥5.
- Colour goes to **page 1 DIM** as `rgb>>2`.
- Global current is separate: `settings[0x22]` (cmd 0x4E, valid codes 0–3 and 8–14, 0x29dbc) goes to GCCR[7:4]. Per the family datasheet: 0=10, 1=20, 2=30, 3=40 mA; 8=3.3, 9=6.7, 10=10, 11=13.3, 12=20, 13=26.7, 14=40 mA.
- Hardware animations ignore the brightness setting: they use FADEH=200, FADEL=0.

### 1.4 Public API

Colours are packed `R | G<<8 | B<<16`.

| Addr | Name | Args | What it shows |
|---|---|---|---|
| 0x213e8 | `display_animation(idx)` | 0..11 | Hardware pattern, §1.6. Wakes the chip if asleep, else all off first. |
| 0x21f68 | `display_animation_checked(idx)` | | Calls 0x213e8 if idx<12. |
| 0x21f78 | `display_animation_stop(idx)` | | Only for idx 0 or 7: `aw20036_pattern_stop(0)`, then all off if awake. |
| 0x215dc | `anim_sweep_a(rgb, ms)` | | Blocking converge, §1.7. |
| 0x217e4 | `anim_sweep_b(rgb, ms)` | | Blocking diverge, §1.7. |
| 0x226b0 | sweep A, default colour, 50 ms | | Wrapped by `0x28674(1)` … `0x28674(0)`, then `fsm_dispatch_event(0x1f)`. Callers: s1/ev1 (0x26ace), s4/ev1 (0x273aa). |
| 0x226d8 | sweep A, red `90 00 00`, 100 ms | | Same wrapper. Caller: s7/ev6 recording cancelled (0x26e40). |
| 0x22700 | sweep B, slot colour, 50 ms | slot | Same wrapper. Caller: s7/ev1 recording start (0x27760). |
| 0x22738 | `anim_slot_sweep_a(slot)` | | Comet LED 0→8, §1.7. Caller: recording finished (0x28344). |
| 0x228e4 | `anim_slot_sweep_b(slot)` | | Comet LED 8→0. Caller: incoming touch with reply flag (0x28196). |
| 0x21b70 | all LEDs colour | rgb | All off if awake, 9 LEDs = rgb, enable, commit; brightness unchanged. Factory LED test (0x281e4, 0x2822a). |
| 0x21bb0 | `display_mask_color(mask9, rgb)` | | All off, WDT feed, each set bit: colour, on, `commit_led`. Callers 0x26c66 / 0x26cca, mask 0x38, white. |
| 0x21cd0 | set all brightness | b | All 9 scales = b, commit. |
| 0x21cf0 | `display_all_leds_color(rgb, b)` | | Wake if asleep; brightness; commit; all off; colour; on; commit (2×63 writes). |
| 0x21f9c | `display_partner_menu(page)` | | §1.9. |
| 0x22364 | `display_leds_off` | | `aw20036_all_off` if awake. |
| 0x2237c | `display_show(mode, pos[], idx)` | | Touch renderer, §1.8. |
| 0x2260c | `display_factory_touch_two_color(n, pos[])` | | n=1: LED pos[0] in `70 50 40`. n=2: pos[0] in `70 50 40`, pos[1] in `90 00 00`. Brightness fixed at 15. |
| 0x22a88 | `display_test_colors_split(c1, c2)` | | LEDs 0–3 = c1, LED 4 off, LEDs 5–8 = c2, full brightness. |
| 0x22af4 | `display_irq_service` | | §3.3. |
| 0x22b10 | `display_wait_pattern` | | WDT feed, then `while (busy) {}`. |
| 0x22b24 | `display_set_busy(v)` | | |
| 0x22b30 / 0x22b4c / 0x22b68 | post display event 0 / 6 / 7 | | |
| 0x22b84 | `cmd4b_led_color(args)` | | `args[0]==0`: post `{2, args[1..4]}`; else post `{3}`. |
| 0x22bc8 / 0x22bd4 | set / get colour mode | | |

### 1.5 Scheduler event handler 0x21dbc

Event byte 0 selects the case. "Blocking" means: wait `busy==0`, set `busy=1`, start the pattern, then spin until the P0.02 interrupt clears `busy`.

| Ev | Target | Action | Posted by |
|---|---|---|---|
| 0 | 0x21e20 | Animation 5 (red, 2 blinks), blocking | 0x22b30 from s8/ev3, s8/ev1a, s8/evd, s7/evd |
| 1 | 0x21e42 | Animation 4 (green, 2 blinks), blocking | No poster found; unused |
| 2 | 0x21e64 | `{2, sel, R, G, B}`: wake; alert flag = 0. `sel==1`: brightness on all 9, then only LEDs 0 and 1 lit. Otherwise `display_all_leds_color(rgb, saved brightness)`. | cmd 0x4B |
| 3 | 0x21dd2 | If awake: all off and power the chip down. Alert flag = 1. | cmd 0x4B clear |
| 4 | 0x21ea4 | Wait not busy; `fsm_dispatch_event(0x1b)` (TEST_COLORS) | app_cmd 0x24bc8 (cmd 0x47) |
| 5 | 0x21eb8 | Wait not busy; `fsm_dispatch_event(0x15)` (play received touch) | `ffb2_on_write` 0x25580 |
| 6 | 0x21dea | Animation 6 (white, 3 blinks), blocking | 0x22b4c from s1/ev4, s1/ev9 |
| 7 | 0x21e0c | Animation 7 (LED 4 slot-colour blink), not blocking | 0x22b68 from s6/ev1 (SYS_STATE 0x89) |

### 1.6 Animations 0..11: all use hardware pattern engine 0

There are no software timers here. Common sequence, traced:
1. All off (page 0, regs 0x31–0x36 = 0).
2. `aw20036_fill(colour)`: page 1, 36 DIM writes.
3. `aw20036_pattern_config`: 0x44=FADEH, 0x47=FADEL, 0x4A, 0x4B, 0x4C, 0x4D, 0x56=0x01 (auto-breath mode).
4. `aw20036_set_all_page3(1)`: all 36 channels take FADE from pattern 0.
5. LED enables.
6. `aw20036_pattern_start(0, 1)`: 0x43 |= 0x11 (enable + interrupt enable), 0x59 |= 0x01 (run).

FADEH = 0xC8 and FADEL = 0 in every case. Time codes: 1 = 0.13 s, 4 = 0.51 s, 6 = 1.04 s, 8 = 2.1 s; rise/fall code 0 = 0 s. Register 0x4A is rise<<4 | on; 0x4B is fall<<4 | off; loop count is `(0x4C & 0xF)<<8 | 0x4D`, 0 = endless.

| Idx | Colour | LEDs | 4A | 4B | 4C | 4D | Look | Used by |
|---|---|---|---|---|---|---|---|---|
| 0 | white | 3, 4, 5 | 64 | 64 | 00 | 00 | Breathe: rise 1.04, on 0.51, fall 1.04, off 0.51 s, endless | 0x28018 after SYS_STATE 0x8B; stopped at 0x26aec / 0x26cba |
| 1 | battery-alert colour A (`settings[0x19..0x1b]`) | all | 01 | 01 | 00 | 03 | 3 blinks, 0.13 on / 0.13 off | battery module 0x2470a, 0x2482c (if alert flag set; sets `busy=1`) |
| 2 | battery-alert colour B (`settings[0x1d..0x1f]`) | all | 01 | 08 | 00 | 00 | 0.13 s flash every 2.2 s, endless | 0x1fb48 (endless loop feeding the WDT); state 13 (0x26bae) |
| 3 | green `00 FF 00` | all | 64 | 64 | 00 | 00 | Green breathe, endless | No caller found |
| 4 | green | all | 01 | 01 | 00 | 02 | 2 blinks | Display event 1 (unused) |
| 5 | red `FF 00 00` | all | 01 | 01 | 00 | 02 | 2 blinks | Display event 0 |
| 6 | white | all | 01 | 01 | 00 | 03 | 3 blinks | Display event 6 |
| 7 | slot colour of current slot (0x28604) | 4 only | 04 | 04 | 00 | 00 | 0.51 on / 0.51 off, endless | Display event 7 (reply menu); stopped at 0x2767c |
| 8 | alert colour A | all | 01 | 08 | 02 | 02 | 0.13 on / 2.1 off, loop count 0x202 | 0x26b24: state 11 / ev 0xb, battery ≤ threshold A; blocking |
| 9 | alert colour B | all | 01 | 08 | 02 | 00 | Same, loop count 0x200 | 0x2807a: battery ≤ threshold B; blocking |
| 10 | green | all | 01 | 08 | 02 | 02 | Same, loop count 0x202 | 0x27fc2: battery ≥ 80 %; blocking |
| 11 | blue `00 00 FF` | all | 01 | 06 | 00 | 00 | 0.13 s flash every 1.17 s, endless | app_cmd 0x24e08, Rev 2 only, just before `0x248d0(0xb1)` (DFU entry, unconfirmed) |
| >11 | uninitialised | | | | | | | Unreachable through 0x21f68 |

Quirks:
- `aw20036_fill` writes the 8-bit colour byte **unshifted** into the 6-bit DIM register. That is harmless for 0x00 / 0xFF, but configurable colours (alert A/B, slot colour) lose their top two bits if the chip ignores them (unconfirmed).
- For 8 / 9 / 10 the value 2 sits in 0x4C, which per the datasheet makes the loop count 512–514 (about 19 minutes), while the caller busy-waits on the finish interrupt under a 3 s watchdog (config at 0x33c88: reload 3000 ms). See open question 1.

### 1.7 Blocking software sweeps

Emulated. Values are FADE with brightness 200: full, >>2 (50), >>4 (12). One `aw20036_commit_all` (63 I2C writes) per step.

`anim_sweep_a(rgb, ms)` converges from the ends to the centre. 8 frames plus a final off; total 9 × ms (450 ms at 50 ms/step):
```
t0  200  .   .   .   .   .   .   .  200
t1   50 200  .   .   .   .   .  200  50
t2   12  50 200  .   .   .  200  50  12
t3    .  12  50 200  .  200  50  12   .
t4    .   .  12  50 200  50  12   .   .
t5    .   .   .  12  50  12   .   .   .
t6    .   .   .   .  12   .   .   .   .
t7   (all enables off)   t8 all_off
```

`anim_sweep_b(rgb, ms)` is the mirror image in time, diverging from the centre: LED 4, then 3/5, 2/6, 1/7, 0/8, with the same 50 / 12 tails. Total 9 × ms.

`anim_slot_sweep_a(slot)` is a 3-LED comet (200 / 50 / 12) running LED 0→8 and off the end. 12 steps with delays 37,36,35,34,32,30,27,24,20,16,11,5 ms (accelerating), then 100 ms, all off, 100 ms + 250 ms. Total about 757 ms, then `fsm_dispatch_event(0x1f)`. `anim_slot_sweep_b` is the same from LED 8→0.

### 1.8 Touch rendering

`ffb2_on_write` (0x254cc), first packet: `[slot 1..3][len][npkt 1..10][c1 RGB][c2 RGB][replyFlag]`. Colour mode is 1 if c1 == c2, else 2. Packets are copied 20 bytes each to `0x20002e84 + (k-1)*20`. After the last packet it posts display event 5, which raises FSM event 0x15.

Playback is FSM state 10:
- **Entry** (0x275bc): SYS_STATE 0x87, motor start, `len = hdr[1]`, display wake. If the reply flag is set: haptic double tick (0x23850) and `anim_slot_sweep_b(sender)`. Then start the repeating timer 0x20002dfc at 0x666 ticks (50 ms).
- **Tick** (0x274b0), with `s = buf[idx]`:
  - `s == 0xFF`: LEDs off, motors silenced.
  - `hi == 0xF`: `display_show(1, [lo], idx)` and `motor_pan_position(lo)`.
  - Otherwise: `display_show(2, [lo, hi], idx)` and `motor_pan_position((lo+hi)>>1)`.
  - Then if `idx < len-1`, `idx++`; else end at once (LEDs off, motors silenced, timer stop, then idle or state 6 if the reply flag is set).
- **The last sample is drawn and cleared in the same tick**, so `len` samples give `len-1` visible 50 ms frames.
- **Exit** (0x27596): motor stop, LEDs off, display sleep. Cmd 0x4C (ev 0x1d, 0x27404) aborts.

Colour, chosen at the top of `display_show` (0x22388–0x2253e):

| Mode | Colour |
|---|---|
| 1 | colour 1 (0x20002634) |
| 2 | Per channel: `c1 + (idx * (c2 - c1)) / len`, signed divide, with `len = hdr[1]` (0x268f4). A gradient over time, the same for every lit LED. It never reaches c2. |
| 3 | `settings_get_slot_color(idx)`. Set only on recording entry (0x2777c); `idx` is then the slot. |
| other | 0x20002600 (black) |

Geometry, verified by emulation (B = brightness, d = dim):
- Mode 1, finger at p: p = B; p−1 = d if p>0; p+1 = d if p<8.
- Mode 2, L = min, H = max, span = H−L: L = B, H = B; L−1 = d if L>0; H+1 = d if H<8.
  - span 2: the middle LED = B>>1.
  - span ≥ 3: L+1 = d and H−1 = d; the rest stay off.
  - span 0 or 1: nothing more.
- Every call clears all 9 enables first and ends with one `commit_all`.
- Nibbles 9..14 are not range-checked; they index past the LED table.

Recording (state 7) uses the same calls with mode 3 for live feedback (0x26ea4 / 0x26efe), after `anim_sweep_b(slot colour, 50)` and a motor start.

### 1.9 Partner menu `display_partner_menu(page)`

The page is the active-slot bitmask. Called at 0x27ee2 (SYS_STATE 0x88).

| Page | LEDs |
|---|---|
| 0, or >7 | all off |
| 1 / 2 / 4 | LEDs 1..7 in the colour of slot 1 / 2 / 3, full brightness; LEDs 0 and 8 off |
| 3 | LEDs 0–3 slot 1, LEDs 4–8 slot 2 |
| 5 | LEDs 0–3 slot 1, LEDs 4–8 slot 3 |
| 6 | LEDs 0–3 slot 2, LEDs 4–8 slot 3 |
| 7 | LEDs 0,1,2 slot 1; 3,4,5 slot 2; 6,7,8 slot 3. The centre of each triple (1, 4, 7) is full, the outer two dim. |

### 1.10 Indications by context

State numbers are from the jump table at 0x333a4; state names are unconfirmed.

| Context | Display | Haptics |
|---|---|---|
| State 11 entry when `0x1ffac()==0`, SYS_STATE 0x8B (charging, unconfirmed) | Animation 0: white breathing on LEDs 3–5 | Accelerometer sleep, AW86224 reset low |
| State 11 otherwise, SYS_STATE 0x8C (charged or power-off, unconfirmed) | Brightness = setting, then `display_mask_color(0x38, white)`: LEDs 3–5 steady | Same |
| State 11 / ev 0xb (0x26aea) | Stop animation 0. Level ≥ 80: animation 10 (green). Level ≤ threshold B: animation 9. Level ≤ threshold A: animation 8. Otherwise nothing. Then the 0x26aa8 path (ev 2, sweep A in default colour). | |
| Battery module (0x246f6 / 0x24818) | Animation 1 (3 blinks, alert colour A) if alert flag set | |
| State 13, and handler 0x1fb40 | Animation 2 (alert colour B flash, endless) | |
| Idle entry (s4/ev1) and s1/ev1 | Wake, sweep A in `70 50 40` at 50 ms | |
| Pairing, s2/ev13, SYS_STATE 0x84 (0x27346) | All 9 LEDs `70 50 40` at saved brightness | |
| s1/ev4 and s1/ev9 | Display event 6: white, 3 blinks | |
| Send failed / disconnect (s8/ev3, ev1a, evd; s7/evd) | Display event 0: red, 2 blinks | |
| Reply menu, s6/ev1, SYS_STATE 0x89 | Display event 7: LED 4 blinking in slot colour | |
| Recording start / cancel / end | Sweep B in slot colour / sweep A in red at 100 ms / `anim_slot_sweep_a(slot)` | Start / silence / stop |
| TEST_COLORS, state 20, SYS_STATE 0x8E | `display_test_colors_split` | |
| Factory LED test, state 15 | Red `90 00 00`, green `00 C0 00`, blue `00 00 FF`, 500 ms each (0x4000 ticks) | |
| Factory touch tests, states 16 / 17 | `display_factory_touch_two_color` | `motor_pan_position` in state 16 |

I did not find a dedicated power-on or power-off animation beyond the default-colour sweep A on idle entry and the 0x8B / 0x8C displays.

---

## 2. HMD_AW86224 (0x22be0–0x23a74)

### 2.1 Addressing and pins

- Two chips, both at I2C address 0x58.
- **Motor on TWI0** (`nrf_drv_twi_t` at 0x2000208c: 0x40003000, instance 0; SCL P0.30, SDA P0.29).
- **Motor on TWI1** (0x20002094: 0x40004000, instance 1; shared with the AW20036).
- Reset pins: **P0.05 and P0.07** (`PIN_CNF=3`, low then high). Which pin belongs to which chip is unconfirmed.
- No interrupt pin is used and no timers are owned.

### 2.2 Init `hmd_init` 0x22e34

Called once from main (0x1f8dc). Full trace in order:

| # | Bus | Operation | Meaning |
|---|---|---|---|
| 1 | GPIO | P0.05 output, low, high; P0.07 output, low, high; delay 10 ms | Reset pulse with no low hold time |
| 2 | TWI0, TWI1 | W 0x08 = 0x06 | PLAYCFG3: BRK_EN = 1, PLAY_MODE = 2 (CONT) |
| 3 | TWI0, TWI1 | R 0x1D, W 0x1D = v \| 0x80 | CONTCFG6: TRACK_EN |
| 4 | TWI0, TWI1 | R 0x1D, W 0x1D = (v & 0x80) \| 0x7F | DRV1_LVL = 0x7F |
| 5 | TWI0, TWI1 | W 0x18 = 0xF1 | CONTCFG1: EDGE_FRE = 0xF (800 Hz), EN_F0_DET = 0, SIN_MODE = 1 (cos) |
| 6 | TWI0, then TWI1 | W 0x1D = 0x8F, 0x1E = 0x0F, 0x1F = 0x00, 0x20 = 0xFF | TRACK_EN with DRV1_LVL = 0x0F; DRV2_LVL = 0x0F; DRV1_TIME = 0; DRV2_TIME = 0xFF |

That is everything. There is:
- no chip-ID read, soft reset or status read;
- no RAM waveform load (0x40–0x42 never touched) and no RTP: **there is no waveform data in the image**;
- no F0 or LRA calibration (EN_F0_DET stays 0; 0x25–0x28 and TRIM never touched);
- no GAIN write (0x07);
- no interrupt mask or SYSCTRL writes.

The only play mode is **CONT**: a filtered square wave with LRA tracking.

Main then does: start (0x22be0), silence (0x237f4), stop (0x22ccc), `motor_set_level_table(settings[8])`, `motor_set_balance((int8)settings[9])`.

### 2.3 Functions

| Addr | Name | Behaviour (traced) |
|---|---|---|
| 0x22be0 | `motor_start` | 0x1E = 0 on TWI0, TWI1, TWI0, TWI1; then 0x09 = 0x01 (GO) on TWI0, TWI1. Callers: main, s10/ev1, s7/ev1, s16/ev1. |
| 0x22ccc | `motor_stop` | 0x1E = 0 four times as above; then 0x09 = 0x06 on both. Bit 1 is STOP; bit 2 is reserved in the datasheet. |
| 0x237f4 | `motor_silence` | 0x1E = 0 on TWI0, TWI1. The drive keeps running at level 0. |
| 0x22db8 | `motor_pan_position(p)` | TWI1: 0x1E = `gain[p] − bal`. TWI0: 0x1E = `gain[8−p] + bal`. Two writes, no GO. |
| 0x23238 | `motor_set_level_table(level)` | Stores level at 0x200020cd; `gain[i] = level * base[i] / 100` into 0x20002638. |
| 0x232c0 | `motor_set_balance(i)` | `bal` (0x20002641) = `balance_tbl[i]`. |
| 0x232d4 | `motor_preview_buzz` | Blocking 1.8 s, cmd 0x48 with `args[0]==0`. Start; pan(0) 500 ms; silence 100 ms; pan(8) 500 ms; silence 100 ms; pan(4) 500 ms; silence 100 ms; stop. |
| 0x23850 | `motor_double_tick` | Blocking: both motors 0x1E = 0x50 for 25 ms, 0 for 150 ms, 0x50 for 25 ms, 0, then 250 ms. Fixed level 80, ignores the user level. No GO of its own; used after `motor_start` (0x2818e). |
| 0x23224 | `motor_power_down` | `OUTCLR` P0.05 and P0.07: both chips held in reset. Callers are the sleep / power-off paths (0x2695e, 0x26bd8, 0x26c6e, 0x26cd2, 0x277be, 0x28042), each paired with accelerometer sleep. |

Nothing re-runs `hmd_init` after `motor_power_down`, so those paths must end in a reset or system-off (unconfirmed, FSM scope).

### 2.4 Pan table, level and balance

| Address | Dump | Meaning |
|---|---|---|
| 0x200020c4 (`.data`) | `00 14 23 2d 32 37 41 50 64` | base[0..8] = 0, 20, 35, 45, 50, 55, 65, 80, 100 |
| 0x200020cd (`.data`) | `32` | current level, default 50 |
| 0x200020d0 (`.data`) | `fc fe 00 02 04` | balance offsets −4, −2, 0, +2, +4 for index 0..4 |
| 0x20002638 (bss) | | gain[9] |
| 0x20002641 (bss) | | bal (int8) |

- The level is 0..100 (cmd 0x48, validated in app_cmd). `gain[i] = level*base[i]/100`, so level 100 gives 0..100 and level 60 gives `00 0c 15 1b 1e 21 27 30 3c`.
- The value is `DRV2_LVL` (7-bit, output ≈ VDD × lvl / 128), so the maximum of 100 is about 78 % of full scale.
- At position p the TWI1 motor gets `gain[p]` and the TWI0 motor gets `gain[8−p]`. So TWI1 is the motor at the position-8 end and TWI0 at the position-0 end. p = 4 gives 50 % / 50 %; p = 0 gives 0 / 100 %.
- **No clamping.** With balance ≠ 0, `gain[0] ± bal` underflows to 0xFC / 0xFE and is written as-is. If the chip ignores bit 7 that is near full drive on the "silent" side (unconfirmed). A rewrite should clamp to 0..0x7F.
- Level 0 gives all gains 0, i.e. silent playback apart from that underflow. Send balance index 2.

### 2.5 Timing and error handling

- The module has no pulse timers. During playback and recording the drive is started once (GO in CONT mode) and the amplitude is modulated every 50 ms by writing 0x1E; silence is 0x1E = 0, and STOP is sent on state exit. This requires DRV2_TIME = 0xFF to mean "until STOP" (inferred from the code path; unconfirmed in the datasheet).
- Minimum effective pulse is one 50 ms sample. The only shorter one is the 25 ms double tick. There is no maximum.
- Every write is `APP_ERROR_CHECK`ed (file `../../../common/motors/HMD_AW86224.c`, line 0x31 for writes, 0x41 / 0x43 for reads). On failure it goes to `app_error_handler` 0x1b210, then the fault handler 0x1fb84, which logs, stores to 0x2000250c and calls `0x1f758(0xb1)`. No retry and no graceful degradation: a missing motor is fatal.

### 2.6 Not haptics: 0x23a74–0x2437f

Bit-banged SPI: CS P0.14, clock P0.10, data out P0.11, data in P0.12.

| Addr | Function |
|---|---|
| 0x23a74 | read register |
| 0x23e34 | write register |
| 0x24234 | init (first call in main): 0x10=05, 0x16=50, 0x17=00, 0x19=10, 0x1A=00, 0x20=8C, 0x21=00, 0x2A=07, 0x2B=0A, 0x0F=00, 0x11=14 |
| 0x242d0 | sleep: 0x11 \|= 0x80; 0x7F = 83, 69, BD; 0x8C &= ~0x40; pins released |
| 0x24340 | wake |
| 0x2436c | tap threshold: 0x2B = a*32 + (b & 0x1f) |

The register set matches a MiraMEMS DA217-class accelerometer (unconfirmed). It belongs in another translation unit; `tus.txt` should split here.

---

## 3. Remaining AW20036 items

### 3.1 Bring-up order

1. P0.01 low for 1 ms, then enable (§1.3).
2. `aw20036_init_table` (RAM only).
3. Wait 5 ms at boot, or 2 ms on later wakes.
4. `aw20036_set_current(code<<4)`:
   - 0xF0 = 0xC0 (page 0)
   - 0x02 = 0x01 (RSTR soft reset)
   - read 0x03, write 0x03 = `code<<4 | (old & 0x0F)` (GCCR IMAX)
   - 0xF0 = 0xC0
   - 0x01 = 0x00 (SLPCR: leave sleep)

Nothing else is configured at init. Register 0x80 (SIZE), FCD, CLKSYS and the fault config stay at defaults, and the ID is never read. Every wake repeats the soft reset, so all chip state is rebuilt from the RAM table on the next commit.

### 3.2 Pattern engines

- **Only engine 0 is ever configured or started** (the single `aw20036_pattern_start` call is at 0x21462, with n = 0 and the interrupt flag set). Engines 1 and 2 appear only in the generic driver and in the stop branches of `aw20036_check_status`.
- Parameters per animation are in §1.6.
- Stop is `aw20036_pattern_stop(0)`: clear bit 0 in 0x43 and in 0x59.

### 3.3 IRQ service from P0.02

P0.02 is falling-edge with pull-up (GPIOTE init at 0x1fe9a). The handler 0x1fd38 runs in GPIOTE interrupt context and does blocking I2C:
1. `display_irq_service` 0x22af4: if awake, `aw20036_all_off`; then `aw20036_check_status`, which selects page 0, reads 0x0B (ISRFLT, clear on read) and for bits 0x10 / 0x20 / 0x40 stops engine 0 / 1 / 2.
2. `display_set_busy(0)`: releases the main-context `while (busy)` wait.
3. `display_sleep()`: powers the AW20036 down.

So every finished finite pattern ends with LEDs off and the chip powered down.

---

## 4. What a rewrite must reproduce, and what can go

**LEDs: keep**
- Power sequencing on P0.01 including the Rev 1 / Rev 2 difference, and the reset / IMAX / wake sequence after each power-up.
- The model: colour → DIM (>>2), brightness → FADE; `dim = max(1, b>>3)`; the G−2 / B−4 tweak if you want identical white.
- `display_show` geometry and the three colour modes including the time-gradient maths; the 50 ms tick with the "last sample not visible" behaviour.
- Partner-menu pages 0..7.
- The sweeps: A / B at 50 or 100 ms per step with 200 / 50 / 12 tails, and the slot comet with the 12-entry delay table. They can be timer-driven instead of blocking, but must still raise FSM event 0x1f at the end and bracket with `0x28674(1/0)`.
- Indications in use: animations 0, 1, 2, 5, 6, 7, 8, 9, 10 (and 11 if the DFU path is kept). These need not use the hardware engine, but "finite animation done → busy cleared → display asleep" must hold.
- Cmd 0x4B set / clear semantics, the cmd 0x47 split, and the alert flag 0x200020d5 that suppresses battery blinks while cmd 0x4B is active.
- Display events 4 and 5 are only trampolines into FSM events 0x1b / 0x15; any deferred call will do.

**Haptics: keep**
- The reset pulse on P0.05 / P0.07 and the 10-write CONT-mode init on each bus (§2.2).
- GO once on state entry, 0x1E updates per sample, 0x1E = 0 for silence, STOP on exit.
- The base table, `gain = level*base/100`, the mirrored pan (TWI1 = gain[p], TWI0 = gain[8−p]), and the balance offsets ∓4 … ±4. Add clamping.
- Two-finger position = (lo+hi)/2.
- The preview buzz (500 on / 100 off at positions 0, 8, 4) and the 25 / 150 / 25 ms double tick at level 0x50.
- Reset low on sleep.

**Safely droppable**
- The display app_timer and step-descriptor machinery (0x21310 / 0x21324, 0x20002604–0x2000260c): never used.
- Animations 3 and 4 and display event 1: no callers.
- Engines 1 and 2, and `aw20036_set_all_page3` values other than 1.
- Factory paths: `display_factory_touch_two_color`, the factory LED colour cycle (0x21b70 with a4 / a8 / ac), the cmd 0x4B `sel==1` variant (LEDs 0 and 1), states 15–17.
- Colour mode 0 and its fallback colour 0x20002600.
- The redundant double 0x1E = 0 writes in motor start / stop, the reserved bit 2 in the stop value, and the DRV1_LVL writes (DRV1_TIME is 0).
- The busy-wait design: replace with events. Do not copy blocking I2C inside the GPIOTE interrupt.

---

## Open questions

1. **Animations 8 / 9 / 10 loop count.** With the family datasheet layout the count is 512–514 loops of 2.23 s, yet the caller busy-waits on the finish interrupt with a 3 s watchdog and no feed inside the loop. The WDT event handler 0x28d04 does feed, but that may be too late on nRF51. Either the device watchdog-resets a few seconds after leaving the charger, something else pulls INTN low, or the AW20036 differs from the AW20108 here. Needs a hardware check or the AW20036 datasheet.
2. Exact AW20036 and AW86224 datasheets were not available; names and bit meanings are from the AW20108 and AW86223. In particular: how the chips treat DIM bits 7:6, DRV2_LVL bit 7, DRV2_TIME = 0xFF and PLAYCFG4 bit 2.
3. Which of P0.05 / P0.07 resets which AW86224; which physical end of the bar is position 0; whether P0.01 is truly the AW20036 enable and what Rev 2 has on it. `hardware.md` lists P0.01 as "unused on Rev 2" and does not list P0.05, P0.07 or the SPI pins P0.10 / 11 / 12 / 14.
4. Meaning of SYS_STATE 0x8B versus 0x8C (charging / charged versus power-off) and of the test at 0x1ffac; the semantics of states 1, 11, 13; what handler 0x1fb40 is (it loops forever on animation 2).
5. What 0x28674 (flag set around blocking sweeps) and 0x28604 (slot used by animation 7) refer to exactly: touch_low_level / FSM scope.
6. Which battery-alert threshold belongs to which colour (0x29d18 output order versus `settings[0x18]` / `[0x1c]`), and the default values of the alert colours, brightness, LED current, vibration level and balance in the settings TU.
7. After `motor_power_down` nothing re-initialises the chips; confirm that every such path ends in a reset or system-off.
8. Animation 11's trigger (app_cmd 0x24dfe, Rev 2 only) is assumed to be DFU entry.

Scratch tools (shared scratchpad, may be overwritten by other agents): /tmp/claude-0/-home-user/4f7f7e9a-96ce-53d9-95f6-373327c9aba4/scratchpad/ledhap/emu.py (Unicorn harness), /tmp/claude-0/-home-user/4f7f7e9a-96ce-53d9-95f6-373327c9aba4/scratchpad/ledhap/l1.py and /tmp/claude-0/-home-user/4f7f7e9a-96ce-53d9-95f6-373327c9aba4/scratchpad/ledhap/l2.py (display traces), /tmp/claude-0/-home-user/4f7f7e9a-96ce-53d9-95f6-373327c9aba4/scratchpad/ledhap/dd.py (table dumper). The haptic trace scripts h1–h3.py are in the scratchpad root.

Sources:
- [AW20108 datasheet (Awinic)](https://doc.awinic.com/doc/20230609wm/8a9a9ac8-1d8f-4e75-bf7a-67a04465c153.pdf)
- [AW86223 datasheet](https://www.ickey.cn/static-pf/datasheet/59/88/8788/59888788c175ccd57844913c134a8319.pdf)
