USBD_CLASS_CDC_DIR := $(USBD_CLASS_ROOT)/cdc

SOURCES += $(wildcard $(USBD_CLASS_CDC_DIR)/*.c)
INCLUDES += $(USBD_CLASS_CDC_DIR)
