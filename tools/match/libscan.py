#!/usr/bin/env python3
"""Identify toolchain library code (crt*, newlib-nano, libgcc, libnosys) in the
image by matching every function in the toolchain's Cortex-M0 multilib against
it with relocation fields masked.

    python3 tools/match/libscan.py reference/nrf51822_xxac.bin GCC_ROOT [out.tsv]
"""
import glob
import os
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import findcc  # noqa: E402


def multilib_dir(gccroot):
    gcc = os.path.join(gccroot, "bin/arm-none-eabi-gcc")
    d = subprocess.run([gcc, "-mcpu=cortex-m0", "-mthumb", "-print-multi-directory"],
                       capture_output=True, text=True).stdout.strip()
    libgcc = subprocess.run([gcc, "-mcpu=cortex-m0", "-mthumb", "-print-libgcc-file-name"],
                            capture_output=True, text=True).stdout.strip()
    return d, os.path.dirname(libgcc)


def text_sections(obj, gccroot):
    """Like findcc.functions_of but for any .text* section (incl. plain .text),
    returning per-symbol slices for multi-function .text sections."""
    rd = os.path.join(gccroot, "bin/arm-none-eabi-readelf")
    out = subprocess.run([rd, "-SW", obj], capture_output=True, text=True).stdout
    secs = {}
    for m in re.finditer(r"\[\s*(\d+)\]\s+(\.text\S*)\s+PROGBITS\s+\S+\s+(\S+)\s+(\S+)", out):
        secs[int(m.group(1))] = (m.group(2), int(m.group(3), 16), int(m.group(4), 16))
    rel = subprocess.run([rd, "-rW", obj], capture_output=True, text=True).stdout
    relocs, cur = {}, None
    for line in rel.splitlines():
        m = re.match(r"Relocation section '\.rel(\.text\S*)'", line)
        if m:
            cur = m.group(1)
            relocs.setdefault(cur, [])
            continue
        m = re.match(r"([0-9a-f]{8})\s+\S+\s+(R_ARM_\w+)", line)
        if m and cur:
            relocs[cur].append((int(m.group(1), 16), 4))
    syms = subprocess.run([rd, "-sW", obj], capture_output=True, text=True).stdout
    funcs = {}
    for m in re.finditer(r"\d+:\s+([0-9a-f]{8})\s+(\d+)\s+FUNC\s+\S+\s+\S+\s+(\d+)\s+(\S+)", syms):
        val, size, ndx, name = int(m.group(1), 16) & ~1, int(m.group(2)), int(m.group(3)), m.group(4)
        funcs.setdefault(ndx, []).append((val, size, name))
    data = open(obj, "rb").read()
    for ndx, (sname, off, size) in secs.items():
        body = data[off:off + size]
        rl = relocs.get(sname, [])
        fl = sorted(funcs.get(ndx, []))
        if not fl:
            continue
        # whole section (keeps literal pools and intra-section layout)
        yield sname, fl, body, rl


def main(binpath, gccroot, out=None):
    img = open(binpath, "rb").read()
    mdir, gccdir = multilib_dir(gccroot)
    libdir = os.path.join(gccroot, "arm-none-eabi/lib", mdir)
    archives = [os.path.join(libdir, "libc_nano.a"), os.path.join(libdir, "libnosys.a"),
                os.path.join(gccdir, "libgcc.a")]
    objs = [os.path.join(libdir, "crt0.o"), os.path.join(gccdir, "crti.o"),
            os.path.join(gccdir, "crtn.o"), os.path.join(gccdir, "crtbegin.o"),
            os.path.join(gccdir, "crtend.o")]
    tmp = tempfile.mkdtemp()
    for ar in archives:
        d = os.path.join(tmp, os.path.basename(ar))
        os.makedirs(d)
        subprocess.run([os.path.join(gccroot, "bin/arm-none-eabi-ar"), "x", ar], cwd=d, check=True)
        objs += [(os.path.basename(ar), p) for p in glob.glob(os.path.join(d, "*.o"))]
    hits = []
    for o in objs:
        lib, path = (("crt", o) if isinstance(o, str) else o)
        for sname, fl, body, rl in text_sections(path, gccroot):
            if len(body) < 6:
                continue
            a = findcc.search(img, body, rl)
            if a is not None:
                for val, size, name in fl:
                    hits.append((a + val, size, lib, os.path.basename(path), sname, name))
    hits.sort()
    lines = ["%05x\t%d\t%s\t%s\t%s\t%s" % h for h in hits]
    if out:
        open(out, "w").write("\n".join(lines) + "\n")
    for l in lines:
        print(l)


if __name__ == "__main__":
    main(*sys.argv[1:])
