#!/usr/bin/env python3
"""Identify the vendor's compiler by compiling SDK 12.3 sources with candidate
GCC releases/flags and counting functions found byte-exact in the image.

    python3 tools/match/findcc.py reference/nrf51822_xxac.bin TOOLCHAIN_DIR...

Each function's bytes are compared with relocation fields (BL targets, literal
pool words) masked out, so matching does not depend on where things link.
"""
import os
import re
import subprocess
import sys
import tempfile

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
SDK = os.path.join(REPO, "build", "sdk")
BASE = 0x1B000

SOURCES = [
    "components/libraries/timer/app_timer.c",
    "components/libraries/pwr_mgmt/nrf_pwr_mgmt.c",
    "components/drivers_nrf/common/nrf_drv_common.c",
    "components/drivers_nrf/gpiote/nrf_drv_gpiote.c",
    "components/drivers_nrf/twi_master/nrf_drv_twi.c",
    "components/drivers_nrf/adc/nrf_drv_adc.c",
    "components/drivers_nrf/wdt/nrf_drv_wdt.c",
    "components/ble/common/ble_conn_state.c",
    "components/ble/common/ble_advdata.c",
    "components/ble/common/ble_srv_common.c",
    "components/ble/ble_services/ble_dis/ble_dis.c",
    "components/softdevice/common/softdevice_handler/softdevice_handler.c",
    "components/libraries/util/sdk_mapped_flags.c",
    "components/libraries/util/app_util_platform.c",
    "components/libraries/fifo/app_fifo.c",
    "components/libraries/scheduler/app_scheduler.c",
]

INCLUDES = """components components/libraries/util components/libraries/timer
components/libraries/fifo components/libraries/log components/libraries/log/src
components/libraries/pwr_mgmt components/libraries/scheduler
components/libraries/experimental_section_vars components/libraries/fstorage
components/drivers_nrf/clock components/drivers_nrf/common components/drivers_nrf/hal
components/drivers_nrf/delay components/drivers_nrf/gpiote components/drivers_nrf/twi_master
components/drivers_nrf/adc components/drivers_nrf/wdt components/ble/common
components/ble/ble_services/ble_dis components/softdevice/common/softdevice_handler
components/softdevice/s130/headers components/softdevice/s130/headers/nrf51
components/device components/toolchain components/toolchain/gcc
components/toolchain/cmsis/include components/boards""".split()

DEFINES = ["-DNRF51", "-DNRF51822", "-DS130", "-DSOFTDEVICE_PRESENT",
           "-DBLE_STACK_SUPPORT_REQD", "-DSWI_DISABLE0", "-DNRF_SD_BLE_API_VERSION=2",
           "-DBOARD_PCA10028", "-DDEBUG", "-DDEBUG_NRF"]

ENABLES = ["GPIOTE_ENABLED", "TWI_ENABLED", "TWI0_ENABLED", "WDT_ENABLED", "ADC_ENABLED",
           "NRF_PWR_MGMT_ENABLED", "APP_SCHEDULER_ENABLED", "APP_FIFO_ENABLED",
           "APP_TIMER_ENABLED", "BLE_DIS_ENABLED"]

FLAGSETS = {k: "-" + k for k in os.environ.get("FLAGS", "O3 O2 Os O1 Og").split()}


def make_config(tmp):
    src = open(os.path.join(REPO, "firmware/bondTouchMore/config/sdk_config.h")).read()
    for e in ENABLES:
        src = re.sub(r"#define %s \d+" % e, "#define %s 1" % e, src)
    d = os.path.join(tmp, "cfg")
    os.makedirs(d, exist_ok=True)
    open(os.path.join(d, "sdk_config.h"), "w").write(src)
    return d


def functions_of(objfile, tc):
    """Yield (name, bytes, reloc_offsets) for each .text.<fn> section."""
    rd = os.path.join(tc, "bin/arm-none-eabi-readelf")
    oc = os.path.join(tc, "bin/arm-none-eabi-objcopy")
    out = subprocess.run([rd, "-SW", objfile], capture_output=True, text=True).stdout
    secs = re.findall(r"\]\s+(\.text\.\S+)\s+PROGBITS\s+\S+\s+(\S+)\s+(\S+)", out)
    rel = subprocess.run([rd, "-rW", objfile], capture_output=True, text=True).stdout
    relocs = {}
    cur = None
    for line in rel.splitlines():
        m = re.match(r"Relocation section '\.rel(\.text\.\S+)'", line)
        if m:
            cur = m.group(1)
            relocs[cur] = []
            continue
        m = re.match(r"([0-9a-f]{8})\s+\S+\s+(R_ARM_\w+)", line)
        if m and cur:
            off, typ = int(m.group(1), 16), m.group(2)
            size = 4
            relocs[cur].append((off, size))
    data = open(objfile, "rb").read()
    for name, off, size in secs:
        off, size = int(off, 16), int(size, 16)
        yield name[6:], data[off:off + size], relocs.get(name, [])


def search(img, body, rels):
    mask = bytearray(b"\x01" * len(body))
    for off, sz in rels:
        for k in range(off, min(off + sz, len(body))):
            mask[k] = 0
    # anchor: longest unmasked run
    best, cur, start = (0, 0), 0, 0
    for k in range(len(body) + 1):
        if k < len(body) and mask[k]:
            cur += 1
        else:
            if cur > best[1]:
                best = (k - cur, cur)
            cur = 0
    a0, alen = best
    if alen < 6:
        return None
    key = body[a0:a0 + alen]
    pos = img.find(key)
    while pos != -1:
        s = pos - a0
        if s >= 0 and s % 2 == 0 and s + len(body) <= len(img):
            if all(not mask[k] or img[s + k] == body[k] for k in range(len(body))):
                return BASE + s
        pos = img.find(key, pos + 1)
    return None


def main(binpath, toolchains):
    img = open(binpath, "rb").read()
    tmp = tempfile.mkdtemp()
    cfg = make_config(tmp)
    incs = ["-I" + cfg] + ["-I" + os.path.join(SDK, p) for p in INCLUDES]
    results = []
    for tc in toolchains:
        gcc = os.path.join(tc, "bin/arm-none-eabi-gcc")
        ver = subprocess.run([gcc, "-dumpversion"], capture_output=True, text=True).stdout.strip()
        for fname, opt in FLAGSETS.items():
            total = found = 0
            hits = []
            for src in SOURCES:
                o = os.path.join(tmp, os.path.basename(src) + ".o")
                cmd = [gcc, "-c", "-std=c99", "-mcpu=cortex-m0", "-mthumb", "-mabi=aapcs",
                       "-mfloat-abi=soft", opt, "-ffunction-sections", "-fdata-sections",
                       "-fno-strict-aliasing", "-fno-builtin", "--short-enums"] + DEFINES + incs + \
                      [os.path.join(SDK, src), "-o", o]
                r = subprocess.run(cmd, capture_output=True, text=True)
                if r.returncode:
                    continue
                for name, body, rels in functions_of(o, tc):
                    if len(body) < 12:
                        continue
                    total += 1
                    a = search(img, body, rels)
                    if a is not None:
                        found += 1
                        hits.append((name, a))
            results.append((found, total, ver, fname, hits))
            print("gcc %-6s %-3s : %3d / %3d functions match" % (ver, fname, found, total), flush=True)
    results.sort(key=lambda r: -r[0])
    best = results[0]
    print("\nBEST: gcc %s %s (%d/%d)" % (best[2], best[3], best[0], best[1]))
    for n, a in sorted(best[4], key=lambda x: x[1]):
        print("  %05x %s" % (a, n))


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2:])
