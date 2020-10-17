// Copyright (c) 2019, XMOS Ltd, All rights reserved

#ifndef SOC_CONF_H_
#define SOC_CONF_H_

/* Tile descriptors */
#define SOC_MULTITILE        1
#define SOC_TILE_0_INCLUDE   SOC_TILE_HAS_BOTH
#define SOC_TILE_1_INCLUDE   SOC_TILE_HAS_BITSTREAM
#define SOC_TILE_2_INCLUDE   SOC_TILE_UNUSED
#define SOC_TILE_3_INCLUDE   SOC_TILE_UNUSED

/* Peripherals */
#define SOC_ETHERNET_PERIPHERAL_USED        (0)
#define SOC_GPIO_PERIPHERAL_USED            (1)
#define SOC_I2C_PERIPHERAL_USED             (0)
#define SOC_I2S_PERIPHERAL_USED             (0)
#define SOC_MICARRAY_PERIPHERAL_USED        (1)
#define SOC_SDRAM_PERIPHERAL_USED           (0)
#define SOC_SPI_PERIPHERAL_USED             (1)
#define SOC_QSPI_FLASH_PERIPHERAL_USED      (1)


/*
 * Peripheral Configuration
 */

/* MicArray Config */
#define MICARRAYCONF_WORD_LENGTH_SHORT              (0)
#define MICARRAYCONF_MAX_FRAME_SIZE_LOG2            (8)
#define MICARRAYCONF_NUM_MICS                       (4)
#define MICARRAYCONF_DECIMATOR_COUNT                (1)
#define MICARRAYCONF_NUM_FRAME_BUFFERS              (2)
#define MICARRAYCONF_PDM_INTEGRATION_FACTOR         (32)
#define MICARRAYCONF_SAMPLE_RATE                    (16000)
#define MICARRAYCONF_MASTER_TO_PDM_CLOCK_DIVIDER    (8)
#define MICARRAYCONF_MASTER_CLOCK_FREQUENCY         (24576000)
#define MIC_DUAL_ENABLED                            (1)
#define MIC_DUAL_FRAME_SIZE                         (1 << MICARRAYCONF_MAX_FRAME_SIZE_LOG2)

/* QSPI Flash Config */
#define QSPI_FLASH_DEV_WRITE_BUFSIZE  4096

#endif /* SOC_CONF_H_ */
