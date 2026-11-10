# Bond Touch More vendor firmware: BLE layer (app_cmd / ble_bond3_service / ble_bond3)

Static analysis only; nothing was modified or run on hardware. Addresses are absolute (file offset + 0x1B000). Items marked **unconfirmed** are inferences.

Three corrections to the SVC decoding and SDK labels, which the rest depends on:
- S130 v2.0.1 has `BLE_GAP_SVC_BASE = 0x70` (not 0x6C) and no NVIC SVCs. So 0x44 / 0x46 are `sd_power_gpregret_set` / `_get`, and 0x74 / 0x76 / 0x77 / 0x78 / 0x7A / 0x7B / 0x7C are adv_stop / disconnect / tx_power_set / appearance_set / ppcp_set / ppcp_get / device_name_set.
- `sdk_matches.tsv` mislabels 0x2e118: it is `pm_sec_params_set`. The neighbours are 0x2e130 `pm_conn_secure`, 0x2e148 `pm_conn_sec_config_reply`, 0x2e164 `pm_whitelist_set`, 0x2e17c `pm_device_identities_list_set`.
- 0x268b0 (labelled `gzp_id_req_cancel`) is the FFB2 receive-counter reset.

Other SDK entry points used: 0x2a74c `ble_advertising_init`, 0x2a8fc `ble_advertising_start`, 0x2a940 `ble_advertising_on_ble_evt`, 0x2a9d0 `..._on_sys_evt`, 0x305d4 `ble_db_discovery_init`, 0x306d8 `ble_db_discovery_start`, 0x30758 `ble_db_discovery_on_ble_evt`, 0x2fad4 `ble_ancs_c_on_db_disc_evt`, 0x2fd2c / 0x2fd68 ANCS notification-source / data-source CCCD enable, 0x310e8 `softdevice_handler_init`, 0x31214 `softdevice_enable`.

## 0. Function and RAM map

| Addr | Role |
|---|---|
| 0x248d8 | app_cmd scheduler handler (jump table 0x33114, types 0..5) |
| 0x249c4 | `ffb1_app_cmd_dispatch(buf, len)` (table 0x3312c) |
| 0x250a0 / 0x250cc | schedule "touch sent" / "touch played" counter increment (app_cmd types 3 / 4) |
| 0x25104 | `ble_bond3_service_init(p_srv, p_init)` |
| 0x25408 | db-discovery handler, forwards to ANCS |
| 0x25428 | conn-params event handler |
| 0x25468 | advertising event handler |
| 0x25480 | 1 s repeating "ANCS settle" timer handler |
| 0x254cc | `ffb2_on_write` (runs from the scheduler) |
| 0x255c0 | security-request timer handler (`pm_conn_secure`) |
| 0x25620 | advertising start (rebuilds whitelist, then `ble_advertising_start(SLOW)`) |
| 0x256e4 | peer-manager event handler (table 0x332b0) |
| 0x258c8 | ANCS client event handler |
| 0x25bc4 | send SYS_STATE: `[0x04, state]` |
| 0x25c50 | get last SYS_STATE |
| 0x25c5c | BLE stack / GAP / advertising / conn-params init (called from main at 0x1f8c0) |
| 0x25fa0 | `ffb1_notify(data, len)` |
| 0x26020 | BAS battery-level update |
| 0x260b0 | ANCS start (arms the security-request timer) |
| 0x26138 | BLE event dispatcher |
| 0x265f8 | start advertising if not already advertising |
| 0x26610 | `ffb2_notify(data, len)` |
| 0x26668 | disconnect with reason 0x13 if connected |
| 0x2669c | advertising stop |
| 0x266cc | services init: DIS, BAS, Bond3, ANCS client (main at 0x1f90a) |
| 0x268c8 | `pm_peers_delete` wrapper |

| RAM | Meaning |
|---|---|
| 0x200020e0 | last SYS_STATE byte |
| 0x200020e4 | 4 advertised UUIDs (.data) |
| 0x200020f4 | conn handle (0xFFFF when idle) |
| 0x200020f6 | FSM state |
| 0x20002838 | "advertising started" flag (stays 1 while connected) |
| 0x20002839 | ANCS started this connection |
| 0x2000283a | ANCS settled |
| 0x2000283c | AUID received from app |
| 0x20002840 | BAS CCCD enabled |
| 0x20002841 | connected |
| 0x20002844 | FFB1 20-byte buffer (shared by RX and TX) |
| 0x20002858 | FFB2 20-byte RX buffer |
| 0x200028bc | security-failure counter |
| 0x200028c0 | ANCS client instance |
| 0x20002a20 | 1 s ANCS settle timer |
| 0x20002aa0 | `ble_bas_t` |
| 0x20002ab8 | db discovery instance |
| 0x20002d18 | bond3 service struct (+0x30 FFB1 handles, +0x50 FFB2 handles, +0x6c FFB3 handles) |
| 0x20002d9c | "whitelist changed" flag |
| 0x20002db4 | security-request timer |
| 0x20002dd4 / 0x20002dd8 | whitelist peer count / peer ids (8) |
| 0x20002de8 | ANCS settle countdown |
| 0x20002df0 | "TX_COMPLETE drives FSM" flag |
| 0x20002df1 | FFB1 CCCD enabled |
| 0x20002df2 | FFB2 RX packet counter |
| 0x20002df3 / 0x20002df4 | FFB2 play length / packet count |
| 0x20002df5 | FFB2 CCCD enabled |
| 0x20002e5c | FFB2 RX timeout timer |
| 0x20002e84 | incoming touch buffer (10 × 20) |
| 0x20002f4c | recorded touch buffer (200) |
| 0x20003015 / 0x20003016 | incoming sender slot / selected partner slot |
| 0x20003078 | factory record (+8 lot, +0xc device id) |
| 0x20003098 | settings record (layout below) |
| 0x200030e0 | counters record |

