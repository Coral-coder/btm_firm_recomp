/*
 * twi_bus.h -- the two I2C buses of the Bond Touch More (blocking transfers).
 */
#ifndef TWI_BUS_H__
#define TWI_BUS_H__

#include <stdint.h>
#include <stdbool.h>
#include "sdk_errors.h"

#define TWI_BUS_COUNT  2

/* Initialise and enable TWI0 and TWI1 at 400 kHz on the board pins. */
ret_code_t twi_bus_init(void);

/* Raw transfers. no_stop leaves the bus claimed for a following read. */
ret_code_t twi_bus_tx(uint8_t bus, uint8_t addr, uint8_t const * p_data,
                      uint8_t len, bool no_stop);
ret_code_t twi_bus_rx(uint8_t bus, uint8_t addr, uint8_t * p_data, uint8_t len);

/* Register helpers: [reg, val] write, and reg-pointer write + 1-byte read. */
ret_code_t twi_bus_write_reg(uint8_t bus, uint8_t addr, uint8_t reg, uint8_t val);
ret_code_t twi_bus_read_reg(uint8_t bus, uint8_t addr, uint8_t reg, uint8_t * p_val);

#endif /* TWI_BUS_H__ */
