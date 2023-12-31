#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG__USB_ALPHA_15X15
#define LV_ATTRIBUTE_IMG__USB_ALPHA_15X15
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG__USB_ALPHA_15X15 uint8_t _usb_alpha_15x15_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x06, 0xff, 0xbb, 0xff, 0x70, 0xff, 0x0b, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03, 0xff, 0x15, 0xff, 0x11, 0xff, 0x12, 0xff, 0xa8, 0xff, 0x4a, 0xff, 0x73, 0xff, 0x58, 0xff, 0x0a, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x04, 0xff, 0x29, 0xff, 0x9f, 0xff, 0x8b, 0xff, 0xa0, 0xff, 0x42, 0xff, 0xa3, 0xff, 0x3d, 0xff, 0x77, 0xff, 0x63, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x04, 0xff, 0x27, 0xff, 0x63, 0xff, 0x90, 0xff, 0xac, 0xff, 0x64, 0xff, 0x16, 0xff, 0x02, 0xff, 0x71, 0xff, 0x40, 0xff, 0xba, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03, 0xff, 0x25, 0xff, 0x63, 0xff, 0x3f, 0xff, 0x07, 0xff, 0x5c, 0xff, 0xaa, 0xff, 0x6c, 0xff, 0x18, 0xff, 0x42, 0xff, 0xa0, 0xff, 0x08, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x02, 0xff, 0x21, 0xff, 0x68, 0xff, 0x46, 0x00, 0x00, 0x00, 0x00, 0xff, 0x08, 0xff, 0x5c, 0xff, 0xb2, 0xff, 0x73, 0xff, 0x9a, 0xff, 0x12, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x01, 0xff, 0x1d, 0xff, 0x71, 0xff, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x06, 0xff, 0x5a, 0xff, 0xbf, 0xff, 0x86, 0xff, 0x0c, 0x00, 0x00, 
  0xff, 0x01, 0xff, 0x19, 0xff, 0x74, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x02, 0xff, 0xa1, 0xff, 0x8e, 0xff, 0x0d, 0x00, 0x00, 
  0xff, 0x06, 0xff, 0x7f, 0xff, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x4b, 0xff, 0x6a, 0xff, 0x1c, 0xff, 0x01, 0x00, 0x00, 
  0xff, 0x8a, 0xff, 0x47, 0xff, 0x29, 0xff, 0x81, 0xff, 0x6a, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x42, 0xff, 0x64, 0xff, 0x21, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xde, 0xff, 0x13, 0xff, 0xa5, 0xff, 0x3d, 0xff, 0x59, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3c, 0xff, 0x5e, 0xff, 0x23, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xe7, 0xff, 0x1a, 0xff, 0xd2, 0x00, 0x00, 0xff, 0x3c, 0xff, 0x7e, 0x00, 0x00, 0xff, 0x39, 0xff, 0x5e, 0xff, 0x24, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xc0, 0xff, 0x04, 0xff, 0x4a, 0xff, 0xd0, 0xff, 0xa7, 0xff, 0x32, 0xff, 0x38, 0xff, 0x66, 0xff, 0x25, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x1a, 0xff, 0xc4, 0xff, 0x04, 0xff, 0x19, 0xff, 0x13, 0xff, 0x38, 0xff, 0x73, 0xff, 0x2a, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x1f, 0xff, 0xd7, 0xff, 0xc9, 0xff, 0xca, 0xff, 0xa7, 0xff, 0x15, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0xff, 0xff, 0xbb, 0xff, 0xff, 0x70, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0xff, 0xff, 0x15, 0xff, 0xff, 0x11, 0xff, 0xff, 0x12, 0xff, 0xff, 0xa8, 0xff, 0xff, 0x4a, 0xff, 0xff, 0x73, 0xff, 0xff, 0x58, 0xff, 0xff, 0x0a, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x04, 0xff, 0xff, 0x29, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x8b, 0xff, 0xff, 0xa0, 0xff, 0xff, 0x42, 0xff, 0xff, 0xa3, 0xff, 0xff, 0x3d, 0xff, 0xff, 0x77, 0xff, 0xff, 0x63, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x04, 0xff, 0xff, 0x27, 0xff, 0xff, 0x63, 0xff, 0xff, 0x90, 0xff, 0xff, 0xac, 0xff, 0xff, 0x64, 0xff, 0xff, 0x16, 0xff, 0xff, 0x02, 0xff, 0xff, 0x71, 0xff, 0xff, 0x40, 0xff, 0xff, 0xba, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0xff, 0xff, 0x25, 0xff, 0xff, 0x63, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x07, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xaa, 0xff, 0xff, 0x6c, 0xff, 0xff, 0x18, 0xff, 0xff, 0x42, 0xff, 0xff, 0xa0, 0xff, 0xff, 0x08, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x02, 0xff, 0xff, 0x21, 0xff, 0xff, 0x68, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x08, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xb2, 0xff, 0xff, 0x73, 0xff, 0xff, 0x9a, 0xff, 0xff, 0x12, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0xff, 0xff, 0x1d, 0xff, 0xff, 0x71, 0xff, 0xff, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0xff, 0xff, 0x5a, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x86, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x01, 0xff, 0xff, 0x19, 0xff, 0xff, 0x74, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x02, 0xff, 0xff, 0xa1, 0xff, 0xff, 0x8e, 0xff, 0xff, 0x0d, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x06, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x4b, 0xff, 0xff, 0x6a, 0xff, 0xff, 0x1c, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x8a, 0xff, 0xff, 0x47, 0xff, 0xff, 0x29, 0xff, 0xff, 0x81, 0xff, 0xff, 0x6a, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x42, 0xff, 0xff, 0x64, 0xff, 0xff, 0x21, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xde, 0xff, 0xff, 0x13, 0xff, 0xff, 0xa5, 0xff, 0xff, 0x3d, 0xff, 0xff, 0x59, 0xff, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x5e, 0xff, 0xff, 0x23, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe7, 0xff, 0xff, 0x1a, 0xff, 0xff, 0xd2, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x7e, 0x00, 0x00, 0x00, 0xff, 0xff, 0x39, 0xff, 0xff, 0x5e, 0xff, 0xff, 0x24, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xc0, 0xff, 0xff, 0x04, 0xff, 0xff, 0x4a, 0xff, 0xff, 0xd0, 0xff, 0xff, 0xa7, 0xff, 0xff, 0x32, 0xff, 0xff, 0x38, 0xff, 0xff, 0x66, 0xff, 0xff, 0x25, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x1a, 0xff, 0xff, 0xc4, 0xff, 0xff, 0x04, 0xff, 0xff, 0x19, 0xff, 0xff, 0x13, 0xff, 0xff, 0x38, 0xff, 0xff, 0x73, 0xff, 0xff, 0x2a, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xc9, 0xff, 0xff, 0xca, 0xff, 0xff, 0xa7, 0xff, 0xff, 0x15, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0xff, 0xff, 0xbb, 0xff, 0xff, 0x70, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0xff, 0xff, 0x15, 0xff, 0xff, 0x11, 0xff, 0xff, 0x12, 0xff, 0xff, 0xa8, 0xff, 0xff, 0x4a, 0xff, 0xff, 0x73, 0xff, 0xff, 0x58, 0xff, 0xff, 0x0a, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x04, 0xff, 0xff, 0x29, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x8b, 0xff, 0xff, 0xa0, 0xff, 0xff, 0x42, 0xff, 0xff, 0xa3, 0xff, 0xff, 0x3d, 0xff, 0xff, 0x77, 0xff, 0xff, 0x63, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x04, 0xff, 0xff, 0x27, 0xff, 0xff, 0x63, 0xff, 0xff, 0x90, 0xff, 0xff, 0xac, 0xff, 0xff, 0x64, 0xff, 0xff, 0x16, 0xff, 0xff, 0x02, 0xff, 0xff, 0x71, 0xff, 0xff, 0x40, 0xff, 0xff, 0xba, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0xff, 0xff, 0x25, 0xff, 0xff, 0x63, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x07, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xaa, 0xff, 0xff, 0x6c, 0xff, 0xff, 0x18, 0xff, 0xff, 0x42, 0xff, 0xff, 0xa0, 0xff, 0xff, 0x08, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x02, 0xff, 0xff, 0x21, 0xff, 0xff, 0x68, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x08, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xb2, 0xff, 0xff, 0x73, 0xff, 0xff, 0x9a, 0xff, 0xff, 0x12, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0xff, 0xff, 0x1d, 0xff, 0xff, 0x71, 0xff, 0xff, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0xff, 0xff, 0x5a, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x86, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x01, 0xff, 0xff, 0x19, 0xff, 0xff, 0x74, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x02, 0xff, 0xff, 0xa1, 0xff, 0xff, 0x8e, 0xff, 0xff, 0x0d, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x06, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x4b, 0xff, 0xff, 0x6a, 0xff, 0xff, 0x1c, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x8a, 0xff, 0xff, 0x47, 0xff, 0xff, 0x29, 0xff, 0xff, 0x81, 0xff, 0xff, 0x6a, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x42, 0xff, 0xff, 0x64, 0xff, 0xff, 0x21, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xde, 0xff, 0xff, 0x13, 0xff, 0xff, 0xa5, 0xff, 0xff, 0x3d, 0xff, 0xff, 0x59, 0xff, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x5e, 0xff, 0xff, 0x23, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe7, 0xff, 0xff, 0x1a, 0xff, 0xff, 0xd2, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x7e, 0x00, 0x00, 0x00, 0xff, 0xff, 0x39, 0xff, 0xff, 0x5e, 0xff, 0xff, 0x24, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xc0, 0xff, 0xff, 0x04, 0xff, 0xff, 0x4a, 0xff, 0xff, 0xd0, 0xff, 0xff, 0xa7, 0xff, 0xff, 0x32, 0xff, 0xff, 0x38, 0xff, 0xff, 0x66, 0xff, 0xff, 0x25, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x1a, 0xff, 0xff, 0xc4, 0xff, 0xff, 0x04, 0xff, 0xff, 0x19, 0xff, 0xff, 0x13, 0xff, 0xff, 0x38, 0xff, 0xff, 0x73, 0xff, 0xff, 0x2a, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xc9, 0xff, 0xff, 0xca, 0xff, 0xff, 0xa7, 0xff, 0xff, 0x15, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Alpha 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff, 0xbb, 0xff, 0xff, 0xff, 0x70, 0xff, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x15, 0xff, 0xff, 0xff, 0x11, 0xff, 0xff, 0xff, 0x12, 0xff, 0xff, 0xff, 0xa8, 0xff, 0xff, 0xff, 0x4a, 0xff, 0xff, 0xff, 0x73, 0xff, 0xff, 0xff, 0x58, 0xff, 0xff, 0xff, 0x0a, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x29, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x8b, 0xff, 0xff, 0xff, 0xa0, 0xff, 0xff, 0xff, 0x42, 0xff, 0xff, 0xff, 0xa3, 0xff, 0xff, 0xff, 0x3d, 0xff, 0xff, 0xff, 0x77, 0xff, 0xff, 0xff, 0x63, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x27, 0xff, 0xff, 0xff, 0x63, 0xff, 0xff, 0xff, 0x90, 0xff, 0xff, 0xff, 0xac, 0xff, 0xff, 0xff, 0x64, 0xff, 0xff, 0xff, 0x16, 0xff, 0xff, 0xff, 0x02, 0xff, 0xff, 0xff, 0x71, 0xff, 0xff, 0xff, 0x40, 0xff, 0xff, 0xff, 0xba, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x25, 0xff, 0xff, 0xff, 0x63, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xff, 0xaa, 0xff, 0xff, 0xff, 0x6c, 0xff, 0xff, 0xff, 0x18, 0xff, 0xff, 0xff, 0x42, 0xff, 0xff, 0xff, 0xa0, 0xff, 0xff, 0xff, 0x08, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x02, 0xff, 0xff, 0xff, 0x21, 0xff, 0xff, 0xff, 0x68, 0xff, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x08, 0xff, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xff, 0xb2, 0xff, 0xff, 0xff, 0x73, 0xff, 0xff, 0xff, 0x9a, 0xff, 0xff, 0xff, 0x12, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x1d, 0xff, 0xff, 0xff, 0x71, 0xff, 0xff, 0xff, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff, 0x5a, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0x86, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x19, 0xff, 0xff, 0xff, 0x74, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x02, 0xff, 0xff, 0xff, 0xa1, 0xff, 0xff, 0xff, 0x8e, 0xff, 0xff, 0xff, 0x0d, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x4b, 0xff, 0xff, 0xff, 0x6a, 0xff, 0xff, 0xff, 0x1c, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0x8a, 0xff, 0xff, 0xff, 0x47, 0xff, 0xff, 0xff, 0x29, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0x6a, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x42, 0xff, 0xff, 0xff, 0x64, 0xff, 0xff, 0xff, 0x21, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xde, 0xff, 0xff, 0xff, 0x13, 0xff, 0xff, 0xff, 0xa5, 0xff, 0xff, 0xff, 0x3d, 0xff, 0xff, 0xff, 0x59, 0xff, 0xff, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x3c, 0xff, 0xff, 0xff, 0x5e, 0xff, 0xff, 0xff, 0x23, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0x1a, 0xff, 0xff, 0xff, 0xd2, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x3c, 0xff, 0xff, 0xff, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x39, 0xff, 0xff, 0xff, 0x5e, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x4a, 0xff, 0xff, 0xff, 0xd0, 0xff, 0xff, 0xff, 0xa7, 0xff, 0xff, 0xff, 0x32, 0xff, 0xff, 0xff, 0x38, 0xff, 0xff, 0xff, 0x66, 0xff, 0xff, 0xff, 0x25, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0x1a, 0xff, 0xff, 0xff, 0xc4, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x19, 0xff, 0xff, 0xff, 0x13, 0xff, 0xff, 0xff, 0x38, 0xff, 0xff, 0xff, 0x73, 0xff, 0xff, 0xff, 0x2a, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xc9, 0xff, 0xff, 0xff, 0xca, 0xff, 0xff, 0xff, 0xa7, 0xff, 0xff, 0xff, 0x15, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t _usb_alpha_15x15 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 15,
  .header.h = 15,
  .data_size = 225 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = _usb_alpha_15x15_map,
};