Settings record at 0x20003098: +2 u16 version, +4 u32 AUID, +8 vibration level, +9 balance, +0xA ANCS enable, +0xC / +0x10 / +0x14 slot words (R, G, B in bytes 0..2, bit 24 = active), +0x18..0x1F battery alert, +0x20 sensitivity, +0x21 brightness, +0x22 LED current.

## 1. GATT database

SoftDevice enable (0x25c7c..0x25c9c): `softdevice_enable_get_default_config(central 0, periph 1)`, then `vs_uuid_count = 5` and `service_changed = 1`. LF clock from 0x3336c is `01 00 00 07` (XTAL, 20 ppm). Event buffer is 0x48 bytes, so ATT MTU is 23. `softdevice_handler_init` gets a NULL scheduler, so BLE events are handled in SWI2 interrupt context.

Order of creation: SoftDevice GAP and GATT, then DIS, BAS, Bond3 (0x266cc). The ANCS client registers 4 more vendor UUIDs but adds no server attributes. Every attribute permission byte is 0x11 (security mode 1 level 1, open). Nothing requires encryption.

| # | Service / characteristic | UUID | Props | Length | Initial value | CCCD |
|---|---|---|---|---|---|---|
| – | GAP: device name | 0x2A00 | read, write (open) | – | "Bond More" | – |
| – | GAP: appearance | 0x2A01 | read | 2 | 0x00C0 | – |
| – | GAP: PPCP | 0x2A04 | read | 8 | 30 00 78 00 00 00 90 01 | – |
| – | GATT: service changed | 0x2A05 | indicate | – | – | yes |
| 1 | **Device Information** | 0x180A | | | | |
| 1.1 | Manufacturer name | 0x2A29 | read | 15 | "Impossible Bond" (0x3333c) | – |
| 1.2 | Model number | 0x2A24 | read | 7 | "Bond003" (0x3334c) | – |
| 1.3 | Serial number | 0x2A25 | read | ? | see note | – |
| 1.4 | Hardware revision | 0x2A27 | read | 11 | "Bond3_Rev_1" if P0.28 reads high, else "Bond3_Rev_2" (0x1fb14) | – |
| 1.5 | Firmware revision | 0x2A26 | read | 7 | "3.1.1_0" | – |
| 2 | **Battery Service** | 0x180F | | | | |
| 2.1 | Battery level | 0x2A19 | read, notify | 1 | 100 | yes, open |
| 3 | **Bond3 service** | d3c0**0003**-add3-1d4b-0000-0000b5006bb1 | | | | |
| 3.1 | FFB1 | d3c0**ffb1**-… | read, write, write-no-response, notify (0x1E) | fixed 20 | 20 × 00 | yes, open |
| 3.2 | FFB2 | d3c0**ffb2**-… | read, write, write-no-response, notify (0x1E) | fixed 20 | 20 × 00 | yes, open |
| 3.3 | FFB3 | d3c0**ffb3**-… | read only | fixed 20 | `43 00 … 00` | – |

- **Vendor base UUID** at 0x33278: `b1 6b 00 b5 00 00 00 00 4b 1d d3 ad 00 00 c0 d3` (little-endian).
- **Serial number**: the string pointer is `sp+0x14` in 0x266cc, a 12-byte stack buffer that is never written (0x26710). The characteristic exists only if that garbage is non-empty, and its content is unpredictable. A GATT dump from a real unit is needed.
- **Firmware revision** is `siprintf("%d.%d.%d_%d", gen, major, minor, 0)` from the u16 at settings+2 (`gen<<12 | major<<6 | minor`). The constants are gen 3 (0x1fb10), major 1 (0x1fb08), minor 1 (0x1fb0c).
- **Absent from DIS**: software revision, system ID, PnP ID, IEEE cert. The DIS read permission is open.
- **BAS**: `ble_bas_init` struct at 0x2674c has `support_notification = 1`, no report reference, initial level 0x64.
- **Bond3 characteristics** are `vlen = 0`, `vloc = STACK`, max length 0x14, no read/write authorisation. Writes shorter than 20 bytes are accepted. A read returns the last 20 bytes written or notified.
- **Prepared / long writes** are refused: `RW_AUTHORIZE_REQUEST` with op 4..6 gets gatt_status 0x0182 (0x262e4), and `USER_MEM_REQUEST` gets a NULL reply (0x26270).
- **Handles** (unconfirmed, standard S130 layout with user handles from 0x000C): if the serial characteristic is absent, FFB1 value 0x1B and CCCD 0x1C, FFB2 value 0x1E and CCCD 0x1F, FFB3 value 0x21. Add 2 to each if serial is present.

