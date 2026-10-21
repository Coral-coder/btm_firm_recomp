# Byte-for-byte rebuild of the Bond Touch More application image.
#
#   make            # build build/bondTouchMore.{elf,bin} and verify SHA-256
#
# The output must match the vendor nrf51822_xxac.bin exactly; its SHA-256 is
# also the hash embedded in the vendor's signed DFU init packet (.dat), so a
# matching build keeps that packet valid.

CROSS ?= arm-none-eabi-
AS    := $(CROSS)as
LD    := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy

ASFLAGS := -mcpu=cortex-m0 -mthumb

ASM_SRCS := $(wildcard asm/*.s)
OBJS     := $(patsubst asm/%.s,build/asm/%.o,$(ASM_SRCS))

.PHONY: all check clean
all: check

build/asm/%.o: asm/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

build/bondTouchMore.elf: $(OBJS) bondTouchMore.ld
	$(LD) -T bondTouchMore.ld -Map build/bondTouchMore.map -o $@ $(OBJS)

build/bondTouchMore.bin: build/bondTouchMore.elf
	$(OBJCOPY) -O binary $< $@

check: build/bondTouchMore.bin
	@sha256sum -c bondTouchMore.sha256 && echo "OK: byte-identical to vendor image"

clean:
	rm -rf build
