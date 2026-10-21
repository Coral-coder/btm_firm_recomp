#!/usr/bin/env python3
"""Convert the vendor bondTouchMore application image into symbolized,
reassemblable GNU assembly that rebuilds to the identical bytes.

    python3 tools/disasm/mkasm.py reference/nrf51822_xxac.bin out_dir/ [rawinsn.txt]

Code is found by recursive descent from the vector table, the Ghidra function
list (fw-src/bondTouchMore/bondTouchMore.c) and in-image code pointers, run to
a fixpoint so literal pools discovered late still stop fall-through decoding.
Branches, calls, literal-pool loads and in-image pointers are emitted as symbol
references so code can later be replaced by C of a different size. Anything
not proven to be code is emitted as data.

Instructions listed in rawinsn.txt (those that do not round-trip through the
assembler) are emitted as `.inst.n`/`.inst.w`; build_baseline.py iterates.
"""
import os
import re
import struct
import sys

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_MCLASS
from capstone import arm as A

BASE = 0x1B000
VECTORS = 48                       # nRF51 vector table entries
TEXT0 = BASE + VECTORS * 4
REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

COND_BRANCHES = {"b" + c for c in ("eq ne cs hs cc lo mi pl vs vc hi ls ge lt gt le".split())}


class Image:
    def __init__(self, path):
        self.d = open(path, "rb").read()
        self.end = BASE + len(self.d)
        # Linker symbols recovered from Reset_Handler's literal pool.
        self.etext = self.u32(0x2F524)
        self.data_start = self.u32(0x2F528)
        self.data_end = self.u32(0x2F52C)

    def u32(self, a):
        return struct.unpack_from("<I", self.d, a - BASE)[0]


def load_names():
    names = {}
    src = open(os.path.join(REPO, "fw-src/bondTouchMore/bondTouchMore.c")).read()
    funcs = set()
    for n, a in re.findall(r"/\* ---- (\w+) @ ([0-9a-f]{8}) ---- \*/", src):
        a = int(a, 16)
        funcs.add(a)
        if not n.startswith("FUN_"):
            names[a] = n
    for line in open(os.path.join(REPO, "fw-src/bondTouchMore/names.txt")):
        m = re.match(r"0x([0-9a-f]+)\s+(\w+)", line)
        if m:
            names[int(m.group(1), 16)] = m.group(2)
    return names, funcs