**Disagreements with BLE_PROTOCOL.md:**
- There is no `d3c0ff10` characteristic. The "API version" is FFB3 = 0x43.
- All FFB1 and FFB2 notifications are exactly 20 bytes, zero-padded.

## 2. GAP

| Item | Value | Evidence |
|---|---|---|
| Device name | "Bond More", constant at 0x332ec, not derived from address or settings; write permission open | 0x25d36..0x25d48 |
| Address | never set by the app (no `sd_ble_gap_address_set`), so the SoftDevice default random-static address | – |
| Appearance | 0x00C0 (192, generic watch) | 0x25d5e |
| TX power | 0 dBm | 0x25d52 |
| PPCP | min 0x30 = 60 ms, max 0x78 = 150 ms, slave latency 0, supervision timeout 0x190 = 4 s | 0x25d74..0x25d80 |
| MTU | 23 | S130 v2 |

**Advertising** (`ble_advertising_init` at 0x25dd8):
- Mode config: only `ble_adv_slow_enabled = 1`. Slow interval 0x6E0 = 1100 ms, slow timeout 0xB4 = 180 s. Whitelist, directed and fast modes are all disabled.
- The only start call is `ble_advertising_start(4 = SLOW)` at 0x25684. It is ADV_IND, filter policy ANY.
- Advertising data has full name, appearance and flags 0x06. Both advertising data and scan response carry the same complete UUID list from 0x200020e4: `{0x180A,1} {0x180F,1} {0x0003,1} {0xF431,1}`, all type 1 (16-bit). The vendor service and the ANCS UUID are therefore advertised as bogus 16-bit UUIDs.

Advertising payload, 28 bytes, in SDK 12.3 encode order:
```
03 19 C0 00                              appearance
02 01 06                                 flags
09 03 0A 18 0F 18 03 00 31 F4            complete 16-bit UUID list
0A 09 42 6F 6E 64 20 4D 6F 72 65         complete name "Bond More"
```
Scan response, 10 bytes: `09 03 0A 18 0F 18 03 00 31 F4`. There is no manufacturer data.

**Restart policy:**
- The vendor's `ble_advertising_on_ble_evt` (0x2a940) does not restart advertising on disconnect.
- On the 180 s timeout the module goes IDLE, the handler at 0x25468 clears the flag and raises FSM event 0x0F, and FSM state 1 calls 0x265f8 to start again.
- In state 1 a 60 s timer runs only when the bracelet is unpaired (AUID == 0, 0x29194). On expiry it stops advertising and enters system-off (0x277b0). A paired bracelet advertises indefinitely (FSM detail, unconfirmed).
- `ble_advertising_start` is deferred while fstorage is busy.

**Connection-parameter negotiation** (`ble_conn_params_init` at 0x25dec..0x25e18):
- First update 0x28000 ticks = 5 s after connect, next 0xF0000 ticks = 30 s, at most 3 attempts.
- `start_on_notify_cccd_handle` is invalid, `disconnect_on_fail` is false, `p_conn_params` is NULL (uses PPCP).
- On `BLE_CONN_PARAMS_EVT_FAILED` the handler at 0x25428 disconnects with reason 0x3B.
- The app timer prescaler is 0, so 32768 ticks per second.

## 3. Security

| Item | Value | Evidence |
|---|---|---|
| Security params | byte0 0x31: bond 1, MITM 0, LESC 0, keypress 0, IO caps 3 (none), OOB 0. Key size 7..16. Own and peer key distribution: enc + id | 0x25ce8..0x25d14 |
| Pairing model | Just Works, legacy, bonding | – |
| Characteristics needing encryption | none | all permissions 0x11 |
| Security request from the bracelet | only when the ANCS flag (settings+0xA) is set: 0x260b0 arms a single-shot 1.5 s timer (0xC000 ticks) on connect or when ANCS is enabled; 0x255c0 then calls `pm_conn_secure(conn, false)` if the link is not encrypted | 0x260f4, 0x255c0 |
| With ANCS off | the bracelet never asks for security; the phone may still pair | – |
| Re-pairing | `PM_EVT_CONN_SEC_CONFIG_REQ` is answered with `allow_repairing = true` | 0x257c6 |
| Bond stored | on `CONN_SEC_SUCCEEDED` with procedure = bonding, the peer id is appended to the 8-entry list (wraps to entry 0 when full) | 0x25826 |
| After security succeeds | always `ble_db_discovery_start` | 0x25772 |
| Security failure | counter++, retry `pm_conn_secure`. If the retry call returns an error: after more than 3 failures `pm_peers_delete()`, then disconnect 0x13 | 0x25788..0x257c4 |
| Storage full | `fds_gc()`; after more than 50 consecutive events, `NVIC_SystemReset` | 0x2570a..0x2585e |
| Max bonds | no explicit cap; limited by FDS space. The whitelist list holds 8 | – |
| Whitelist | `pm_whitelist_set` and `pm_device_identities_list_set` are called before advertising and after disconnect, but advertising has the whitelist disabled, so there is no filtering | 0x25660..0x25670 |
| "Forget" | FFB1 command 0x56 calls `pm_peers_delete()` and notifies `[0xB1]`. On `PEERS_DELETE_SUCCEEDED`, advertising starts if not already started | 0x24a14, 0x25816 |
| Passkey / auth key | no handling | – |

