USBD_CLASS_HID_DIR := $(USBD_CLASS_ROOT)/hid

SOURCES += $(wildcard $(USBD_CLASS_HID_DIR)/*.c)
INCLUDES += $(USBD_CLASS_HID_DIR)
