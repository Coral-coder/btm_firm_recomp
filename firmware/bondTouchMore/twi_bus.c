/*
 * twi_bus.c -- the two I2C buses of the Bond Touch More (blocking transfers).
 */
#include "twi_bus.h"

#include "nrf_drv_twi.h"
#include "app_util_platform.h"
#include "board.h"

static const nrf_drv_twi_t m_twi[TWI_BUS_COUNT] =
{
    NRF_DRV_TWI_INSTANCE(0),
    NRF_DRV_TWI_INSTANCE(1),
};

static const uint8_t m_scl[TWI_BUS_COUNT] = { BOARD_TWI0_SCL_PIN, BOARD_TWI1_SCL_PIN };
static const uint8_t m_sda[TWI_BUS_COUNT] = { BOARD_TWI0_SDA_PIN, BOARD_TWI1_SDA_PIN };

ret_code_t twi_bus_init(void)
{
    for (uint8_t bus = 0; bus < TWI_BUS_COUNT; bus++)
    {
        const nrf_drv_twi_config_t cfg =
        {
            .scl                = m_scl[bus],
            .sda                = m_sda[bus],
            .frequency          = NRF_TWI_FREQ_400K,
            .interrupt_priority = APP_IRQ_PRIORITY_LOW,
            .clear_bus_init     = false,
        };

        /* No event handler: transfers are blocking. */
        ret_code_t err = nrf_drv_twi_init(&m_twi[bus], &cfg, NULL, NULL);
        if (err != NRF_SUCCESS)
        {
            return err;
        }
        nrf_drv_twi_enable(&m_twi[bus]);
    }
    return NRF_SUCCESS;
}

ret_code_t twi_bus_tx(uint8_t bus, uint8_t addr, uint8_t const * p_data,
                      uint8_t len, bool no_stop)
{
    if (bus >= TWI_BUS_COUNT)
    {
        return NRF_ERROR_INVALID_PARAM;
    }
    return nrf_drv_twi_tx(&m_twi[bus], addr, p_data, len, no_stop);
}

ret_code_t twi_bus_rx(uint8_t bus, uint8_t addr, uint8_t * p_data, uint8_t len)
{
    if (bus >= TWI_BUS_COUNT)
    {
        return NRF_ERROR_INVALID_PARAM;
    }
    return nrf_drv_twi_rx(&m_twi[bus], addr, p_data, len);
}

ret_code_t twi_bus_write_reg(uint8_t bus, uint8_t addr, uint8_t reg, uint8_t val)
{
    uint8_t buf[2] = { reg, val };
    return twi_bus_tx(bus, addr, buf, sizeof(buf), false);
}

ret_code_t twi_bus_read_reg(uint8_t bus, uint8_t addr, uint8_t reg, uint8_t * p_val)
{
    /* The vendor firmware writes the register pointer with a STOP, then reads. */
    ret_code_t err = twi_bus_tx(bus, addr, &reg, 1, false);
    if (err != NRF_SUCCESS)
    {
        return err;
    }
    return twi_bus_rx(bus, addr, p_val, 1);
}