**CCCD quirk:** the firmware tracks CCCD state in its own RAM flags, set only on a CCCD write event (0x26336, 0x2656c, 0x26580) and cleared on disconnect. A bonded client whose CCCD is restored by the stack without a new write gets no notifications.

**App-level pairing handshake** (FFB1 prefix bytes in 0x26350.. and FSM states 3 and 2):

| Step | Phone writes to FFB1 | Bracelet notifies | Notes |
|---|---|---|---|
| 0 | (connects) | `[04 8F]` WAITING_START_AUTH | Sent at connect, normally before the CCCD is enabled, so usually lost. A 10 s timer (0x50000 ticks) runs; on expiry, disconnect 0x13 (0x2778e, 0x2746a) |
| 1 | `[01 30]` | `[04 82]` WAITING_TOKEN | FSM event 0x10, handled only in state 3; 60 s timer (0x27432) |
| 2 | `[03 '1' '2' '3' '4' '5' '6' '7' '8']` | `[04 83]` WAITING_AUID | `memcmp` with 0x332f8, 8 bytes (0x2647a). A wrong token is silently ignored. 60 s timer |
| 3a | `[07 id0 id1 id2 id3]` (u32 LE; a 1-byte write is zero-extended), id equals stored AUID (settings+4) | connect animation, then `[04 85]` CONNECTED | FSM event 0x12 (0x263e0, 0x2720a) |
| 3b | same, id differs | `[04 84]` OOBE, bar lit in colour 70 50 40 | FSM event 0x13; 60 s timer |
| 4 | (user performs the touch gesture, FSM event 9) | `[04 8A]` WAIT_FOR_ACT_PAIRED, then `[02 13]` PAIRED_SIGNAL | 0x2728c; 60 s timer |
| 5 | `[01 31]` | AUID written to flash (0x25f8c → 0x29098), then `[04 85]` | FSM event 0x14 (0x272f4) |
| timeout | – | `[02 14]`, then disconnect 0x13 | 0x272c6 |

- `[01 3A]` returns `[04 state]` at any time, which is useful because the first SYS_STATE is usually lost.
- Prefix-1 commands are not gated by this handshake. DFU entry (0x2A), bond deletion (0x56) and all settings work on an unauthenticated, unencrypted link.

## 4. FFB1 command channel

**Framing** (0x2620a..0x264a4):
- A write to the FFB1 value handle with length > 0 is copied into a zeroed 20-byte buffer at 0x20002844, so missing argument bytes read as 0.
- There is no length check, checksum or sequence number.
- Byte 0 is a prefix, switched through table 0x33304 (values 0..10).
- Handling is immediate, in BLE-event (interrupt) context. Only flash saves and LED operations are pushed to `app_scheduler`.

| Prefix | Handler | Action |
|---|---|---|
| 0x01 | 0x2649c | `ffb1_app_cmd_dispatch(buf, 20)`; command = byte 1, args = bytes 2..19 |
| 0x03 | 0x2647a | token compare → FSM event 0x11 |
| 0x05 | 0x2643a | notify `[A5 m5 m4 m3 m2 m1 m0]`: FICR DEVICEADDR, most significant byte first, raw (top address-type bits not forced) |
| 0x06 | 0x2641e | copies `04 03 02 01 00 00` into the buffer; no notification; no effect |
| 0x07 | 0x263e0 | AUID → FSM event 0x12 or 0x13 |
| 0x09 | 0x2638e | notify the raw battery word with no header: `[percent, x, mV_lo, mV_hi]` (struct at 0x200027ec) |
| 0x0A | 0x26386 | FSM event 0x17; no state handles it |
| 0, 2, 4, 8, > 10 | 0x261e2 | ignored |

**Responses** go through `ffb1_notify` (0x25fa0): a 20-byte zero-padded notification on FFB1. It is dropped if not connected. If the FFB1 CCCD flag is clear it raises FSM event 0x21 instead.

