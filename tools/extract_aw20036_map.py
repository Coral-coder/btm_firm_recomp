#!/usr/bin/env python3
"""Extract the exact AW20036 LED channel/enable register map from the vendor
bondTouchMore image.

The map is not a static table in flash -- it is built at runtime into RAM by
FUN_00020614 (@ 0x20614) from flash constants. This script emulates that
function against the real image with Unicorn and reads the resulting 9 x 15-byte
command records at 0x20002578, then prints the per-LED R/G/B registers used by
aw20036.c.

The vendor image (nrf51822_xxac.bin, the application starting at flash 0x1B000)
is NOT committed; pass its path:

    pip install unicorn
    python3 tools/extract_aw20036_map.py path/to/nrf51822_xxac.bin
"""
import sys
import struct

FLASH_BASE = 0x1B000
TEMPLATE   = 0x20002578   # DAT_00020600 / DAT_00020244: command-record base
BUILDER    = 0x20614      # FUN_00020614: register-map builder


def main(path):
    try:
        from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB, UcError
        from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR
    except ImportError:
        sys.exit("needs 'unicorn' (pip install unicorn)")

    img = open(path, "rb").read()
    uc = Uc(UC_ARCH_ARM, UC_MODE_THUMB)
    uc.mem_map(0x18000, 0x20000)          # flash window covering the app
    uc.mem_write(FLASH_BASE, img)
    uc.mem_map(0x20000000, 0x10000)       # RAM
    uc.reg_write(UC_ARM_REG_SP, 0x2000F000)
    uc.reg_write(UC_ARM_REG_LR, 0x18001 | 1)   # return sentinel
    try:
        uc.emu_start(BUILDER | 1, 0x18001, count=500000)
    except UcError:
        pass  # returns into the unmapped sentinel; records are built by then

    buf = bytes(uc.mem_read(TEMPLATE, 9 * 15))
    print("static const uint8_t aw20036_chan[9][3] = {")
    print("    /*        R     G     B   */")
    for i in range(9):
        rec = buf[i * 15:i * 15 + 15]
        r, g, b = rec[9], rec[0xA], rec[0xB]           # PWM-page channel regs
        print("    { 0x%02X, 0x%02X, 0x%02X },   /* LED %d */" % (r, g, b, i))
    print("};")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    main(sys.argv[1])
