
MEMORY {
  FLASH (rx) : ORIGIN = 0x1b000, LENGTH = 0x25000
  RAM (rwx)  : ORIGIN = 0x20002028, LENGTH = 0x5fd8
}
SECTIONS {
  .text : { KEEP(*(.text.image)) } > FLASH
  .data : { KEEP(*(.data.image)) } > RAM AT > FLASH
}
