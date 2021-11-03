#pragma once

enum
{
	USB_ITF_KEYBOARD = 0,
	USB_ITF_MOUSE,
//	USB_ITF_HID_GENERIC,
	USB_ITF_CDC,
	USB_ITF_CDC2,
	USB_ITF_VENDOR,
	USB_ITF_MAX,
};

#define BOARD_DEVICE_RHPORT_NUM		0
#define BOARD_DEVICE_RHPORT_SPEED	OPT_MODE_FULL_SPEED

#define CFG_TUSB_RHPORT0_MODE		(OPT_MODE_DEVICE | BOARD_DEVICE_RHPORT_SPEED)

#define CFG_TUSB_MEM_SECTION
#define CFG_TUSB_MEM_ALIGN			__attribute__ ((aligned(4)))

#define CFG_TUD_ENDPOINT0_SIZE		64

#define CFG_TUD_HID					2//3
#define CFG_TUD_CDC					1
#define CFG_TUD_MSC					0
#define CFG_TUD_MIDI				0
#define CFG_TUD_VENDOR				1

#define CFG_TUD_HID_EP_BUFSIZE		8

#define CFG_TUD_CDC_RX_BUFSIZE		256
#define CFG_TUD_CDC_TX_BUFSIZE		256

#define CFG_TUD_VENDOR_RX_BUFSIZE	64
#define CFG_TUD_VENDOR_TX_BUFSIZE	64
