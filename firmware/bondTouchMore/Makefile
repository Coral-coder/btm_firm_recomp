# Bond Touch More (v3/BTM) firmware recompilation
# Target: nRF51822_xxac, SoftDevice S130 v2.0.1, nRF5 SDK 12.3.0
#
# SDK_ROOT must point at an extracted nRF5_SDK_12.3.0 tree. By default it uses
# the repo-local staging link created by scripts/fetch_sdk.sh:
#     make                 # build
#     make SDK_ROOT=/path/to/nRF5_SDK_12.3.0
#     make clean
#     make flash_softdevice && make flash   # requires nrfjprog + SWD probe

PROJECT_NAME     := bondTouchMore
TARGETS          := nrf51822_xxac
OUTPUT_DIRECTORY := _build

# The SDK's Makefile.posix hardcodes a 2015 toolchain path. Override the
# toolchain root to the system arm-none-eabi install; `override` keeps these
# set despite the `:=` assignments inside the SDK's Makefile.posix.
override GNU_INSTALL_ROOT := $(dir $(realpath $(shell which arm-none-eabi-gcc)))..
override GNU_PREFIX       := arm-none-eabi

# Repo layout: this Makefile lives in firmware/bondTouchMore/
PROJ_DIR  := .
REPO_ROOT := ../..
SDK_ROOT  ?= $(REPO_ROOT)/build/sdk

$(OUTPUT_DIRECTORY)/nrf51822_xxac.out: \
  LINKER_SCRIPT := bondTouchMore_nrf51.ld

# ---- Source files -----------------------------------------------------------
# Application sources (reconstructed from fw-src/bondTouchMore/).
SRC_FILES += \
  $(PROJ_DIR)/main.c \
  $(PROJ_DIR)/aw20036.c \
  $(PROJ_DIR)/twi_bus.c \

# SDK sources needed by the current skeleton. This list grows as subsystems
# are reconstructed; keep it to what actually links.
SRC_FILES += \
  $(SDK_ROOT)/components/libraries/util/app_error.c \
  $(SDK_ROOT)/components/libraries/util/app_error_weak.c \
  $(SDK_ROOT)/components/libraries/util/app_util_platform.c \
  $(SDK_ROOT)/components/libraries/util/nrf_assert.c \
  $(SDK_ROOT)/components/libraries/util/sdk_errors.c \
  $(SDK_ROOT)/components/libraries/util/sdk_mapped_flags.c \
  $(SDK_ROOT)/components/libraries/timer/app_timer.c \
  $(SDK_ROOT)/components/libraries/fifo/app_fifo.c \
  $(SDK_ROOT)/components/drivers_nrf/clock/nrf_drv_clock.c \
  $(SDK_ROOT)/components/drivers_nrf/common/nrf_drv_common.c \
  $(SDK_ROOT)/components/drivers_nrf/twi_master/nrf_drv_twi.c \
  $(SDK_ROOT)/components/ble/common/ble_advdata.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_params.c \
  $(SDK_ROOT)/components/ble/common/ble_srv_common.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_state.c \
  $(SDK_ROOT)/components/softdevice/common/softdevice_handler/softdevice_handler.c \
  $(SDK_ROOT)/components/toolchain/system_nrf51.c \
  $(SDK_ROOT)/components/toolchain/gcc/gcc_startup_nrf51.S

# ---- Include paths ----------------------------------------------------------
INC_FOLDERS += \
  $(PROJ_DIR) \
  $(PROJ_DIR)/config \
  $(SDK_ROOT)/components \
  $(SDK_ROOT)/components/libraries/util \
  $(SDK_ROOT)/components/libraries/timer \
  $(SDK_ROOT)/components/libraries/fifo \
  $(SDK_ROOT)/components/libraries/log \
  $(SDK_ROOT)/components/libraries/log/src \
  $(SDK_ROOT)/components/libraries/experimental_section_vars \
  $(SDK_ROOT)/components/drivers_nrf/clock \
  $(SDK_ROOT)/components/drivers_nrf/common \
  $(SDK_ROOT)/components/drivers_nrf/hal \
  $(SDK_ROOT)/components/drivers_nrf/delay \
  $(SDK_ROOT)/components/drivers_nrf/gpiote \
  $(SDK_ROOT)/components/drivers_nrf/twi_master \
  $(SDK_ROOT)/components/drivers_nrf/twi_master/deprecated \
  $(SDK_ROOT)/components/ble/common \
  $(SDK_ROOT)/components/softdevice/common/softdevice_handler \
  $(SDK_ROOT)/components/softdevice/s130/headers \
  $(SDK_ROOT)/components/softdevice/s130/headers/nrf51 \
  $(SDK_ROOT)/components/device \
  $(SDK_ROOT)/components/toolchain \
  $(SDK_ROOT)/components/toolchain/gcc \
  $(SDK_ROOT)/components/toolchain/cmsis/include \

# ---- Flags ------------------------------------------------------------------
CFLAGS += -DBOARD_CUSTOM
CFLAGS += -DSOFTDEVICE_PRESENT
CFLAGS += -DNRF51
CFLAGS += -DNRF51822
CFLAGS += -DS130
CFLAGS += -DBLE_STACK_SUPPORT_REQD
CFLAGS += -DSWI_DISABLE0
CFLAGS += -DNRF_SD_BLE_API_VERSION=2
CFLAGS += -mcpu=cortex-m0 -mthumb -mabi=aapcs
CFLAGS += -Wall -O2 -g3
CFLAGS += -mfloat-abi=soft
CFLAGS += -ffunction-sections -fdata-sections -fno-strict-aliasing
CFLAGS += -fno-builtin --short-enums

ASMFLAGS += -x assembler-with-cpp
ASMFLAGS += -DSOFTDEVICE_PRESENT -DNRF51 -DNRF51822 -DS130
ASMFLAGS += -DBLE_STACK_SUPPORT_REQD -DSWI_DISABLE0 -DNRF_SD_BLE_API_VERSION=2
ASMFLAGS += -mcpu=cortex-m0 -mthumb -mabi=aapcs -mfloat-abi=soft

LDFLAGS += -mthumb -mabi=aapcs -L $(TEMPLATE_PATH) -T$(LINKER_SCRIPT)
LDFLAGS += -mcpu=cortex-m0
LDFLAGS += -Wl,--gc-sections
LDFLAGS += --specs=nano.specs -lc -lnosys

.PHONY: $(TARGETS) default all clean help flash flash_softdevice erase

default: nrf51822_xxac

help:
	@echo Targets: nrf51822_xxac  clean  flash  flash_softdevice  erase

TEMPLATE_PATH := $(SDK_ROOT)/components/toolchain/gcc

include $(TEMPLATE_PATH)/Makefile.common

$(foreach target, $(TARGETS), $(call define_target, $(target)))

SOFTDEVICE_HEX := $(SDK_ROOT)/components/softdevice/s130/hex/s130_nrf51_2.0.1_softdevice.hex

flash: $(OUTPUT_DIRECTORY)/nrf51822_xxac.hex
	nrfjprog --program $< -f nrf51 --sectorerase
	nrfjprog --reset -f nrf51

flash_softdevice:
	nrfjprog --program $(SOFTDEVICE_HEX) -f nrf51 --sectorerase
	nrfjprog --reset -f nrf51

erase:
	nrfjprog --eraseall -f nrf51
