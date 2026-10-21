#!/usr/bin/env python3
"""Find which SDK 12.3 source files (and functions) are linked into the image.

Compiles every .c under the SDK's components/ with the identified toolchain
(GCC 10.3.1 -O3) and every module enabled, then searches the image for each
function with relocation fields masked. Prints, per address, the SDK function
that matches exactly there.

    python3 tools/match/sdkscan.py reference/nrf51822_xxac.bin GCC_ROOT [out.tsv]
"""
import concurrent.futures as cf
import os
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import findcc  # noqa: E402

REPO = findcc.REPO
SDK = findcc.SDK

SKIP = re.compile(r"/(examples|nfc|iot|usbd|serial|ant|nrf_crypto|ble_dtm|"
                  r"cli|experimental_mesh|experimental_libuarte|libraries/svc|"
                  r"libraries/bootloader|libraries/ecc|libraries/sha256|"
                  r"drivers_nrf/(saadc|i2s|pdm|qdec|comp|lpcomp|power|pwm|rng|spi_slave|twis_slave|usbd|qspi|nrf_soc_nosd|radio_config|ppi|timer|swi|rtc|spi_master|uart|clock|systick|delay))/")


def all_sources():
    out = []
    for root, _, files in os.walk(os.path.join(SDK, "components")):
        for f in files:
            if f.endswith(".c"):
                p = os.path.join(root, f)
                if not SKIP.search(p):
                    out.append(p)
    return sorted(out)


def all_include_dirs():
    dirs = set()
    for root, _, files in os.walk(os.path.join(SDK, "components")):
        if any(f.endswith(".h") for f in files) and "examples" not in root:
            dirs.add(root)
    return sorted(dirs)


def make_config(tmp):
    src = open(os.path.join(REPO, "firmware/bondTouchMore/config/sdk_config.h")).read()
    # enable every *_ENABLED module switch
    src = re.sub(r"#define (\w+_ENABLED) 0\b", r"#define \1 1", src)
    d = os.path.join(tmp, "cfg")
    os.makedirs(d, exist_ok=True)
    open(os.path.join(d, "sdk_config.h"), "w").write(src)
    return d


def compile_one(args):
    gcc, src, incs, tmp = args
    o = os.path.join(tmp, re.sub(r"[^\w]", "_", os.path.relpath(src, SDK)) + ".o")
    cmd = [gcc, "-c", "-std=c99", "-mcpu=cortex-m0", "-mthumb", "-mabi=aapcs",
           "-mfloat-abi=soft", "-O3", "-ffunction-sections", "-fdata-sections",
           "-fno-strict-aliasing", "-fno-builtin", "--short-enums"] + findcc.DEFINES + incs + [src, "-o", o]
    r = subprocess.run(cmd, capture_output=True, text=True)
    return src, (o if r.returncode == 0 else None)


def main(binpath, gccroot, out=None):
    img = open(binpath, "rb").read()
    tmp = tempfile.mkdtemp()
    cfg = make_config(tmp)
    incs = ["-I" + cfg] + ["-I" + d for d in all_include_dirs()]
    gcc = os.path.join(gccroot, "bin/arm-none-eabi-gcc")
    srcs = all_sources()
    hits = []
    nok = 0
    with cf.ThreadPoolExecutor(os.cpu_count() or 4) as ex:
        for src, o in ex.map(compile_one, [(gcc, s, incs, tmp) for s in srcs]):
            if not o:
                continue
            nok += 1
            for name, body, rels in findcc.functions_of(o, gccroot):
                if len(body) < 8:
                    continue
                a = findcc.search(img, body, rels)
                if a is not None:
                    hits.append((a, len(body), os.path.relpath(src, SDK), name))
    hits.sort()
    print("compiled %d/%d SDK files; %d function matches" % (nok, len(srcs), len(hits)))
    lines = ["%05x\t%d\t%s\t%s" % h for h in hits]
    if out:
        open(out, "w").write("\n".join(lines) + "\n")
    files = {}
    for a, n, f, fn in hits:
        files.setdefault(f, []).append(a)
    for f, addrs in sorted(files.items(), key=lambda x: min(x[1])):
        print("  %05x-%05x  %3d fns  %s" % (min(addrs), max(addrs), len(addrs), f))


if __name__ == "__main__":
    main(*sys.argv[1:])
