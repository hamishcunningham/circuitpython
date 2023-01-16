# mpconfigboard.mk

USB_VID = 0x16D0
USB_PID = 0x1178
USB_PRODUCT = "unPhone"
USB_MANUFACTURER = "Pimoroni Ltd. and the University of Sheffield"

IDF_TARGET = esp32s3

CIRCUITPY_ESP_FLASH_MODE = dio
CIRCUITPY_ESP_FLASH_FREQ = 80m
CIRCUITPY_ESP_FLASH_SIZE = 8MB

#OPTIMIZATION_FLAGS = -Os
CIRCUITPY_ESP32_CAMERA = 0

# include these Python libraries in firmware:
# FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_ ...TODO