**Command table** (0x3312c, index = cmd − 0x11, 71 entries). `a[n]` = frame byte n+2.

| Cmd | Handler | Args | Action | Notification |
|---|---|---|---|---|
| 0x11 | 0x24df6 | – | FSM event 0x23: factory motor test (state 16) → clear AUID, system-off | – |
| 0x12 | 0x24dee | – | FSM event 0x24: factory touch test (state 17) → LED test (state 15) | – |
| 0x13 | 0x24de6 | – | FSM event 0x25: LED test (state 15) → motor test (state 16) | – |
| 0x15 | 0x24dde | – | FSM event 0x26: CONNECTED (state 4) → factory touch test (state 17) | touch reports, see §5 |
| 0x17 | 0x24dd6 | – | FSM event 0x27: factory abort from states 15/16/17 → clear AUID, system-off | from state 17: `[A1 15 05]` |
| 0x18 | 0x24daa | a[0..3] = lot u32 LE | scheduled type 1 → 0x29364: store lot number (factory+8) to flash | – |
| 0x19 | 0x24da0 | – | read lot number | `[AA lot32LE]` |
| 0x1A | 0x24d74 | a[0..3] = device id u32 LE | scheduled type 2 → 0x29338: store device id (factory+0xC) | – |
| 0x1B | 0x24d26 | – | read device id | `[AB id32LE]` |
| 0x1C | 0x24cf8 | – | read firmware version | `[AC minor major gen 00]` = `AC 01 01 03 00` |
| 0x2A | 0x24dfe | – | DFU entry, see §8 | – (resets) |
| 0x30 | 0x24d48 | – | FSM event 0x10 (start auth; state 3 only) | `[04 82]` |
| 0x31 | 0x24cf0 | – | FSM event 0x14 (paired confirm; state 2 substate 4 only) | `[04 85]` later |
| 0x36 | 0x24cd8 | a[0] must be 1; a[1] = index; a[2] = value | writes a 2-byte entry in the table at 0x20003020 (`{1, value}`, or `{0, 4}` when value == 7). The index is not bounds-checked and the table is never read. Dead feature, and an out-of-bounds write hazard | – |
| 0x3A | 0x24ccc | – | read SYS_STATE | `[04 state]` |
| 0x40 | 0x24cbc | – | read counters +0xC / +0x10 (touches sent / touches played) | `[AD u32 u32]` |
| 0x41 | 0x24c88 | – | read counters +4 / +8 ("health") | `[AE u32 u32]` |
| 0x42 | 0x24c70 | – | first u16 of three flash records: factory+4, settings+0, counters+0 | `[AF u16 u16 u16]` |
| 0x43 | 0x24c68 | – | FSM event 0x18: CONNECTED → WAIT_DOUBLE_TAP (state 19) | `[04 8D]`; on gesture `[02 B2]` |
| 0x44 | 0x24c60 | – | FSM event 0x19: leave WAIT_DOUBLE_TAP → CONNECTED | `[04 85]` |
| 0x45 | 0x24bd0 | a[0]: 0 = write, non-zero = read. Write: three slots `[state, R, G, B]` at a[1..4], a[5..8], a[9..12] | per slot, if state ≤ 1: set active bit and colour (0x29cc0, 0x29c54); state > 1 leaves the slot unchanged. Then save (scheduled type 5) | always `[0A 45 s1 R G B s2 R G B s3 R G B]` |
| 0x47 | 0x24bb8 | `[R1 G1 B1 R2 G2 B2 secs]`; secs outside 1..10 becomes 10 | store test colours (0x28630), display sched 4 → FSM event 0x1B → TEST_COLORS (state 20) | `[04 8E]` |
| 0x48 | 0x24b62 | `[mode, level, balance, x]` | if mode is even, level ≤ 100 and balance ≤ 4: apply to the motors (0x23238, 0x232c0); mode 0 = preview buzz (0x232d4, a[3] unused, unconfirmed); other even mode (app sends 2) = store (0x29e00) and save. Otherwise read only | always `[0A 48 level balance]` (stored values) |
| 0x49 | 0x24b26 | a[0]: 0 = write, a[1..8] = `[low%, R, G, B, crit%, R, G, B]` | write copies 8 bytes to settings+0x18 and saves | `[0A 49 low R G B crit R G B]` |
| 0x4A | 0x24afe | a[0]: 0 = write, a[1] = value < 0x20 | settings+0x20, then device register 0x2B via 0x2436c; save | `[0A 4A value]` |
| 0x4B | 0x24af0 | `[mode, led, R, G, B]` | FSM event 0x1E, then `cmd4b_led_color`: mode 0 → display sched 2 (set colour), mode ≠ 0 → display sched 3 (clear) | – |
| 0x4C | 0x24ae8 | – | FSM event 0x1D: stop playback (state 10 → 4) | `[04 85]` |
| 0x4D | 0x24ac0 | a[0]: 0 = write, a[1] = brightness | `display_set_brightness`, store, save | `[0A 4D brightness]` |
| 0x4E | 0x24a82 | a[0]: 0 = write, a[1] = LED current | accepted low-nibble values 0..3 and 8..14 (0x29dbc); save | `[0A 4E value]` |
| 0x4F | 0x24a7a | – | FSM event 0x20: statistics dump (state 14) | 3 notifications, see §5 |
| 0x53 | 0x24a28 | a[0]: 0 = off, else on | ANCS flag (settings+0xA); when turning on and not yet started, 0x260b0 arms the security request; save | `[B0 flag]` |
| 0x56 | 0x24a14 | – | `pm_peers_delete()` | `[B1]` |
| 0x57 | 0x249fc | – | read ANCS flag | `[B0 flag]` |
| 0x14, 0x16, 0x1D..0x29, 0x2B..0x2F, 0x32..0x35, 0x37..0x39, 0x3B..0x3F, 0x46, 0x50..0x52, 0x54, 0x55 | 0x249f8 | – | unused, ignored | – |