class Analysis:
    def __init__(self, img, seeds):
        self.img = img
        self.md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
        self.md.detail = True
        self.cache = {}
        self.seeds = set(seeds)
        self.noreturn = set()
        self.ceiling = img.etext
        self.tables = {}            # jump table addr -> entry count

    def decode(self, a):
        if a in self.cache:
            return self.cache[a]
        i = None
        if TEXT0 <= a < self.ceiling:
            for x in self.md.disasm(self.img.d[a - BASE:a - BASE + 4], a, 1):
                i = x
        self.cache[a] = i
        return i

    @staticmethod
    def pc_lit(i):
        ops = i.operands
        if i.mnemonic.startswith("ldr") and len(ops) == 2 and ops[1].type == A.ARM_OP_MEM \
                and ops[1].mem.base == A.ARM_REG_PC:
            return ((i.address + 4) & ~3) + ops[1].mem.disp
        return None

    @staticmethod
    def adr_target(i):
        ops = i.operands
        if i.mnemonic == "adr":
            return ((i.address + 4) & ~3) + ops[-1].imm
        if i.mnemonic == "add" and len(ops) == 3 and ops[1].type == A.ARM_OP_REG \
                and ops[1].reg == A.ARM_REG_PC:
            return ((i.address + 4) & ~3) + ops[-1].imm
        return None

    @staticmethod
    def is_return(i):
        mn, ops = i.mnemonic, i.operands
        if mn == "bx":
            return True
        if mn == "pop" and any(o.type == A.ARM_OP_REG and o.reg == A.ARM_REG_PC for o in ops):
            return True
        if mn == "mov" and ops and ops[0].type == A.ARM_OP_REG and ops[0].reg == A.ARM_REG_PC:
            return True
        return False

    def run(self, barriers):
        insn, occupied, lits, funcs, branch_t = {}, {}, set(), set(), set()
        work = list(self.seeds)
        funcs |= self.seeds
        while work:
            a = work.pop()
            while True:
                if a in insn or a in occupied:
                    break
                if (a & ~3) in barriers or (a & ~3) in lits:
                    break
                i = self.decode(a)
                if i is None:
                    break
                span = range(a, a + i.size)
                if any(b in occupied or (b & ~3) in barriers or (b & ~3) in lits for b in span):
                    break
                insn[a] = i
                for b in span:
                    occupied[b] = a
                mn, ops = i.mnemonic, i.operands
                t = self.pc_lit(i)
                if t is not None:
                    lits.add(t)
                if mn == "bl":
                    t = ops[0].imm
                    funcs.add(t)
                    work.append(t)
                    # Keep decoding after calls even to functions that never
                    # return: GCC still emits the epilogue unless the callee is
                    # declared noreturn. Literal-pool barriers stop overruns.
                elif mn == "b" or mn in COND_BRANCHES:
                    t = ops[-1].imm
                    branch_t.add(t)
                    work.append(t)
                    if mn == "b":
                        break
                if mn == "mov" and ops[0].type == A.ARM_OP_REG and ops[0].reg == A.ARM_REG_PC:
                    tbl = self.jump_table(insn, a)
                    if tbl:
                        base, n = tbl
                        self.tables[base] = n
                        for k in range(n):
                            t = self.img.u32(base + 4 * k)
                            if TEXT0 <= t < self.ceiling:
                                branch_t.add(t)
                                work.append(t)
                if self.is_return(i) or mn == "udf":
                    break
                a += i.size
        return insn, occupied, lits, funcs, branch_t

    def jump_table(self, insn, a):
        """GCC Thumb-1 tablejump:
            cmp rI,#N ; b<hi|ls> default ; ldr rT,=tbl ; lsls ; ldr rX,[rT,rI] ; mov pc,rX
        The table base may be hoisted (e.g. kept in r8 across a loop), so trace
        the base register of the indexed load back through mov copies to the
        literal load that defines it."""
        def prev_of(p):
            return insn.get(p - 2) or insn.get(p - 4)

        mov = insn[a]
        xreg = mov.operands[1].reg
        p, ld = a, None
        for _ in range(6):                       # find ldr xreg,[rA,rB]
            q = prev_of(p)
            if q is None:
                return None
            p = q.address
            ops = q.operands
            if q.mnemonic == "ldr" and ops[0].reg == xreg and ops[1].type == A.ARM_OP_MEM \
                    and ops[1].mem.index:
                ld = q
                break
        if ld is None:
            return None
        cands = {ld.operands[1].mem.base, ld.operands[1].mem.index}
        count, base, track = None, None, None
        p = ld.address
        for _ in range(80):
            q = prev_of(p)
            if q is None:
                break
            p = q.address
            ops = q.operands
            mn = q.mnemonic
            if count is None and mn == "cmp" and len(ops) == 2 and ops[1].type == A.ARM_OP_IMM:
                count = ops[1].imm + 1
            if not ops or ops[0].type != A.ARM_OP_REG:
                continue
            dst = ops[0].reg
            if track is None and dst in cands:
                if mn.startswith("lsl"):            # index scaling
                    cands.discard(dst)
                    continue
                track = dst
            if base is not None:
                if count is not None:
                    break
                continue
            if track is not None and dst == track:
                lit = self.pc_lit(q)
                if lit is not None:
                    base = self.img.u32(lit)
                    if count is not None:
                        break
                    continue
                if mn == "mov" and len(ops) == 2 and ops[1].type == A.ARM_OP_REG:
                    track = ops[1].reg
                    continue
                return None
        if base is not None and count:
            return base, count
        return None

    def find_noreturn(self, insn, funcs):
        """A function is noreturn if no path from its entry reaches a return."""
        changed = True
        while changed:
            changed = False
            for f in funcs:
                if f in self.noreturn or f not in insn:
                    continue
                seen, stack, rets = set(), [f], False
                while stack and not rets:
                    a = stack.pop()
                    while a in insn and a not in seen:
                        seen.add(a)
                        i = insn[a]
                        mn = i.mnemonic
                        if self.is_return(i):
                            rets = True
                            break
                        if mn == "bl" and i.operands[0].imm in self.noreturn:
                            break
                        if mn == "b":
                            a = i.operands[0].imm
                            continue
                        if mn in COND_BRANCHES:
                            stack.append(i.operands[0].imm)
                        a += i.size
                    else:
                        if a not in insn and a not in seen:
                            rets = True     # falls off known code: be conservative
                if not rets:
                    self.noreturn.add(f)
                    changed = True


