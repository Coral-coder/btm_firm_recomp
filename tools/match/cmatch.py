#!/usr/bin/env python3
"""Check decompiled C against the vendor image, function by function.

    python3 tools/match/cmatch.py src/AW20036.c [more.c ...]

Each file is compiled with the vendor toolchain and flags (GCC 10.3.1, -O3,
SDK 12 defines; override the compiler with $GCC). Every function is looked up
in the image by name (fw-src names.txt / Ghidra labels, or a `@ 0xADDR`
comment on the line before the definition) and compared with relocation
fields masked. Prints MATCH, or the first differing instructions.
"""
import os
import re
import subprocess
import sys
import tempfile
import difflib

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_MCLASS

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
import findcc  # noqa: E402

BASE = 0x1B000
GCC = os.environ.get("GCC", os.path.join(REPO, "build/gcc-arm/bin/arm-none-eabi-gcc"))
CFLAGS = ["-std=c99", "-mcpu=cortex-m0", "-mthumb", "-mabi=aapcs", "-mfloat-abi=soft",
          "-O3", "-ffunction-sections", "-fdata-sections", "-fno-strict-aliasing",
          "-fno-builtin", "--short-enums"] + findcc.DEFINES


def known_addresses(src_text):
    names = {}
    for line in open(os.path.join(REPO, "fw-src/bondTouchMore/names.txt")):
        m = re.match(r"0x([0-9a-f]+)\s+(\w+)", line)
        if m:
            names[m.group(2)] = int(m.group(1), 16)
    src = open(os.path.join(REPO, "fw-src/bondTouchMore/bondTouchMore.c")).read()
    for n, a in re.findall(r"/\* ---- (\w+) @ ([0-9a-f]{8}) ---- \*/", src):
        names.setdefault(n, int(a, 16))
    # explicit annotations in the candidate source: "/* @ 0x2024c */" before a definition
    for a, n in re.findall(r"@\s*0x([0-9a-f]+)[^\n]*?\*/\s*\n[^\n(]*?\b(\w+)\s*\(", src_text):
        names[n] = int(a, 16)
    return names


def norm(code, addr):
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
    out = []
    for i in md.disasm(code, addr):
        out.append("%-6s %s" % (i.mnemonic, re.sub(r"#0x[0-9a-f]+$", "#X", i.op_str)
                                if i.mnemonic.startswith("b") else i.op_str))
    return out


DIFF_NAME = None


def check(path, img, extra):
    text = open(path).read()
    names = known_addresses(text)
    tmp = tempfile.mkdtemp()
    obj = os.path.join(tmp, "x.o")
    r = subprocess.run([GCC, "-c"] + CFLAGS + extra + [path, "-o", obj],
                       capture_output=True, text=True)
    if r.returncode:
        print(r.stderr)
        return 0, 0
    gccroot = os.path.dirname(os.path.dirname(GCC))
    ok = total = 0
    for name, body, rels in findcc.functions_of(obj, gccroot):
        total += 1
        addr = names.get(name)
        if addr is None:
            hit = findcc.search(img, body, rels)
            print("  %-34s %s" % (name, "MATCH (found at 0x%05x)" % hit if hit else "? (no address known)"))
            ok += hit is not None
            continue
        mask = bytearray(b"\x01" * len(body))
        for off, sz in rels:
            for k in range(off, min(off + sz, len(body))):
                mask[k] = 0
        want = img[addr - BASE:addr - BASE + len(body)]
        same = all(not mask[k] or want[k] == body[k] for k in range(len(body)))
        if same:
            ok += 1
            print("  %-34s MATCH @ 0x%05x (%d bytes)" % (name, addr, len(body)))
            continue
        mine, theirs = norm(body, addr), norm(want, addr)
        if name == DIFF_NAME:
            print("  %s: mine %d bytes" % (name, len(body)))
            for l in difflib.unified_diff(theirs, mine, "image", "mine", n=2, lineterm=""):
                print("      " + l)
            continue
        k = next((i for i, (a, b) in enumerate(zip(mine, theirs)) if a != b), min(len(mine), len(theirs)))
        print("  %-34s DIFF  @ 0x%05x at insn %d:" % (name, addr, k))
        for i in range(max(0, k - 1), min(k + 4, max(len(mine), len(theirs)))):
            a = mine[i] if i < len(mine) else ""
            b = theirs[i] if i < len(theirs) else ""
            print("      %-32s | %s" % (a, b))
    return ok, total


def main(argv):
    global DIFF_NAME
    if argv and argv[0] == "--diff":
        DIFF_NAME, argv = argv[1], argv[2:]
    img = open(os.path.join(REPO, "reference/nrf51822_xxac.bin"), "rb").read()
    extra = ["-I" + os.path.join(REPO, "matching/include"),
             "-I" + os.path.join(REPO, "matching/config")] + \
            ["-I" + os.path.join(findcc.SDK, p) for p in findcc.INCLUDES]
    tot_ok = tot = 0
    for p in argv:
        print(p)
        ok, n = check(p, img, extra)
        tot_ok += ok
        tot += n
    print("\n%d / %d functions match" % (tot_ok, tot))


if __name__ == "__main__":
    main(sys.argv[1:])