Scheduler types of the app_cmd handler (0x248d8, table 0x33114): 1 set lot, 2 set device id, 3 sent counter++ and save, 4 played counter++ and save, 5 save settings (0x28fa4).

Defaults seen in the settings loader (0x291d6..0x29226): vibration level 0x32, balance 2, slot colours BF EB 23 / 23 91 EB / BF 26 BF, battery alert `0F F8 92 00 05 FF 00 00` (low 15 %, critical 5 %).

**Disagreements with the docs:**
- `[01 30]` is not a "firmware request". It is the start-auth trigger. The 0xAC firmware answer comes from `[01 1C]`.
- `0x43` / `0x44` are not ANCS on/off. They enter and leave WAIT_DOUBLE_TAP. ANCS is `0x53` (set) and `0x57` (get), both answered with `B0`.
- `0x19, 0x1B, 0x41, 0x42, 0x49, 0x1C` are plain reads, not feature enables.
- DFU `0x2A` needs no preceding `0x30`.

## 5. Notifications sent by the firmware

All are GATT notifications (no indications), 20 bytes, zero-padded.

**FFB1:**

| Bytes | When |
|---|---|
| `04 st` | on state entry (0x25bc4) and for command 0x3A. Values seen: 01 START/advertising, 8F WAITING_START_AUTH, 82 WAITING_TOKEN, 83 WAITING_AUID, 84 OOBE, 8A WAIT_FOR_ACT_PAIRED, 85 CONNECTED (after the connect animation, 0x282c4), 88 MENU, 86 MSG_RECORDING, 87 MSG_PLAYING, 89 REPLY_MENU, 8D WAIT_DOUBLE_TAP, 8E TEST_COLORS, 8B / 8C charger or power-down (state 11; the bracelet then disconnects with 0x13; exact meaning unconfirmed) |
| `02 13` | PAIRED_SIGNAL (0x272a2) |
| `02 14` | handshake timeout, followed by disconnect (0x272c6) |
| `02 B2` | gesture while in WAIT_DOUBLE_TAP (0x270a8) |
| `02 B4 slot` | partner slot 1..3 chosen in MENU, just before recording starts (0x27e34) |
| `0A 45/48/49/4A/4D/4E …` | settings acks, see §4 |
| `0A 4F u16 u32 u32` (12 bytes), then two header-less 20-byte packets | command 0x4F dump (0x27b66, 0x280c0, 0x28420), one packet per TX_COMPLETE, 3 s timeout. Packet 2: `[03 01 01 00, device id u32, u16, u16, u32, u32]`. Packet 3: `[u16, u16, u32, sent u32, played u32, battery mV u16, u16]`. The runtime counters are then cleared |
| `50 00 len d[0..16]`, `50 01 d[17..]` | ANCS app identifier (0x25966) |
| `50 02 len d[0..16]`, `50 03 d[17..]` | ANCS title (0x25a8e) |
| `A1 15 01 p` / `A1 15 02 p1 p2` / `A1 15 03` / `A1 15 04` / `A1 15 05` | factory touch test: one finger, two fingers, gesture, idle, exit (0x27ace, 0x27a38, 0x27a20, 0x27a06, 0x2797e). Touch reports are sent on every second event |
| `A5 mac[6]` | prefix 5 |
| `AA / AB / AC / AD / AE / AF / B0 / B1` | see §4 |
| raw `[percent x mV_lo mV_hi]` | prefix 9 |

`02 B3` exists as a constant (0x333a0) but byte 1 is always overwritten with B4. It is never sent.

**FFB2:** recorded-touch header and data packets, see §6.

**Battery level (0x2A19):** a 1-byte percent notification from 0x26020 on each battery measurement, only while connected and the BAS CCCD flag is set. Enabling the CCCD triggers a measurement (0x244b4).

There is no dedicated charging-state, button or error notification beyond SYS_STATE and the `02 xx` events. No error or NAK frames exist.

