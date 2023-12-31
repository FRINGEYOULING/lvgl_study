#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG__HUE_ALPHA_10X10
#define LV_ATTRIBUTE_IMG__HUE_ALPHA_10X10
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG__HUE_ALPHA_10X10 uint8_t _hue_alpha_10x10_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x4a, 0x09, 0x46, 0x45, 0x4a, 0xad, 0x4a, 0xec, 0x4f, 0xef, 0x53, 0xb3, 0x5b, 0x4b, 0x3b, 0x0b, 0x00, 0x00, 
  0x46, 0x09, 0x46, 0x72, 0x46, 0xeb, 0x4a, 0xff, 0x4a, 0xff, 0x4f, 0xff, 0x57, 0xff, 0x5b, 0xef, 0x5b, 0x7e, 0x3b, 0x0b, 
  0x46, 0x46, 0x46, 0xe9, 0x46, 0xff, 0x46, 0xff, 0x4a, 0xff, 0x4f, 0xff, 0x5b, 0xff, 0x5b, 0xff, 0x3a, 0xf1, 0x3a, 0x54, 
  0x66, 0xb1, 0x66, 0xff, 0x46, 0xff, 0x46, 0xff, 0x4a, 0xff, 0x53, 0xff, 0x5b, 0xff, 0x3a, 0xff, 0x5a, 0xff, 0x59, 0xc3, 
  0x66, 0xef, 0x66, 0xff, 0x66, 0xff, 0x66, 0xff, 0x46, 0xff, 0x3b, 0xff, 0x3a, 0xff, 0x59, 0xff, 0x59, 0xff, 0x59, 0xf3, 
  0xa5, 0xf1, 0xa5, 0xff, 0x85, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xfc, 0xff, 0xdd, 0xff, 0xb9, 0xff, 0xb9, 0xff, 0xb9, 0xf5, 
  0xa5, 0xb6, 0xa5, 0xff, 0xc5, 0xff, 0xc5, 0xff, 0xe9, 0xff, 0xf9, 0xff, 0xfd, 0xff, 0xfd, 0xff, 0xdd, 0xff, 0xbd, 0xc8, 
  0xc5, 0x4c, 0xc5, 0xee, 0xc5, 0xff, 0xe5, 0xff, 0xed, 0xff, 0xf5, 0xff, 0xfd, 0xff, 0xfd, 0xff, 0xfd, 0xf4, 0xfd, 0x5b, 
  0xc4, 0x0a, 0xc5, 0x79, 0xe5, 0xef, 0xe9, 0xff, 0xed, 0xff, 0xf5, 0xff, 0xf9, 0xff, 0xfd, 0xf3, 0xfd, 0x84, 0xfd, 0x0d, 
  0x00, 0x00, 0xe4, 0x0b, 0xe5, 0x52, 0xe9, 0xbe, 0xed, 0xf1, 0xf5, 0xf3, 0xf5, 0xc4, 0xf9, 0x59, 0xfd, 0x0d, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0xd2, 0x39, 0x09, 0x71, 0x39, 0x45, 0xd2, 0x39, 0xad, 0xf3, 0x39, 0xec, 0x56, 0x33, 0xef, 0xb8, 0x3b, 0xb3, 0x9c, 0x3d, 0x4b, 0xda, 0x35, 0x0b, 0x00, 0x00, 0x00, 
  0xf2, 0x38, 0x09, 0x71, 0x41, 0x72, 0x91, 0x39, 0xeb, 0x92, 0x39, 0xff, 0xf3, 0x39, 0xff, 0x56, 0x33, 0xff, 0xdb, 0x3c, 0xff, 0xdb, 0x3d, 0xef, 0x19, 0x36, 0x7e, 0xd4, 0x35, 0x0b, 
  0x72, 0x49, 0x46, 0x92, 0x49, 0xe9, 0x92, 0x41, 0xff, 0x71, 0x39, 0xff, 0xf3, 0x39, 0xff, 0x56, 0x33, 0xff, 0x9c, 0x3d, 0xff, 0xf8, 0x35, 0xff, 0xf3, 0x35, 0xf1, 0xcf, 0x35, 0x54, 
  0x70, 0x61, 0xb1, 0x91, 0x51, 0xff, 0x92, 0x49, 0xff, 0x92, 0x41, 0xff, 0xb2, 0x39, 0xff, 0x19, 0x3c, 0xff, 0xf9, 0x35, 0xff, 0xd1, 0x35, 0xff, 0xce, 0x35, 0xff, 0xcb, 0x3d, 0xc3, 
  0x70, 0x61, 0xef, 0x70, 0x61, 0xff, 0x70, 0x61, 0xff, 0x92, 0x59, 0xff, 0x32, 0x39, 0xff, 0x9a, 0x1d, 0xff, 0xac, 0x2d, 0xff, 0xaa, 0x35, 0xff, 0xa9, 0x3d, 0xff, 0xaa, 0x3d, 0xf3, 
  0xca, 0x90, 0xf1, 0xca, 0x90, 0xff, 0xca, 0x90, 0xff, 0xe8, 0x98, 0xff, 0x65, 0xc0, 0xff, 0x64, 0xf7, 0xff, 0xa7, 0xbe, 0xff, 0x67, 0xa6, 0xff, 0x67, 0xa6, 0xff, 0x67, 0xa6, 0xf5, 
  0xe9, 0x98, 0xb6, 0xe6, 0xa8, 0xff, 0x05, 0xb9, 0xff, 0x05, 0xc9, 0xff, 0xe4, 0xe9, 0xff, 0xc5, 0xfd, 0xff, 0x45, 0xff, 0xff, 0x26, 0xe7, 0xff, 0xe7, 0xd6, 0xff, 0x87, 0xb6, 0xc8, 
  0x05, 0xb1, 0x4c, 0x05, 0xb9, 0xee, 0x05, 0xc9, 0xff, 0x45, 0xe1, 0xff, 0x84, 0xf2, 0xff, 0x25, 0xfd, 0xff, 0xa4, 0xfe, 0xff, 0x45, 0xff, 0xff, 0x46, 0xef, 0xf4, 0x27, 0xe7, 0x5b, 
  0xe3, 0xd0, 0x0a, 0x05, 0xc9, 0x79, 0x45, 0xd9, 0xef, 0xa5, 0xe9, 0xff, 0xa4, 0xf2, 0xff, 0x25, 0xfd, 0xff, 0x04, 0xfe, 0xff, 0xe4, 0xfe, 0xf3, 0x65, 0xff, 0x84, 0x65, 0xef, 0x0d, 
  0x00, 0x00, 0x00, 0x83, 0xd1, 0x0b, 0x65, 0xe1, 0x52, 0x64, 0xea, 0xbe, 0xa4, 0xf2, 0xf1, 0x25, 0xfd, 0xf3, 0x65, 0xfd, 0xc4, 0x84, 0xfe, 0x59, 0xc5, 0xfe, 0x0d, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x39, 0xd2, 0x09, 0x39, 0x71, 0x45, 0x39, 0xd2, 0xad, 0x39, 0xf3, 0xec, 0x33, 0x56, 0xef, 0x3b, 0xb8, 0xb3, 0x3d, 0x9c, 0x4b, 0x35, 0xda, 0x0b, 0x00, 0x00, 0x00, 
  0x38, 0xf2, 0x09, 0x41, 0x71, 0x72, 0x39, 0x91, 0xeb, 0x39, 0x92, 0xff, 0x39, 0xf3, 0xff, 0x33, 0x56, 0xff, 0x3c, 0xdb, 0xff, 0x3d, 0xdb, 0xef, 0x36, 0x19, 0x7e, 0x35, 0xd4, 0x0b, 
  0x49, 0x72, 0x46, 0x49, 0x92, 0xe9, 0x41, 0x92, 0xff, 0x39, 0x71, 0xff, 0x39, 0xf3, 0xff, 0x33, 0x56, 0xff, 0x3d, 0x9c, 0xff, 0x35, 0xf8, 0xff, 0x35, 0xf3, 0xf1, 0x35, 0xcf, 0x54, 
  0x61, 0x70, 0xb1, 0x51, 0x91, 0xff, 0x49, 0x92, 0xff, 0x41, 0x92, 0xff, 0x39, 0xb2, 0xff, 0x3c, 0x19, 0xff, 0x35, 0xf9, 0xff, 0x35, 0xd1, 0xff, 0x35, 0xce, 0xff, 0x3d, 0xcb, 0xc3, 
  0x61, 0x70, 0xef, 0x61, 0x70, 0xff, 0x61, 0x70, 0xff, 0x59, 0x92, 0xff, 0x39, 0x32, 0xff, 0x1d, 0x9a, 0xff, 0x2d, 0xac, 0xff, 0x35, 0xaa, 0xff, 0x3d, 0xa9, 0xff, 0x3d, 0xaa, 0xf3, 
  0x90, 0xca, 0xf1, 0x90, 0xca, 0xff, 0x90, 0xca, 0xff, 0x98, 0xe8, 0xff, 0xc0, 0x65, 0xff, 0xf7, 0x64, 0xff, 0xbe, 0xa7, 0xff, 0xa6, 0x67, 0xff, 0xa6, 0x67, 0xff, 0xa6, 0x67, 0xf5, 
  0x98, 0xe9, 0xb6, 0xa8, 0xe6, 0xff, 0xb9, 0x05, 0xff, 0xc9, 0x05, 0xff, 0xe9, 0xe4, 0xff, 0xfd, 0xc5, 0xff, 0xff, 0x45, 0xff, 0xe7, 0x26, 0xff, 0xd6, 0xe7, 0xff, 0xb6, 0x87, 0xc8, 
  0xb1, 0x05, 0x4c, 0xb9, 0x05, 0xee, 0xc9, 0x05, 0xff, 0xe1, 0x45, 0xff, 0xf2, 0x84, 0xff, 0xfd, 0x25, 0xff, 0xfe, 0xa4, 0xff, 0xff, 0x45, 0xff, 0xef, 0x46, 0xf4, 0xe7, 0x27, 0x5b, 
  0xd0, 0xe3, 0x0a, 0xc9, 0x05, 0x79, 0xd9, 0x45, 0xef, 0xe9, 0xa5, 0xff, 0xf2, 0xa4, 0xff, 0xfd, 0x25, 0xff, 0xfe, 0x04, 0xff, 0xfe, 0xe4, 0xf3, 0xff, 0x65, 0x84, 0xef, 0x65, 0x0d, 
  0x00, 0x00, 0x00, 0xd1, 0x83, 0x0b, 0xe1, 0x65, 0x52, 0xea, 0x64, 0xbe, 0xf2, 0xa4, 0xf1, 0xfd, 0x25, 0xf3, 0xfd, 0x65, 0xc4, 0xfe, 0x84, 0x59, 0xfe, 0xc5, 0x0d, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Alpha 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x8e, 0x39, 0x39, 0x09, 0x89, 0x2c, 0x34, 0x45, 0x93, 0x39, 0x34, 0xad, 0x96, 0x3b, 0x35, 0xec, 0xb0, 0x66, 0x33, 0xef, 0xbc, 0x75, 0x35, 0xb3, 0xe0, 0xb1, 0x3a, 0x4b, 0xd1, 0xb9, 0x2e, 0x0b, 0x00, 0x00, 0x00, 0x00, 
  0x8e, 0x1c, 0x39, 0x09, 0x8b, 0x2d, 0x3c, 0x72, 0x8b, 0x2f, 0x37, 0xeb, 0x8c, 0x31, 0x34, 0xff, 0x96, 0x3b, 0x36, 0xff, 0xb2, 0x68, 0x33, 0xff, 0xd4, 0x98, 0x39, 0xff, 0xd9, 0xb6, 0x39, 0xef, 0xc4, 0xbe, 0x33, 0x7e, 0xa2, 0xb9, 0x2e, 0x0b, 
  0x8e, 0x2c, 0x49, 0x46, 0x8d, 0x2e, 0x44, 0xe9, 0x8c, 0x2f, 0x3c, 0xff, 0x8a, 0x2d, 0x35, 0xff, 0x96, 0x3a, 0x36, 0xff, 0xb1, 0x66, 0x33, 0xff, 0xdf, 0xb1, 0x3a, 0xff, 0xc3, 0xbd, 0x33, 0xff, 0x9a, 0xba, 0x2f, 0xf1, 0x79, 0xb6, 0x2e, 0x54, 
  0x83, 0x2b, 0x5e, 0xb1, 0x8b, 0x2e, 0x50, 0xff, 0x8f, 0x2f, 0x47, 0xff, 0x8c, 0x2e, 0x3c, 0xff, 0x8f, 0x32, 0x34, 0xff, 0xc5, 0x80, 0x37, 0xff, 0xc4, 0xbd, 0x33, 0xff, 0x8a, 0xb9, 0x2d, 0xff, 0x6e, 0xb6, 0x30, 0xff, 0x59, 0xb6, 0x3a, 0xc3, 
  0x82, 0x2c, 0x62, 0xef, 0x82, 0x2c, 0x63, 0xff, 0x83, 0x2d, 0x61, 0xff, 0x8c, 0x2f, 0x55, 0xff, 0x8f, 0x25, 0x34, 0xff, 0xd0, 0xb0, 0x1b, 0xff, 0x61, 0xb4, 0x29, 0xff, 0x4e, 0xb4, 0x33, 0xff, 0x4b, 0xb4, 0x34, 0xff, 0x4c, 0xb4, 0x34, 0xf3, 
  0x4d, 0x19, 0x90, 0xf1, 0x4d, 0x19, 0x90, 0xff, 0x4e, 0x19, 0x8f, 0xff, 0x3f, 0x1a, 0x9a, 0xff, 0x24, 0x0a, 0xc3, 0xff, 0x1c, 0xec, 0xf1, 0xff, 0x38, 0xd5, 0xbb, 0xff, 0x3a, 0xcc, 0xa3, 0xff, 0x3a, 0xcc, 0xa3, 0xff, 0x3a, 0xcc, 0xa3, 0xf5, 
  0x47, 0x1c, 0x95, 0xb6, 0x32, 0x1d, 0xa5, 0xff, 0x25, 0x1f, 0xb4, 0xff, 0x25, 0x21, 0xc8, 0xff, 0x23, 0x3b, 0xe8, 0xff, 0x24, 0xb6, 0xfb, 0xff, 0x26, 0xe8, 0xf6, 0xff, 0x33, 0xe5, 0xe3, 0xff, 0x38, 0xdc, 0xcd, 0xff, 0x3b, 0xd1, 0xad, 0xc8, 
  0x25, 0x1e, 0xb2, 0x4c, 0x26, 0x1f, 0xba, 0xee, 0x26, 0x21, 0xc9, 0xff, 0x25, 0x28, 0xdc, 0xff, 0x23, 0x51, 0xec, 0xff, 0x26, 0xa5, 0xf9, 0xff, 0x22, 0xd5, 0xfc, 0xff, 0x25, 0xe9, 0xf5, 0xff, 0x2f, 0xe8, 0xe9, 0xf4, 0x35, 0xe3, 0xdd, 0x5b, 
  0x1a, 0x1a, 0xcc, 0x0a, 0x26, 0x20, 0xc8, 0x79, 0x25, 0x27, 0xd9, 0xef, 0x24, 0x34, 0xe4, 0xff, 0x22, 0x55, 0xed, 0xff, 0x26, 0xa4, 0xfa, 0xff, 0x23, 0xc1, 0xfb, 0xff, 0x22, 0xdb, 0xfb, 0xf3, 0x25, 0xea, 0xf7, 0x84, 0x27, 0xeb, 0xeb, 0x0d, 
  0x00, 0x00, 0x00, 0x00, 0x17, 0x2e, 0xd1, 0x0b, 0x25, 0x2c, 0xe0, 0x52, 0x23, 0x4b, 0xeb, 0xbe, 0x22, 0x55, 0xed, 0xf1, 0x26, 0xa5, 0xfa, 0xf3, 0x24, 0xaa, 0xfa, 0xc4, 0x22, 0xce, 0xfc, 0x59, 0x27, 0xd8, 0xff, 0x0d, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t _hue_alpha_10x10 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 10,
  .header.h = 10,
  .data_size = 100 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = _hue_alpha_10x10_map,
};
