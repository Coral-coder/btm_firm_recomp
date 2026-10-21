#!/usr/bin/env python3
"""Generate the asm baseline and iterate until it reassembles byte-identical.

    python3 tools/disasm/build_baseline.py reference/nrf51822_xxac.bin out_dir/
"""
import hashlib
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
BASE = 0x1B000

LDS = """
MEMORY {
  FLASH (rx) : ORIGIN = 0x1b000, LENGTH = 0x25000
  RAM (rwx)  : ORIGIN = 0x%x, LENGTH = 0x%x
}
SECTIONS {
  .text : { KEEP(*(.text.image)) } > FLASH
  .data : { KEEP(*(.data.image)) } > RAM AT > FLASH
}
"""


def run(cmd):
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stdout + r.stderr)
        raise SystemExit("failed: " + " ".join(cmd))
    return r.stdout


def main(binpath, out):
    os.makedirs(out, exist_ok=True)
    orig = open(binpath, "rb").read()
    rawf = os.path.join(out, "rawinsn.txt")
    raw = set()
    if os.path.exists(rawf):
        raw = {int(x, 16) for x in open(rawf).read().split()}
    data_start = int.from_bytes(orig[0x2F528 - BASE:0x2F52C - BASE], "little")
    open(os.path.join(out, "baseline.ld"), "w").write(LDS % (data_start, 0x20008000 - data_start))
    for it in range(20):
        open(rawf, "w").write("\n".join("%x" % a for a in sorted(raw)))
        run([sys.executable, "-I", os.path.join(HERE, "mkasm.py"), binpath, out, rawf])
        run(["arm-none-eabi-as", "-mcpu=cortex-m0", "-mthumb", "-o",
             os.path.join(out, "image.o"), os.path.join(out, "image.s")])
        run(["arm-none-eabi-ld", "-T", os.path.join(out, "baseline.ld"), "-o",
             os.path.join(out, "image.elf"), os.path.join(out, "image.o")])
        run(["arm-none-eabi-objcopy", "-O", "binary", os.path.join(out, "image.elf"),
             os.path.join(out, "image.bin")])
        new = open(os.path.join(out, "image.bin"), "rb").read()
        if new == orig:
            print("MATCH: %d bytes, sha256 %s" % (len(new), hashlib.sha256(new).hexdigest()))
            return 0
        insns = {}
        for line in open(os.path.join(out, "insn_addrs.txt")):
            a, s = line.split()
            insns[int(a, 16)] = int(s)
        # instructions whose bytes differ -> raw fallback
        added = 0
        starts = sorted(insns)
        import bisect
        n = min(len(new), len(orig))
        diffs = [BASE + k for k in range(n) if new[k] != orig[k]]
        for d in diffs:
            j = bisect.bisect_right(starts, d) - 1
            if j >= 0 and starts[j] <= d < starts[j] + insns[starts[j]] and starts[j] not in raw:
                raw.add(starts[j])
                added += 1
        print("iter %d: size %d vs %d, %d differing bytes, +%d raw insns" % (
            it, len(new), len(orig), len(diffs), added))
        if not added:
            print("first diffs:", [hex(x) for x in diffs[:16]])
            return 1
    return 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1], sys.argv[2]))