## 6. FFB2 touch transfer

**Phone → bracelet** (0x2623e, then `ffb2_on_write` at 0x254cc via `app_scheduler`):
- Each write is copied into the single 20-byte buffer at 0x20002858 and deferred. Two writes arriving before the main loop runs overwrite each other, so write-with-response or pacing is the safe choice.
- **Header** (when the counter at 0x20002df2 is 0):

| Byte | Meaning | Check |
|---|---|---|
| 0 | sender slot, stored at 0x20003015 | must be 1..3 |
| 1 | play length in samples (0x20002df3) | none |
| 2 | number of data packets (0x20002df4) | must be 1..10 |
| 3..5 | colour 1 R, G, B (0x20002634) | none |
| 6..8 | colour 2 R, G, B (0x20002630) | none |
| 9 | non-zero = offer REPLY_MENU after playback (0x20002e7c) | none |
| 10..19 | ignored | – |

- Colour mode is 1 when colour 1 equals colour 2, otherwise 2 (gradient).
- A header that fails a check is silently dropped. The 10 s timer (0x28680(10000), timer 0x20002e5c) is started even then.
- **Data packet k** (1..n): the 20 bytes are copied verbatim to `0x20002e84 + (k−1)·20`. There is no sequence number and no content validation.
- When k equals n: counter reset to 0, timer stopped, display sched event 5 posted, which raises FSM event 0x15 and starts playback (state 10).
- The 10 s timeout covers the whole transfer and is not restarted per packet. Its handler (0x26904) only resets the counter, so the next write is treated as a header. Disconnect also resets the counter.
- Maximum 10 × 20 = 200 samples. Playback is one sample per 50 ms and stops when the index reaches length − 1 (0x274fa). `[01 4C]` stops it.

**Bracelet → phone** (FSM state 8, `ffb2_notify` at 0x26610):
- On entry (0x270da): 10 s timer, TX_COMPLETE flag set, and a 20-byte header `[slot, C8, 0A, 00 × 17]`. Sample count 200 and packet count 10 are hard-coded.
- Each `BLE_EVT_TX_COMPLETE` raises FSM event 0x16, which sends `buf[i·20 .. i·20+19]` for i = 0..9 (0x2704a). After the 10th packet, 0x28086 finishes and increments the "sent" counter.
- If the FFB2 CCCD flag is clear (FSM event 0x1A) or the 10 s timer expires, the transfer is aborted (0x26d6c).
- Any TX_COMPLETE advances the transfer while the flag is set, including ones caused by FFB1 or battery notifications.

BTM_TOUCH_FORMAT.md agrees with the firmware on all of this.

## 7. ANCS

- **Client init** (0x267b8..0x267f6): attributes requested are notification attribute 0 (app identifier, 32-byte buffer) and 1 (title, 32-byte buffer), plus app attribute 0 (display name). App-attribute events are ignored.
- **Enable / disable:** settings+0xA through command 0x53; it persists. When set, the bracelet sends a security request 1.5 s after connect, which makes iOS pair and bond.
- **Discovery:** runs after `CONN_SEC_SUCCEEDED`. On `DISCOVERY_COMPLETE`: handles assigned, about 100 ms busy-wait, then notification-source and data-source CCCDs enabled (0x25910). Pairing is therefore required for ANCS, and only for ANCS.
- **Settle filter:** a countdown of 6 s after connect (1 s repeating timer, 0x25480). Any ANCS notification arriving before it reaches 0 is dropped and resets the countdown to 4 (0x25a4a).
- **After settling:** every notification triggers `nrf_ble_ancs_c_request_attrs` (0x258fa). There is no filter on category or event id.
- **What the bracelet does with it:** nothing locally. No LED or vibration is driven in this handler. It forwards the app identifier and the title to the phone app as `50 xx` frames on FFB1 (each attribute truncated to 30 bytes, split 17 + 13). The app is expected to react with normal commands.

## 8. Time sync, version, DFU, factory

- **Time sync:** none. No command carries time.
- **Firmware version:** `[01 1C]` → `AC 01 01 03 00`; DIS firmware revision "3.1.1_0".
- **DFU entry** (`[01 2A]`, 0x24dfe): on hardware rev 2, play animation 11. Then `sd_power_gpregret_set(0xB1)`, feed the watchdog, busy-wait about 1.5 s (0x16E360 loop iterations), `sd_power_gpregret_get`, `NVIC_SystemReset`. There is no disconnect first, no state check and no authentication.
- **Factory sequence** (FSM-gated only; there is no "factory mode" flag):
  1. `[01 15]` from CONNECTED starts the touch test (`A1 15 …` reports).
  2. `[01 12]` moves to the LED colour-cycle test (0.5 s steps).
  3. `[01 13]` moves to the motor test (position 0 ↔ 8 every 0.5 s).
  4. `[01 11]` ends it. `[01 17]` aborts from any of the three.
  - Ending or aborting writes AUID = 0 (unpair, 0x26940) and enters system-off (0x26954). A disconnect during the touch test does the same.