def analyse(img, ghidra_funcs):
    seeds = set()
    for k in range(1, VECTORS):
        v = img.u32(BASE + 4 * k)
        if v & 1 and TEXT0 <= v < img.etext:
            seeds.add(v & ~1)
    seeds |= {a for a in ghidra_funcs if TEXT0 <= a < img.etext}
    an = Analysis(img, seeds)
    # Code ceiling: .text ends where the last (highest) known function ends;
    # everything above is .rodata. Find it with a strong-seed-only descent.
    insn0 = an.run(set())[0]
    top = max(ghidra_funcs)
    a = top
    while a in insn0:
        a += insn0[a].size
    an.ceiling = a
    an.cache.clear()
    barriers = set()
    for _ in range(12):
        insn, occ, lits, funcs, bt = an.run(barriers)
        nr_before = len(an.noreturn)
        an.find_noreturn(insn, funcs)
        # code pointers stored in non-code words become extra seeds
        extra = set()
        for a in range(TEXT0, img.end - 3, 4):
            if a in occ or (a + 2) in occ:
                continue
            v = img.u32(a)
            if v & 1 and TEXT0 <= v < an.ceiling and (v & ~1) not in occ:
                t = v & ~1
                if (t & ~3) not in lits:
                    extra.add(t)
        new_barriers = barriers | lits
        if new_barriers == barriers and not extra - an.seeds and len(an.noreturn) == nr_before:
            break
        barriers = new_barriers
        an.seeds |= extra
    return insn, occ, lits, funcs, bt, an


def main(binpath, outdir, rawset):
    img = Image(binpath)
    names, ghidra_funcs = load_names()
    insn, occ, lits, funcs, branch_t, an = analyse(img, ghidra_funcs)

    # ---- decide labels --------------------------------------------------
    labels = {}
    for a in funcs:
        labels[a] = "f"
    for a in branch_t:
        labels.setdefault(a, "l")
    for a in lits:
        labels.setdefault(a, "d")
    for i in insn.values():
        t = an.adr_target(i)
        if t is not None:
            labels.setdefault(t, "d")

    def is_word_slot(a):  # noqa: E306
        return a % 4 == 0 and all((a + k) not in occ for k in range(4))

    jt_words = {}
    for base, n in an.tables.items():
        for k in range(n):
            jt_words[base + 4 * k] = img.u32(base + 4 * k)
            labels.setdefault(img.u32(base + 4 * k), "l")
        labels.setdefault(base, "d")

    # .rodata starts after the last instruction (crti/crtn .init/.fini end).
    rodata0 = (an.ceiling + 3) & ~3

    # pointers held in data words
    ptr_words = {}
    for a in list(range(BASE, img.etext - 3, 4)) + list(range(img.etext, img.end - 3, 4)):
        if not is_word_slot(a):
            continue
        v = img.u32(a)
        t = v & ~1
        if v & 1 and t in insn:
            ptr_words[a] = v
            labels.setdefault(t, "f" if t in funcs else "l")
        elif not (v & 1) and BASE <= t < img.etext and (t in labels or t in insn):
            ptr_words[a] = v
            labels.setdefault(t, "d")
        elif not (v & 1) and rodata0 <= t < img.etext:
            # even pointer into .rodata (string / const object)
            ptr_words[a] = v
            labels.setdefault(t, "d")

    # ---- pass 1: which labels land on an emission boundary --------------
    def emission_units():
        a = BASE
        while a < img.etext:
            if a in insn:
                yield a, insn[a].size, "i"
                a += insn[a].size
            elif is_word_slot(a) and a + 4 <= img.etext and not any((a + k) in labels for k in (1, 2, 3)):
                yield a, 4, "w"
                a += 4
            else:
                yield a, 1, "b"
                a += 1

    units = list(emission_units())
    boundaries = {a for a, _, _ in units} | {img.etext}
    ptr_words.update(jt_words)
    # Even-valued words that point at a Thumb function entry (switch cases that
    # tail-call straight into another function) must not get the Thumb bit the
    # linker adds for .thumb_func symbols: reference a plain alias label instead.
    aliases = {v for v in ptr_words.values() if not (v & 1) and labels.get(v) == "f"}

    def sym(a):
        if a in names:
            return names[a]
        k = labels.get(a, "l")
        if k == "f":
            return "fn_%05x" % a
        if k == "d":
            return "d_%05x" % a
        return ".L%05x" % a

    def can_ref(t):
        return t in boundaries and t in labels

    def ref(v):
        if v in aliases:
            return sym(v) + "_addr"
        return sym(v & ~1) + ("+1" if v & 1 else "")

    out = []
    w = out.append
    w("@ Generated by tools/disasm/mkasm.py from the vendor bondTouchMore image.")
    w("\t.syntax unified")
    w("\t.cpu cortex-m0")
    w("\t.thumb")
    w("\t.section .text.image,\"ax\",%progbits")
    for a, size, kind in units:
        if a in labels:
            s = sym(a)
            if a in aliases:
                w("\t.global %s_addr" % s)
                w("%s_addr:" % s)
            if not s.startswith(".L"):
                w("\t.global %s" % s)
                if kind == "i" and labels[a] == "f":
                    w("\t.thumb_func")
                    w("\t.type %s, %%function" % s)
            w("%s:" % s)
        if kind == "i":
            w(fmt_insn(insn[a], sym, can_ref, an, rawset))
        elif kind == "w":
            v = img.u32(a)
            if a in ptr_words and can_ref(v & ~1):
                w("\t.word %s" % ref(v))
            else:
                w("\t.word 0x%08x" % v)
        else:
            w("\t.byte 0x%02x" % img.d[a - BASE])

    w("")
    w("\t.section .data.image,\"aw\",%progbits")
    w("__data_image:")
    a = img.etext
    while a < img.end:
        if a + 4 <= img.end and a % 4 == 0:
            v = img.u32(a)
            if a in ptr_words and can_ref(v & ~1):
                w("\t.word %s" % ref(v))
            else:
                w("\t.word 0x%08x" % v)
            a += 4
        else:
            w("\t.byte 0x%02x" % img.d[a - BASE])
            a += 1

    os.makedirs(outdir, exist_ok=True)
    open(os.path.join(outdir, "image.s"), "w").write("\n".join(out) + "\n")
    ncode = sum(i.size for i in insn.values())
    print("code bytes %d / %d, insns %d, funcs %d, literal words %d, noreturn %d, rodata 0x%x" % (
        ncode, img.etext - BASE, len(insn), len(funcs), len(lits), len(an.noreturn), rodata0))
    with open(os.path.join(outdir, "insn_addrs.txt"), "w") as f:
        for a in sorted(insn):
            f.write("%x %d\n" % (a, insn[a].size))
    with open(os.path.join(outdir, "lits.txt"), "w") as f:
        for a in sorted(lits | set(jt_words)):
            f.write("%x\n" % a)
    with open(os.path.join(outdir, "analysis.txt"), "w") as f:
        for a in sorted(funcs):
            f.write("F %x %s%s\n" % (a, sym(a), " noreturn" if a in an.noreturn else ""))


