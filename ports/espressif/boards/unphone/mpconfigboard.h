// mpconfigboard.h
// seeded from ../espressif_esp32s3_devkitc_1_n8r8/ and
// ../adafruit_feather_esp32s3_4mbflash_2mbpsram/
// under the same license

#define MICROPY_HW_BOARD_NAME       "unPhone"
#define MICROPY_HW_MCU_NAME         "ESP32S3"

// old: #define MICROPY_HW_NEOPIXEL (&pin_GPIO33)
// old: #define CIRCUITPY_STATUS_LED_POWER (&pin_GPIO21)
#define CIRCUITPY_STATUS_LED_POWER (&pin_GPIO13)

#define MICROPY_HW_LED_STATUS (&pin_GPIO13)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO4)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO3)

// old: #define DEFAULT_SPI_BUS_SCK (&pin_GPIO36)
// old: #define DEFAULT_SPI_BUS_MOSI (&pin_GPIO35)
// old: #define DEFAULT_SPI_BUS_MISO (&pin_GPIO37)
#define DEFAULT_SPI_BUS_SCK (&pin_GPIO39)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO40)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO41)

// old: #define DEFAULT_UART_BUS_RX (&pin_GPIO38)
// old: #define DEFAULT_UART_BUS_TX (&pin_GPIO39)
#define DEFAULT_UART_BUS_RX (&pin_GPIO44)
#define DEFAULT_UART_BUS_TX (&pin_GPIO43)

// old: #define DOUBLE_TAP_PIN (&pin_GPIO34)
#define DOUBLE_TAP_PIN (&pin_GPIO45)