- **Factory data:** `[01 18 lot32]` and `[01 1A id32]` write, `0x19` / `0x1B` read.
- **Diagnostics:** 0x40, 0x41, 0x42, 0x4F, prefixes 5 and 9.

## 9. Connection lifecycle

- **Connect** (0x262b4): connected flag set, handle stored, ANCS countdown set to 6 and the 1 s timer started, 0x260b0 (security-request timer if ANCS is on), FSM event 0x0C. The FSM enters state 3 with its 10 s auth timer.
- **Disconnect** (0x26170): security timer stopped, handle set to 0xFFFF, the FFB1 CCCD flag, FFB2 CCCD flag, FFB2 RX counter, connected flag and advertising flag cleared, disconnect counter incremented, ANCS handle invalidated, whitelist refreshed if a bond was added, FSM event 0x0D. The disconnect reason is never inspected. The FSM re-enters state 1 and restarts advertising.
- **Firmware-initiated disconnects:**
  - reason 0x13: GATTC timeout (0x2628a), GATTS timeout (0x261d2), security failure, auth and handshake timeouts, charger or power-off states.
  - reason 0x3B: connection-parameter negotiation failed.
- **TX_COMPLETE** raises FSM event 0x16 only while the flag at 0x20002df0 is set.

## 10. Compatibility checklist for a replacement firmware

**Must implement:**
1. Connectable advertising with the complete local name exactly "Bond More" (the apps filter on the name).
2. Primary service `d3c00003-add3-1d4b-0000-0000b5006bb1` with FFB1 and FFB2 (write, write-no-response, notify, CCCD, open) and FFB3 (read, first byte 0x43). All notifications 20 bytes, zero-padded.
3. The handshake: `[01 30]` → `04 82`; `[03 "12345678"]` → `04 83`; `[07 id]` → `04 85`, or `04 84` → user action → `04 8A` + `02 13` → `[01 31]` → `04 85`. Store the AUID. Also `[01 3A]` → `04 st`.
4. The reads the app sends on CONNECTED: 0x19 → AA, 0x1B → AB, 0x41 → AE, 0x42 → AF, `49 01` → `0A 49 …`, 0x1C → `AC 01 01 03 00`. Per the docs, the AC answer is what marks the bracelet as paired in the app.
5. 0x45 (partner slots read and write, with the ack), 0x48 (vibration, with the ack), 0x4B (LED colour and clear).
6. FFB2 receive (header and up to 10 packets, then play, with `04 87` and back to `04 85`) and FFB2 send (header `[slot C8 0A]` plus 10 × 20 bytes), with `02 B4 slot` and `04 86` around recording.
7. Battery Service 0x2A19, read (notify optional).
8. If the vendor bootloader is kept: `[01 2A]` → GPREGRET = 0xB1, then reset.

**Recommended:** 0x43 / 0x44 with `02 B2`, 0x4C, `04 88` / `04 89` menu states, DIS strings, PPCP 60–150 ms / 0 / 4 s, and reading CCCD state from the stack so bonded reconnects still get notifications.

**Can be omitted:**
- ANCS client, 0x53 / 0x57 (answer `B0 00`) and the `50 xx` frames. Without ANCS, no bonding or security request is needed.
- Factory commands 0x11..0x17, 0x18, 0x1A; 0x36; 0x40; 0x47; 0x4A; 0x4D; 0x4E; 0x4F; prefixes 5, 6, 9, 10; 0x56 (answer `B1`).
- The bogus 16-bit UUIDs in the advertising data, the whitelist bookkeeping, and the uninitialised DIS serial.

## Open questions

1. Is the DIS serial number characteristic present on real units, and what does it contain? This also decides the exact handle numbers.
2. What do `04 8B` and `04 8C` mean exactly (charging versus full, or power-off)? This belongs to the FSM and charger pins.
3. What are counters +4 / +8 (AE) and the three u16 values in AF? Probably record write counters or sequence numbers; this belongs to nvs_storage.
4. For 0x4B, which LEDs light when `led == 1`? The handler at 0x21ecc lights at least LEDs 0 and 1; I did not follow it further. Any other value lights all 9.
5. Which device does command 0x4A's register 0x2B belong to (0x2436c → 0x23e34)? The docs call it accelerometer sensitivity.
6. Is `motor_preview_buzz`'s argument (a[3] = 3 from the app) really unused?
7. Does the REPLY_MENU path also send `02 B4 slot` before recording? I only confirmed the MENU path.
8. What was the stubbed module at 0x2bf98 / 0x2bf9c (init returns 0, event handler empty, instance at 0x20002d8c)?
9. Does iOS re-write CCCDs on a bonded reconnect? The RAM-flag quirk in §3 makes this matter for the vendor firmware; it needs an on-air check.
10. How does the unpaired 60 s power-off interact with the 180 s advertising timeout in state 1? I read only the FSM entry points.
