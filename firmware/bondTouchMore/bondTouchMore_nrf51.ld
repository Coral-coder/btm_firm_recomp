/* Linker script for Bond Touch More (nRF51822_xxac, SoftDevice S130 v2.0.1).
 *
 * The application starts at 0x1B000, immediately after the S130 SoftDevice,
 * which matches the app base recorded in fw-src/bondTouchMore/names.txt.
 *
 * RAM origin here is the SDK template default for S130/nRF51 (32 KB part).
 * The exact application RAM start depends on the SoftDevice's configured RAM
 * footprint; sd_ble_enable() reports the required start at init and the value
 * below can be tightened once attribute-table sizing is finalized.
 */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x1b000, LENGTH = 0x25000
  RAM (rwx) :  ORIGIN = 0x20001fe8, LENGTH = 0x6018
}

SECTIONS
{
  .fs_data :
  {
    PROVIDE(__start_fs_data = .);
    KEEP(*(.fs_data))
    PROVIDE(__stop_fs_data = .);
  } > RAM
  .pwr_mgmt_data :
  {
    PROVIDE(__start_pwr_mgmt_data = .);
    KEEP(*(.pwr_mgmt_data))
    PROVIDE(__stop_pwr_mgmt_data = .);
  } > RAM
} INSERT AFTER .data;

INCLUDE "nrf5x_common.ld"