def fmt_insn(i, sym, can_ref, an, rawset):
    a = i.address
    raw = bytes(i.bytes)
    mn, ops = i.mnemonic, i.operands

    def rawform():
        if i.size == 2:
            return "\t.inst.n 0x%04x\t@ %05x %s %s" % (struct.unpack("<H", raw)[0], a, mn, i.op_str)
        hw = struct.unpack("<HH", raw)
        return "\t.inst.w 0x%04x%04x\t@ %05x %s %s" % (hw[0], hw[1], a, mn, i.op_str)

    if a in rawset:
        return rawform()
    if mn == "bl":
        t = ops[0].imm
        return "\tbl\t%s" % sym(t) if can_ref(t) else rawform()
    if (mn == "b" or mn in COND_BRANCHES) and ops and ops[-1].type == A.ARM_OP_IMM:
        t = ops[-1].imm
        return "\t%s\t%s" % (mn, sym(t)) if can_ref(t) else rawform()
    t = an.pc_lit(i)
    if t is not None:
        return "\t%s\t%s, %s" % (mn, i.reg_name(ops[0].reg), sym(t)) if can_ref(t) else rawform()
    t = an.adr_target(i)
    if t is not None:
        return "\tadr\t%s, %s" % (i.reg_name(ops[0].reg), sym(t)) if can_ref(t) else rawform()
    return "\t%s\t%s" % (mn, i.op_str)


if __name__ == "__main__":
    raw = set()
    if len(sys.argv) > 3 and os.path.exists(sys.argv[3]):
        raw = {int(x, 16) for x in open(sys.argv[3]).read().split()}
    main(sys.argv[1], sys.argv[2], raw)
