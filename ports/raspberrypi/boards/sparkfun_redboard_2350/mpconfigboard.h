// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2026 David Kelly for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#define MICROPY_HW_BOARD_NAME "IoT Redboard RP2350"
#define MICROPY_HW_MCU_NAME "rp2350b"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO3)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO5)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO4)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO22)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO20)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO23)
#define DEFAULT_SPI_BUS_CS (&pin_GPIO21)

#define DEFAULT_UART_BUS_RX (&pin_GPIO1)
#define DEFAULT_UART_BUS_TX (&pin_GPIO0)

// #define CIRCUITPY_CONSOLE_UART_RX DEFAULT_UART_BUS_RX
// #define CIRCUITPY_CONSOLE_UART_TX DEFAULT_UART_BUS_TX

#define CIRCUITPY_PSRAM_CHIP_SELECT (&pin_GPIO47)

#define DEFAULT_DVI_BUS_CLK_DN (&pin_GPIO15)
#define DEFAULT_DVI_BUS_CLK_DP (&pin_GPIO14)
#define DEFAULT_DVI_BUS_RED_DN (&pin_GPIO19)
#define DEFAULT_DVI_BUS_RED_DP (&pin_GPIO18)
#define DEFAULT_DVI_BUS_GREEN_DN (&pin_GPIO17)
#define DEFAULT_DVI_BUS_GREEN_DP (&pin_GPIO16)
#define DEFAULT_DVI_BUS_BLUE_DN (&pin_GPIO13)
#define DEFAULT_DVI_BUS_BLUE_DP (&pin_GPIO12)

#define DEFAULT_SD_SCK (&pin_GPIO10)
#define DEFAULT_SD_MOSI (&pin_GPIO08)
#define DEFAULT_SD_MISO (&pin_GPIO11)
#define DEFAULT_SD_CS (&pin_GPIO09)
#define DEFAULT_SD_CARD_DETECT (&pin_GPIO2)
#define DEFAULT_SD_CARD_INSERTED false
