/*******************************************************************************
 * Size: 18 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef ALIBABA_FONT_18
#define ALIBABA_FONT_18 1
#endif

#if ALIBABA_FONT_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0041 "A" */
    0x0, 0x0, 0xa, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xbd, 0xff, 0x90, 0x0, 0x0, 0x1,
    0xff, 0xf5, 0x8f, 0xfe, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0x13, 0xff, 0xf4, 0x0, 0x0, 0xc, 0xff,
    0xb0, 0xe, 0xff, 0xa0, 0x0, 0x1, 0xff, 0xff,
    0xee, 0xff, 0xff, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0x0, 0xd, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xb0, 0x2, 0xff, 0xf6, 0x0, 0x0,
    0x9f, 0xff, 0x10, 0x8f, 0xff, 0x20, 0x0, 0x5,
    0xff, 0xf6, 0xd, 0xff, 0xd0, 0x0, 0x0, 0xf,
    0xff, 0xc0,

    /* U+0042 "B" */
    0xdf, 0xff, 0xff, 0xea, 0x40, 0xd, 0xff, 0xff,
    0xff, 0xff, 0x40, 0xdf, 0xff, 0xdf, 0xff, 0xfb,
    0xd, 0xff, 0xc0, 0xd, 0xff, 0xd0, 0xdf, 0xfc,
    0x0, 0xbf, 0xfc, 0xd, 0xff, 0xe8, 0xaf, 0xff,
    0x60, 0xdf, 0xff, 0xff, 0xff, 0x80, 0xd, 0xff,
    0xff, 0xff, 0xff, 0x80, 0xdf, 0xfc, 0x1, 0xaf,
    0xff, 0x1d, 0xff, 0xc0, 0x8, 0xff, 0xf2, 0xdf,
    0xff, 0xde, 0xff, 0xff, 0xd, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0xdf, 0xff, 0xff, 0xec, 0x60, 0x0,

    /* U+0043 "C" */
    0x0, 0x3, 0xae, 0xff, 0xea, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xf1, 0x4, 0xff, 0xff, 0xff, 0xff,
    0x10, 0xbf, 0xff, 0xb3, 0x12, 0x60, 0xf, 0xff,
    0xf1, 0x0, 0x0, 0x1, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff,
    0xfd, 0x0, 0x0, 0x0, 0xf, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xb3, 0x23, 0x61, 0x5,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x9, 0xff, 0xff,
    0xff, 0xf3, 0x0, 0x5, 0xbe, 0xff, 0xea, 0x10,

    /* U+0044 "D" */
    0xdf, 0xff, 0xff, 0xeb, 0x50, 0x0, 0xdf, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0x50, 0xdf, 0xfc, 0x1, 0x8f, 0xff, 0xb0,
    0xdf, 0xfc, 0x0, 0xd, 0xff, 0xf0, 0xdf, 0xfc,
    0x0, 0xa, 0xff, 0xf0, 0xdf, 0xfc, 0x0, 0x9,
    0xff, 0xf1, 0xdf, 0xfc, 0x0, 0xa, 0xff, 0xf0,
    0xdf, 0xfc, 0x0, 0xd, 0xff, 0xe0, 0xdf, 0xfc,
    0x12, 0x8f, 0xff, 0xb0, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0x40, 0xdf, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0xdf, 0xff, 0xff, 0xea, 0x40, 0x0,

    /* U+0045 "E" */
    0xdf, 0xff, 0xff, 0xff, 0x5d, 0xff, 0xff, 0xff,
    0xf5, 0xdf, 0xff, 0xff, 0xff, 0x5d, 0xff, 0xc2,
    0x22, 0x20, 0xdf, 0xfc, 0x0, 0x0, 0xd, 0xff,
    0xff, 0xff, 0xf0, 0xdf, 0xff, 0xff, 0xff, 0xd,
    0xff, 0xff, 0xff, 0xf0, 0xdf, 0xfc, 0x0, 0x0,
    0xd, 0xff, 0xc1, 0x11, 0x10, 0xdf, 0xff, 0xff,
    0xff, 0x7d, 0xff, 0xff, 0xff, 0xf7, 0xdf, 0xff,
    0xff, 0xff, 0x70,

    /* U+0046 "F" */
    0xdf, 0xff, 0xff, 0xff, 0x5d, 0xff, 0xff, 0xff,
    0xf5, 0xdf, 0xff, 0xff, 0xff, 0x5d, 0xff, 0xc2,
    0x22, 0x20, 0xdf, 0xfc, 0x0, 0x0, 0xd, 0xff,
    0xc1, 0x11, 0x10, 0xdf, 0xff, 0xff, 0xff, 0xd,
    0xff, 0xff, 0xff, 0xf0, 0xdf, 0xff, 0xff, 0xff,
    0xd, 0xff, 0xc0, 0x0, 0x0, 0xdf, 0xfc, 0x0,
    0x0, 0xd, 0xff, 0xc0, 0x0, 0x0, 0xdf, 0xfc,
    0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x3, 0x9d, 0xff, 0xec, 0x70, 0x0, 0x6f,
    0xff, 0xff, 0xff, 0xb0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xb0, 0xa, 0xff, 0xfc, 0x31, 0x24, 0x50,
    0xf, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xe0, 0xaf, 0xff, 0xf8, 0x2f, 0xff, 0xd0, 0xaf,
    0xff, 0xf8, 0x1f, 0xff, 0xd0, 0xaf, 0xff, 0xf8,
    0xf, 0xff, 0xf0, 0x0, 0xcf, 0xf8, 0xc, 0xff,
    0xf9, 0x10, 0xcf, 0xf8, 0x5, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0xaf, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x5, 0xbe, 0xff, 0xfd, 0xa3,

    /* U+0048 "H" */
    0xdf, 0xfc, 0x0, 0x4, 0xff, 0xf5, 0xdf, 0xfc,
    0x0, 0x4, 0xff, 0xf5, 0xdf, 0xfc, 0x0, 0x4,
    0xff, 0xf5, 0xdf, 0xfc, 0x0, 0x4, 0xff, 0xf5,
    0xdf, 0xfc, 0x0, 0x4, 0xff, 0xf5, 0xdf, 0xff,
    0xff, 0xff, 0xff, 0xf5, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0xf5, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xf5,
    0xdf, 0xfc, 0x0, 0x4, 0xff, 0xf5, 0xdf, 0xfc,
    0x0, 0x4, 0xff, 0xf5, 0xdf, 0xfc, 0x0, 0x4,
    0xff, 0xf5, 0xdf, 0xfc, 0x0, 0x4, 0xff, 0xf5,
    0xdf, 0xfc, 0x0, 0x4, 0xff, 0xf5,

    /* U+0049 "I" */
    0xdf, 0xfc, 0xdf, 0xfc, 0xdf, 0xfc, 0xdf, 0xfc,
    0xdf, 0xfc, 0xdf, 0xfc, 0xdf, 0xfc, 0xdf, 0xfc,
    0xdf, 0xfc, 0xdf, 0xfc, 0xdf, 0xfc, 0xdf, 0xfc,
    0xdf, 0xfc,

    /* U+004A "J" */
    0x0, 0xd, 0xff, 0xc0, 0x0, 0xdf, 0xfc, 0x0,
    0xd, 0xff, 0xc0, 0x0, 0xdf, 0xfc, 0x0, 0xd,
    0xff, 0xc0, 0x0, 0xdf, 0xfc, 0x0, 0xd, 0xff,
    0xc0, 0x0, 0xdf, 0xfc, 0x0, 0xd, 0xff, 0xc0,
    0x0, 0xdf, 0xfc, 0x0, 0xd, 0xff, 0xc0, 0x0,
    0xdf, 0xfb, 0x0, 0xd, 0xff, 0xb0, 0x2, 0xff,
    0xf8, 0x9c, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x90,
    0xbf, 0xfc, 0x60, 0x0,

    /* U+004B "K" */
    0xdf, 0xfc, 0x0, 0x1e, 0xff, 0xf2, 0xdf, 0xfc,
    0x0, 0xaf, 0xff, 0x60, 0xdf, 0xfc, 0x3, 0xff,
    0xfc, 0x0, 0xdf, 0xfc, 0xd, 0xff, 0xf2, 0x0,
    0xdf, 0xfc, 0x7f, 0xff, 0x70, 0x0, 0xdf, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0xdf, 0xff, 0xff, 0xf7,
    0x0, 0x0, 0xdf, 0xff, 0xff, 0xff, 0x10, 0x0,
    0xdf, 0xfc, 0x5f, 0xff, 0xa0, 0x0, 0xdf, 0xfc,
    0xc, 0xff, 0xf5, 0x0, 0xdf, 0xfc, 0x2, 0xff,
    0xfe, 0x10, 0xdf, 0xfc, 0x0, 0x9f, 0xff, 0x90,
    0xdf, 0xfc, 0x0, 0x1e, 0xff, 0xf4,

    /* U+004C "L" */
    0xdf, 0xfc, 0x0, 0x0, 0xd, 0xff, 0xc0, 0x0,
    0x0, 0xdf, 0xfc, 0x0, 0x0, 0xd, 0xff, 0xc0,
    0x0, 0x0, 0xdf, 0xfc, 0x0, 0x0, 0xd, 0xff,
    0xc0, 0x0, 0x0, 0xdf, 0xfc, 0x0, 0x0, 0xd,
    0xff, 0xc0, 0x0, 0x0, 0xdf, 0xfc, 0x0, 0x0,
    0xd, 0xff, 0xc1, 0x11, 0x10, 0xdf, 0xff, 0xff,
    0xff, 0x6d, 0xff, 0xff, 0xff, 0xf6, 0xdf, 0xff,
    0xff, 0xff, 0x60,

    /* U+004D "M" */
    0xdf, 0xff, 0xff, 0x20, 0x5f, 0xff, 0xff, 0x6d,
    0xff, 0xff, 0xf5, 0x9, 0xff, 0xff, 0xf6, 0xdf,
    0xff, 0xff, 0x80, 0xcf, 0xff, 0xff, 0x6d, 0xff,
    0xef, 0xfb, 0xf, 0xfe, 0xff, 0xf6, 0xdf, 0xfa,
    0xff, 0xe3, 0xff, 0xaf, 0xff, 0x6d, 0xff, 0xab,
    0xff, 0x8f, 0xf6, 0xff, 0xf6, 0xdf, 0xfa, 0x7f,
    0xff, 0xff, 0x2f, 0xff, 0x6d, 0xff, 0xa4, 0xff,
    0xff, 0xc2, 0xff, 0xf6, 0xdf, 0xfa, 0xf, 0xff,
    0xf8, 0x2f, 0xff, 0x6d, 0xff, 0xa0, 0xcf, 0xff,
    0x42, 0xff, 0xf6, 0xdf, 0xfa, 0x5, 0x99, 0x90,
    0x2f, 0xff, 0x6d, 0xff, 0xa0, 0x0, 0x0, 0x2,
    0xff, 0xf6, 0xdf, 0xfa, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0x60,

    /* U+004E "N" */
    0xdf, 0xff, 0xfc, 0x0, 0xbf, 0xfc, 0xdf, 0xff,
    0xff, 0x10, 0xbf, 0xfc, 0xdf, 0xff, 0xff, 0x60,
    0xbf, 0xfc, 0xdf, 0xff, 0xff, 0xb0, 0xbf, 0xfc,
    0xdf, 0xfd, 0xff, 0xf0, 0xbf, 0xfc, 0xdf, 0xfb,
    0xcf, 0xf5, 0xbf, 0xfc, 0xdf, 0xfb, 0x6f, 0xfa,
    0xbf, 0xfc, 0xdf, 0xfb, 0x1f, 0xff, 0xbf, 0xfc,
    0xdf, 0xfb, 0xb, 0xff, 0xff, 0xfc, 0xdf, 0xfb,
    0x6, 0xff, 0xff, 0xfc, 0xdf, 0xfb, 0x1, 0xff,
    0xff, 0xfc, 0xdf, 0xfb, 0x0, 0xbf, 0xff, 0xfc,
    0xdf, 0xfb, 0x0, 0x6f, 0xff, 0xfc,

    /* U+004F "O" */
    0x0, 0x6, 0xce, 0xff, 0xd9, 0x20, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x6, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0xcf, 0xff, 0x50, 0x1c,
    0xff, 0xf4, 0xf, 0xff, 0xc0, 0x0, 0x4f, 0xff,
    0x71, 0xff, 0xfa, 0x0, 0x2, 0xff, 0xf9, 0x2f,
    0xff, 0xa0, 0x0, 0x2f, 0xff, 0xa1, 0xff, 0xfa,
    0x0, 0x2, 0xff, 0xf9, 0xf, 0xff, 0xc0, 0x0,
    0x4f, 0xff, 0x70, 0xcf, 0xff, 0x50, 0x1c, 0xff,
    0xf4, 0x6, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x6,
    0xce, 0xff, 0xd9, 0x20, 0x0,

    /* U+0050 "P" */
    0xdf, 0xff, 0xff, 0xeb, 0x40, 0xd, 0xff, 0xff,
    0xff, 0xff, 0x60, 0xdf, 0xff, 0xce, 0xff, 0xfe,
    0xd, 0xff, 0xc0, 0xc, 0xff, 0xf1, 0xdf, 0xfc,
    0x0, 0x7f, 0xff, 0x3d, 0xff, 0xc0, 0x8, 0xff,
    0xf2, 0xdf, 0xfc, 0x2, 0xdf, 0xff, 0x1d, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0xdf, 0xff, 0xff, 0xff,
    0xf4, 0xd, 0xff, 0xfe, 0xdc, 0x92, 0x0, 0xdf,
    0xfc, 0x0, 0x0, 0x0, 0xd, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0xdf, 0xfc, 0x0, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x6, 0xce, 0xff, 0xd9, 0x20, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x6, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0xcf, 0xff, 0x50, 0x1c,
    0xff, 0xf4, 0xf, 0xff, 0xc0, 0x0, 0x4f, 0xff,
    0x71, 0xff, 0xfa, 0x0, 0x2, 0xff, 0xf9, 0x2f,
    0xff, 0xa0, 0x0, 0x2f, 0xff, 0xa1, 0xff, 0xfa,
    0x0, 0x2, 0xff, 0xf9, 0xf, 0xff, 0xc0, 0x0,
    0x4f, 0xff, 0x70, 0xcf, 0xff, 0x50, 0x1c, 0xff,
    0xf3, 0x6, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0, 0x7,
    0xce, 0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x18, 0x88, 0x70,

    /* U+0052 "R" */
    0xdf, 0xff, 0xff, 0xea, 0x30, 0x0, 0xdf, 0xff,
    0xff, 0xff, 0xf4, 0x0, 0xdf, 0xff, 0xcd, 0xff,
    0xfd, 0x0, 0xdf, 0xfc, 0x0, 0x9f, 0xff, 0x0,
    0xdf, 0xfc, 0x0, 0x7f, 0xff, 0x10, 0xdf, 0xfc,
    0x1, 0xcf, 0xff, 0x0, 0xdf, 0xff, 0xff, 0xff,
    0xfb, 0x0, 0xdf, 0xff, 0xff, 0xff, 0xd1, 0x0,
    0xdf, 0xfe, 0xcf, 0xff, 0x20, 0x0, 0xdf, 0xfc,
    0x1e, 0xff, 0xc0, 0x0, 0xdf, 0xfc, 0x6, 0xff,
    0xf8, 0x0, 0xdf, 0xfc, 0x0, 0xdf, 0xff, 0x30,
    0xdf, 0xfc, 0x0, 0x3f, 0xff, 0xd0,

    /* U+0053 "S" */
    0x0, 0x4b, 0xdf, 0xfe, 0xa0, 0x6, 0xff, 0xff,
    0xff, 0xf0, 0xe, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0x70, 0x0, 0x30, 0x1f, 0xff, 0xb4, 0x0,
    0x0, 0xe, 0xff, 0xff, 0xfa, 0x20, 0x5, 0xff,
    0xff, 0xff, 0xe1, 0x0, 0x27, 0xcf, 0xff, 0xf7,
    0x0, 0x0, 0x2, 0xff, 0xf9, 0x6, 0x31, 0x13,
    0xff, 0xf8, 0xf, 0xff, 0xff, 0xff, 0xf6, 0xf,
    0xff, 0xff, 0xff, 0xd0, 0xb, 0xdf, 0xff, 0xd8,
    0x10,

    /* U+0054 "T" */
    0xaf, 0xff, 0xff, 0xff, 0xfe, 0xaf, 0xff, 0xff,
    0xff, 0xfe, 0xaf, 0xff, 0xff, 0xff, 0xfe, 0x12,
    0x2b, 0xff, 0xe2, 0x22, 0x0, 0xa, 0xff, 0xe0,
    0x0, 0x0, 0xa, 0xff, 0xe0, 0x0, 0x0, 0xa,
    0xff, 0xe0, 0x0, 0x0, 0xa, 0xff, 0xe0, 0x0,
    0x0, 0xa, 0xff, 0xe0, 0x0, 0x0, 0xa, 0xff,
    0xe0, 0x0, 0x0, 0xa, 0xff, 0xe0, 0x0, 0x0,
    0xa, 0xff, 0xe0, 0x0, 0x0, 0xa, 0xff, 0xe0,
    0x0,

    /* U+0055 "U" */
    0xdf, 0xfb, 0x0, 0x3, 0xff, 0xf6, 0xdf, 0xfb,
    0x0, 0x3, 0xff, 0xf6, 0xdf, 0xfb, 0x0, 0x3,
    0xff, 0xf6, 0xdf, 0xfb, 0x0, 0x3, 0xff, 0xf6,
    0xdf, 0xfb, 0x0, 0x3, 0xff, 0xf6, 0xdf, 0xfb,
    0x0, 0x3, 0xff, 0xf6, 0xdf, 0xfb, 0x0, 0x3,
    0xff, 0xf6, 0xdf, 0xfb, 0x0, 0x3, 0xff, 0xf6,
    0xdf, 0xfc, 0x0, 0x3, 0xff, 0xf6, 0xcf, 0xff,
    0x62, 0x3c, 0xff, 0xf4, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x1d, 0xff, 0xff, 0xff, 0xff, 0x50,
    0x1, 0x8c, 0xff, 0xfd, 0x92, 0x0,

    /* U+0056 "V" */
    0xaf, 0xff, 0x50, 0x0, 0x7, 0xff, 0xf4, 0x4f,
    0xff, 0x90, 0x0, 0xc, 0xff, 0xf0, 0xf, 0xff,
    0xe0, 0x0, 0x1f, 0xff, 0x90, 0xa, 0xff, 0xf3,
    0x0, 0x5f, 0xff, 0x40, 0x4, 0xff, 0xf8, 0x0,
    0xaf, 0xfe, 0x0, 0x0, 0xef, 0xfc, 0x0, 0xff,
    0xf9, 0x0, 0x0, 0xaf, 0xff, 0x14, 0xff, 0xf3,
    0x0, 0x0, 0x4f, 0xff, 0x69, 0xff, 0xe0, 0x0,
    0x0, 0xe, 0xff, 0xae, 0xff, 0x80, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xff, 0x30, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0xef,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff,
    0xf2, 0x0, 0x0,

    /* U+0057 "W" */
    0xaf, 0xff, 0x10, 0x0, 0x0, 0x0, 0x4, 0xff,
    0xf7, 0x7f, 0xff, 0x30, 0x19, 0x99, 0x90, 0x7,
    0xff, 0xf3, 0x4f, 0xff, 0x60, 0x5f, 0xff, 0xf2,
    0x9, 0xff, 0xf0, 0x1f, 0xff, 0x80, 0x8f, 0xff,
    0xf5, 0xc, 0xff, 0xc0, 0xe, 0xff, 0xb0, 0xbf,
    0xff, 0xf8, 0xf, 0xff, 0x90, 0xb, 0xff, 0xd0,
    0xef, 0xff, 0xfb, 0x1f, 0xff, 0x50, 0x8, 0xff,
    0xf2, 0xff, 0xbf, 0xfd, 0x4f, 0xff, 0x20, 0x5,
    0xff, 0xf7, 0xff, 0x6d, 0xff, 0x8f, 0xfe, 0x0,
    0x1, 0xff, 0xfd, 0xff, 0x3a, 0xff, 0xdf, 0xfb,
    0x0, 0x0, 0xef, 0xff, 0xff, 0x6, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0xbf, 0xff, 0xfc, 0x3, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x8f, 0xff, 0xf8, 0x0,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x5f, 0xff, 0xf5,
    0x0, 0xcf, 0xff, 0xd0, 0x0,

    /* U+0058 "X" */
    0x5f, 0xff, 0xc0, 0x0, 0x8f, 0xff, 0x90, 0xc,
    0xff, 0xf4, 0x1, 0xff, 0xff, 0x10, 0x3, 0xff,
    0xfc, 0x8, 0xff, 0xf7, 0x0, 0x0, 0xaf, 0xff,
    0x5e, 0xff, 0xd0, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0x50, 0x0, 0x0, 0x8, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0xb, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x4f, 0xff, 0xef, 0xff, 0x80, 0x0, 0x0,
    0xdf, 0xff, 0x2e, 0xff, 0xf1, 0x0, 0x6, 0xff,
    0xfa, 0x7, 0xff, 0xfa, 0x0, 0x1e, 0xff, 0xf2,
    0x0, 0xff, 0xff, 0x30, 0x9f, 0xff, 0xa0, 0x0,
    0x8f, 0xff, 0xc0,

    /* U+0059 "Y" */
    0xbf, 0xff, 0x70, 0x0, 0x7f, 0xff, 0x92, 0xff,
    0xfe, 0x0, 0xe, 0xff, 0xf1, 0x9, 0xff, 0xf6,
    0x6, 0xff, 0xf7, 0x0, 0x1f, 0xff, 0xd0, 0xef,
    0xfd, 0x0, 0x0, 0x7f, 0xff, 0xbf, 0xff, 0x40,
    0x0, 0x0, 0xdf, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x5, 0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x6, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xff, 0x40, 0x0, 0x0,

    /* U+005A "Z" */
    0xc, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xc, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0xc, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x1, 0x22, 0x24, 0xff, 0xff, 0x50,
    0x0, 0x0, 0xc, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xc0, 0x0, 0x0, 0x6, 0xff, 0xfe,
    0x10, 0x0, 0x0, 0x3f, 0xff, 0xf3, 0x0, 0x0,
    0x1, 0xef, 0xff, 0x60, 0x0, 0x0, 0xc, 0xff,
    0xfb, 0x22, 0x22, 0x20, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xf4,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xf4,

    /* U+005B "[" */
    0xbf, 0xff, 0xf4, 0xbf, 0xff, 0xf4, 0xbf, 0xfe,
    0xb2, 0xbf, 0xfb, 0x0, 0xbf, 0xfb, 0x0, 0xbf,
    0xfb, 0x0, 0xbf, 0xfb, 0x0, 0xbf, 0xfb, 0x0,
    0xbf, 0xfb, 0x0, 0xbf, 0xfb, 0x0, 0xbf, 0xfb,
    0x0, 0xbf, 0xfb, 0x0, 0xbf, 0xfb, 0x0, 0xbf,
    0xfb, 0x0, 0xbf, 0xfb, 0x0, 0xbf, 0xfe, 0xb2,
    0xbf, 0xff, 0xf4, 0xbf, 0xff, 0xf4,

    /* U+005C "\\" */
    0xaf, 0xa0, 0x0, 0x0, 0x4, 0xff, 0x10, 0x0,
    0x0, 0xd, 0xf8, 0x0, 0x0, 0x0, 0x6f, 0xe0,
    0x0, 0x0, 0x0, 0xff, 0x50, 0x0, 0x0, 0x9,
    0xfc, 0x0, 0x0, 0x0, 0x2f, 0xf2, 0x0, 0x0,
    0x0, 0xcf, 0x90, 0x0, 0x0, 0x5, 0xff, 0x0,
    0x0, 0x0, 0xe, 0xf6, 0x0, 0x0, 0x0, 0x8f,
    0xd0, 0x0, 0x0, 0x1, 0xff, 0x40, 0x0, 0x0,
    0xa, 0xfa, 0x0, 0x0, 0x0, 0x3f, 0xf1, 0x0,
    0x0, 0x0, 0xdf, 0x80, 0x0, 0x0, 0x4, 0x86,

    /* U+005D "]" */
    0xcf, 0xff, 0xf3, 0xcf, 0xff, 0xf3, 0x9c, 0xff,
    0xf3, 0x3, 0xff, 0xf3, 0x3, 0xff, 0xf3, 0x3,
    0xff, 0xf3, 0x3, 0xff, 0xf3, 0x3, 0xff, 0xf3,
    0x3, 0xff, 0xf3, 0x3, 0xff, 0xf3, 0x3, 0xff,
    0xf3, 0x3, 0xff, 0xf3, 0x3, 0xff, 0xf3, 0x3,
    0xff, 0xf3, 0x3, 0xff, 0xf3, 0x9c, 0xff, 0xf3,
    0xcf, 0xff, 0xf3, 0xcf, 0xff, 0xf3,

    /* U+005E "^" */
    0x0, 0x7f, 0xff, 0x30, 0x0, 0xd, 0xff, 0xf9,
    0x0, 0x3, 0xff, 0xaf, 0xf0, 0x0, 0x9f, 0xd1,
    0xff, 0x60, 0xf, 0xf7, 0xb, 0xfc, 0x6, 0xff,
    0x20, 0x5f, 0xf3, 0xcf, 0xc0, 0x0, 0xff, 0x90,

    /* U+005F "_" */
    0x11, 0x11, 0x11, 0x11, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+0060 "`" */
    0x49, 0x97, 0x0, 0x8, 0xff, 0x50, 0x0, 0x6f,
    0xf1,

    /* U+0061 "a" */
    0x0, 0x2f, 0xff, 0xec, 0x70, 0x0, 0x3, 0xff,
    0xff, 0xff, 0x90, 0x0, 0x3f, 0xde, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xf0, 0x3, 0xbe,
    0xff, 0xff, 0xff, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x5f, 0xff, 0x42, 0x7f, 0xff, 0x5, 0xff,
    0xf7, 0x7d, 0xff, 0xf0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x4c, 0xff, 0xc7, 0xff, 0xf0,

    /* U+0062 "b" */
    0xef, 0xf8, 0x0, 0x0, 0x0, 0xe, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xef, 0xf8, 0x0, 0x0, 0x0,
    0xe, 0xff, 0x80, 0x0, 0x0, 0x0, 0xef, 0xf9,
    0xae, 0xfd, 0x60, 0xe, 0xff, 0xff, 0xff, 0xff,
    0x50, 0xef, 0xff, 0x99, 0xff, 0xfb, 0xe, 0xff,
    0x80, 0xa, 0xff, 0xe0, 0xef, 0xf5, 0x0, 0x7f,
    0xff, 0xe, 0xff, 0x50, 0x7, 0xff, 0xf0, 0xef,
    0xf7, 0x0, 0xaf, 0xfe, 0xe, 0xff, 0xf8, 0x9f,
    0xff, 0xb0, 0xef, 0xff, 0xff, 0xff, 0xf4, 0xe,
    0xff, 0x6b, 0xff, 0xd5, 0x0,

    /* U+0063 "c" */
    0x0, 0x5b, 0xef, 0xfd, 0x10, 0x7f, 0xff, 0xff,
    0xf2, 0xf, 0xff, 0xfd, 0xce, 0x24, 0xff, 0xf7,
    0x0, 0x0, 0x5f, 0xff, 0x20, 0x0, 0x5, 0xff,
    0xf2, 0x0, 0x0, 0x4f, 0xff, 0x70, 0x0, 0x0,
    0xff, 0xff, 0xed, 0xe4, 0x7, 0xff, 0xff, 0xff,
    0x40, 0x5, 0xbe, 0xff, 0xd2,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0xd, 0xff, 0x80, 0x0, 0x0,
    0x0, 0xdf, 0xf8, 0x0, 0x0, 0x0, 0xd, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xdf, 0xf8, 0x0, 0x9e,
    0xfe, 0x7d, 0xff, 0x80, 0xaf, 0xff, 0xff, 0xff,
    0xf8, 0x1f, 0xff, 0xe8, 0xcf, 0xff, 0x84, 0xff,
    0xf4, 0x0, 0xef, 0xf8, 0x5f, 0xff, 0x10, 0xb,
    0xff, 0x86, 0xff, 0xf1, 0x0, 0xbf, 0xf8, 0x4f,
    0xff, 0x30, 0xd, 0xff, 0x82, 0xff, 0xfc, 0x69,
    0xff, 0xf8, 0xb, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x19, 0xef, 0xe8, 0xbf, 0xf8,

    /* U+0065 "e" */
    0x0, 0x5b, 0xef, 0xfc, 0x60, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0x70, 0xf, 0xff, 0xd8, 0xbf, 0xfe,
    0x4, 0xff, 0xf2, 0x23, 0xff, 0xf0, 0x5f, 0xff,
    0xff, 0xff, 0xff, 0x15, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x4f, 0xff, 0x52, 0x10, 0x1, 0x0, 0xff,
    0xff, 0xba, 0xbe, 0x90, 0x7, 0xff, 0xff, 0xff,
    0xf9, 0x0, 0x5, 0xce, 0xff, 0xda, 0x30,

    /* U+0066 "f" */
    0x0, 0x2a, 0xef, 0xf0, 0xd, 0xff, 0xff, 0x3,
    0xff, 0xfa, 0x60, 0x5f, 0xff, 0x0, 0xcf, 0xff,
    0xff, 0xac, 0xff, 0xff, 0xfa, 0x8c, 0xff, 0xfa,
    0x60, 0x6f, 0xff, 0x0, 0x6, 0xff, 0xf0, 0x0,
    0x6f, 0xff, 0x0, 0x6, 0xff, 0xf0, 0x0, 0x6f,
    0xff, 0x0, 0x6, 0xff, 0xf0, 0x0, 0x6f, 0xff,
    0x0,

    /* U+0067 "g" */
    0x0, 0x8e, 0xfe, 0xac, 0xff, 0xa0, 0x9f, 0xff,
    0xff, 0xff, 0xfa, 0x1f, 0xff, 0xe8, 0xaf, 0xff,
    0xa4, 0xff, 0xf4, 0x0, 0xcf, 0xfa, 0x5f, 0xff,
    0x10, 0x9, 0xff, 0xa5, 0xff, 0xf1, 0x0, 0x9f,
    0xfa, 0x4f, 0xff, 0x30, 0xb, 0xff, 0xa1, 0xff,
    0xfd, 0x68, 0xff, 0xfa, 0xa, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0x8, 0xef, 0xe9, 0xdf, 0xfa, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x4c, 0x98, 0x9e,
    0xff, 0xf3, 0x5, 0xff, 0xff, 0xff, 0xf9, 0x0,
    0x4e, 0xff, 0xfe, 0xa4, 0x0,

    /* U+0068 "h" */
    0xff, 0xf7, 0x0, 0x0, 0x0, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0xff, 0xf7, 0x0, 0x0, 0x0, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0xff, 0xf8, 0x9e, 0xfd,
    0x70, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff,
    0xcd, 0xff, 0xf9, 0xff, 0xf9, 0x0, 0xdf, 0xfa,
    0xff, 0xf7, 0x0, 0xcf, 0xfa, 0xff, 0xf7, 0x0,
    0xcf, 0xfa, 0xff, 0xf7, 0x0, 0xcf, 0xfa, 0xff,
    0xf7, 0x0, 0xcf, 0xfa, 0xff, 0xf7, 0x0, 0xcf,
    0xfa, 0xff, 0xf7, 0x0, 0xcf, 0xfa,

    /* U+0069 "i" */
    0xd, 0xff, 0x42, 0xff, 0xf8, 0x1f, 0xff, 0x70,
    0x47, 0x60, 0xf, 0xff, 0x60, 0xff, 0xf6, 0xf,
    0xff, 0x60, 0xff, 0xf6, 0xf, 0xff, 0x60, 0xff,
    0xf6, 0xf, 0xff, 0x60, 0xff, 0xf6, 0xf, 0xff,
    0x60, 0xff, 0xf6,

    /* U+006A "j" */
    0x0, 0xdf, 0xf4, 0x2, 0xff, 0xf8, 0x1, 0xff,
    0xf7, 0x0, 0x47, 0x60, 0x0, 0xff, 0xf6, 0x0,
    0xff, 0xf6, 0x0, 0xff, 0xf6, 0x0, 0xff, 0xf6,
    0x0, 0xff, 0xf6, 0x0, 0xff, 0xf6, 0x0, 0xff,
    0xf6, 0x0, 0xff, 0xf6, 0x0, 0xff, 0xf6, 0x0,
    0xff, 0xf6, 0x0, 0xff, 0xf6, 0x6a, 0xff, 0xf4,
    0xbf, 0xff, 0xe0, 0xaf, 0xea, 0x20,

    /* U+006B "k" */
    0xff, 0xf7, 0x0, 0x0, 0x0, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0xff, 0xf7, 0x0, 0x0, 0x0, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0xff, 0xf7, 0x5, 0xff,
    0xf7, 0xff, 0xf7, 0xd, 0xff, 0xd0, 0xff, 0xf7,
    0x7f, 0xff, 0x30, 0xff, 0xfc, 0xff, 0xf9, 0x0,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0xff,
    0xf5, 0x0, 0xff, 0xf8, 0xdf, 0xfd, 0x0, 0xff,
    0xf7, 0x6f, 0xff, 0x70, 0xff, 0xf7, 0xe, 0xff,
    0xf1, 0xff, 0xf7, 0x6, 0xff, 0xf9,

    /* U+006C "l" */
    0xff, 0xf7, 0xf, 0xff, 0x70, 0xff, 0xf7, 0xf,
    0xff, 0x70, 0xff, 0xf7, 0xf, 0xff, 0x70, 0xff,
    0xf7, 0xf, 0xff, 0x70, 0xff, 0xf7, 0xf, 0xff,
    0x70, 0xff, 0xf7, 0xe, 0xff, 0xe6, 0xbf, 0xff,
    0x92, 0xbf, 0xf8,

    /* U+006D "m" */
    0xff, 0xf8, 0xae, 0xfd, 0x45, 0xdf, 0xeb, 0x20,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0xff, 0xff, 0xce, 0xff, 0xff, 0xce, 0xff, 0xf2,
    0xff, 0xf9, 0x3, 0xff, 0xf7, 0x4, 0xff, 0xf3,
    0xff, 0xf7, 0x1, 0xff, 0xf5, 0x2, 0xff, 0xf4,
    0xff, 0xf7, 0x1, 0xff, 0xf5, 0x2, 0xff, 0xf4,
    0xff, 0xf7, 0x1, 0xff, 0xf5, 0x2, 0xff, 0xf4,
    0xff, 0xf7, 0x1, 0xff, 0xf5, 0x2, 0xff, 0xf4,
    0xff, 0xf7, 0x1, 0xff, 0xf5, 0x2, 0xff, 0xf4,
    0xff, 0xf7, 0x1, 0xff, 0xf5, 0x2, 0xff, 0xf4,

    /* U+006E "n" */
    0xff, 0xf8, 0x9e, 0xfd, 0x70, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0xff, 0xff, 0xcd, 0xff, 0xf9, 0xff,
    0xf9, 0x0, 0xdf, 0xfa, 0xff, 0xf7, 0x0, 0xcf,
    0xfa, 0xff, 0xf7, 0x0, 0xcf, 0xfa, 0xff, 0xf7,
    0x0, 0xcf, 0xfa, 0xff, 0xf7, 0x0, 0xcf, 0xfa,
    0xff, 0xf7, 0x0, 0xcf, 0xfa, 0xff, 0xf7, 0x0,
    0xcf, 0xfa,

    /* U+006F "o" */
    0x0, 0x5c, 0xef, 0xec, 0x70, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0x90, 0xf, 0xff, 0xd8, 0xcf, 0xff,
    0x24, 0xff, 0xf3, 0x1, 0xff, 0xf6, 0x5f, 0xff,
    0x10, 0xf, 0xff, 0x85, 0xff, 0xf1, 0x0, 0xff,
    0xf8, 0x4f, 0xff, 0x30, 0x1f, 0xff, 0x60, 0xff,
    0xfd, 0x8c, 0xff, 0xf2, 0x7, 0xff, 0xff, 0xff,
    0xf9, 0x0, 0x5, 0xce, 0xfe, 0xc7, 0x0,

    /* U+0070 "p" */
    0xef, 0xf9, 0xae, 0xfd, 0x60, 0xe, 0xff, 0xff,
    0xff, 0xff, 0x50, 0xef, 0xff, 0x99, 0xff, 0xfb,
    0xe, 0xff, 0x80, 0xa, 0xff, 0xe0, 0xef, 0xf5,
    0x0, 0x7f, 0xff, 0xe, 0xff, 0x50, 0x7, 0xff,
    0xf0, 0xef, 0xf8, 0x0, 0xaf, 0xfe, 0xe, 0xff,
    0xf9, 0xaf, 0xff, 0xb0, 0xef, 0xff, 0xff, 0xff,
    0xf4, 0xe, 0xff, 0x9b, 0xff, 0xd5, 0x0, 0xef,
    0xf8, 0x0, 0x0, 0x0, 0xe, 0xff, 0x80, 0x0,
    0x0, 0x0, 0xef, 0xf8, 0x0, 0x0, 0x0, 0xe,
    0xff, 0x80, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0x9e, 0xfe, 0x7e, 0xff, 0x80, 0xaf, 0xff,
    0xff, 0xff, 0xf8, 0x1f, 0xff, 0xe8, 0xcf, 0xff,
    0x84, 0xff, 0xf4, 0x0, 0xef, 0xf8, 0x5f, 0xff,
    0x10, 0xb, 0xff, 0x86, 0xff, 0xf1, 0x0, 0xbf,
    0xf8, 0x4f, 0xff, 0x40, 0xd, 0xff, 0x82, 0xff,
    0xfe, 0x9b, 0xff, 0xf8, 0xb, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x19, 0xef, 0xe7, 0xef, 0xf8, 0x0,
    0x0, 0x0, 0xe, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xef, 0xf8, 0x0, 0x0, 0x0, 0xe, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xef, 0xf8,

    /* U+0072 "r" */
    0xef, 0xf8, 0x8e, 0x4e, 0xff, 0xdf, 0xf4, 0xef,
    0xff, 0xff, 0x3e, 0xff, 0xf4, 0x0, 0xef, 0xf9,
    0x0, 0xe, 0xff, 0x80, 0x0, 0xef, 0xf8, 0x0,
    0xe, 0xff, 0x80, 0x0, 0xef, 0xf8, 0x0, 0xe,
    0xff, 0x80, 0x0,

    /* U+0073 "s" */
    0x1, 0x9e, 0xff, 0xea, 0x0, 0xdf, 0xff, 0xff,
    0xd0, 0x1f, 0xff, 0xa8, 0xaa, 0x2, 0xff, 0xf9,
    0x40, 0x0, 0xd, 0xff, 0xff, 0xe5, 0x0, 0x18,
    0xdf, 0xff, 0xf0, 0x0, 0x0, 0x4f, 0xff, 0x24,
    0xfc, 0xab, 0xff, 0xf1, 0x4f, 0xff, 0xff, 0xfc,
    0x2, 0xdf, 0xff, 0xd8, 0x10,

    /* U+0074 "t" */
    0xa, 0xff, 0xc0, 0x0, 0xaf, 0xfc, 0x0, 0xcf,
    0xff, 0xff, 0x8c, 0xff, 0xff, 0xf8, 0x8e, 0xff,
    0xea, 0x50, 0xaf, 0xfc, 0x0, 0xa, 0xff, 0xc0,
    0x0, 0xaf, 0xfc, 0x0, 0xa, 0xff, 0xc0, 0x0,
    0x9f, 0xff, 0xa2, 0x5, 0xff, 0xff, 0x30, 0x7,
    0xef, 0xf3,

    /* U+0075 "u" */
    0xff, 0xf6, 0x0, 0xef, 0xf8, 0xff, 0xf6, 0x0,
    0xef, 0xf8, 0xff, 0xf6, 0x0, 0xef, 0xf8, 0xff,
    0xf6, 0x0, 0xef, 0xf8, 0xff, 0xf6, 0x0, 0xef,
    0xf8, 0xff, 0xf6, 0x0, 0xef, 0xf8, 0xff, 0xf7,
    0x0, 0xef, 0xf8, 0xef, 0xfe, 0x9b, 0xff, 0xf8,
    0x9f, 0xff, 0xff, 0xff, 0xf8, 0x1a, 0xef, 0xe8,
    0xbf, 0xf8,

    /* U+0076 "v" */
    0xdf, 0xff, 0x0, 0xb, 0xff, 0xe0, 0x7f, 0xff,
    0x40, 0xf, 0xff, 0x90, 0x2f, 0xff, 0x80, 0x4f,
    0xff, 0x40, 0xc, 0xff, 0xd0, 0x8f, 0xfe, 0x0,
    0x7, 0xff, 0xf1, 0xdf, 0xf9, 0x0, 0x1, 0xff,
    0xf7, 0xff, 0xf3, 0x0, 0x0, 0xcf, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0x20, 0x0, 0x0, 0xb,
    0xff, 0xfd, 0x0, 0x0,

    /* U+0077 "w" */
    0xaf, 0xff, 0x0, 0xbf, 0xff, 0x30, 0x8f, 0xff,
    0x15, 0xff, 0xf3, 0xe, 0xff, 0xf6, 0xb, 0xff,
    0xc0, 0x1f, 0xff, 0x61, 0xff, 0xff, 0x90, 0xef,
    0xf8, 0x0, 0xdf, 0xf8, 0x4f, 0xff, 0xfc, 0x1f,
    0xff, 0x40, 0x9, 0xff, 0xb7, 0xff, 0xcf, 0xf4,
    0xff, 0xf0, 0x0, 0x5f, 0xfe, 0xaf, 0xe8, 0xff,
    0x9f, 0xfb, 0x0, 0x1, 0xff, 0xff, 0xfc, 0x5f,
    0xff, 0xff, 0x70, 0x0, 0xc, 0xff, 0xff, 0x92,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x8f, 0xff, 0xf6,
    0xf, 0xff, 0xfe, 0x0, 0x0, 0x4, 0xff, 0xff,
    0x30, 0xdf, 0xff, 0xa0, 0x0,

    /* U+0078 "x" */
    0x5f, 0xff, 0xa0, 0xd, 0xff, 0xf2, 0xb, 0xff,
    0xf2, 0x6f, 0xff, 0x70, 0x1, 0xff, 0xfb, 0xef,
    0xfd, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xf3, 0x0,
    0x0, 0xc, 0xff, 0xff, 0x80, 0x0, 0x0, 0xe,
    0xff, 0xff, 0xb0, 0x0, 0x0, 0x9f, 0xff, 0xff,
    0xf5, 0x0, 0x4, 0xff, 0xf9, 0xdf, 0xfe, 0x10,
    0xd, 0xff, 0xf1, 0x4f, 0xff, 0xa0, 0x9f, 0xff,
    0x70, 0xb, 0xff, 0xf4,

    /* U+0079 "y" */
    0xcf, 0xff, 0x0, 0xb, 0xff, 0xe0, 0x7f, 0xff,
    0x30, 0xf, 0xff, 0x90, 0x1f, 0xff, 0x80, 0x4f,
    0xff, 0x40, 0xb, 0xff, 0xc0, 0x8f, 0xfe, 0x0,
    0x5, 0xff, 0xf1, 0xcf, 0xf9, 0x0, 0x0, 0xff,
    0xf6, 0xff, 0xf3, 0x0, 0x0, 0xaf, 0xfe, 0xff,
    0xd0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0x80, 0x0,
    0x0, 0xe, 0xff, 0xff, 0x20, 0x0, 0x0, 0x8,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x19, 0xff, 0xf6,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0x30, 0x0, 0x0, 0x8, 0xfd,
    0x92, 0x0, 0x0, 0x0,

    /* U+007A "z" */
    0xc, 0xff, 0xff, 0xff, 0xf3, 0xc, 0xff, 0xff,
    0xff, 0xf3, 0x9, 0xcc, 0xdf, 0xff, 0xf2, 0x0,
    0x0, 0xbf, 0xff, 0x80, 0x0, 0xa, 0xff, 0xf9,
    0x0, 0x0, 0x9f, 0xff, 0xa0, 0x0, 0x8, 0xff,
    0xfb, 0x0, 0x0, 0xf, 0xff, 0xfd, 0xdd, 0xd8,
    0xf, 0xff, 0xff, 0xff, 0xfa, 0xf, 0xff, 0xff,
    0xff, 0xfa
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 221, .box_w = 15, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 193, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 175, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 209, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 163, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 201, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 216, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 95, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 94, .box_w = 7, .box_h = 17, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 680, .adv_w = 199, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 157, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 265, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 223, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 216, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 190, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 216, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1254, .adv_w = 195, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1332, .adv_w = 169, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1397, .adv_w = 164, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1462, .adv_w = 217, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1540, .adv_w = 219, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1631, .adv_w = 285, .box_w = 18, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1748, .adv_w = 211, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 206, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1924, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2002, .adv_w = 103, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2056, .adv_w = 145, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2128, .adv_w = 103, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2182, .adv_w = 173, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2214, .adv_w = 144, .box_w = 9, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2228, .adv_w = 144, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 2237, .adv_w = 179, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2292, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2369, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2414, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2491, .adv_w = 170, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2546, .adv_w = 105, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2595, .adv_w = 187, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2672, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2742, .adv_w = 86, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2777, .adv_w = 86, .box_w = 6, .box_h = 18, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2831, .adv_w = 175, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2901, .adv_w = 91, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2936, .adv_w = 276, .box_w = 16, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3016, .adv_w = 187, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3066, .adv_w = 179, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3121, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3198, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3275, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3310, .adv_w = 143, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3355, .adv_w = 107, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3397, .adv_w = 186, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3447, .adv_w = 179, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3507, .adv_w = 262, .box_w = 17, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3592, .adv_w = 188, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3652, .adv_w = 179, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3736, .adv_w = 167, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 65, .range_length = 58, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 3,
    1, 7,
    1, 15,
    1, 17,
    1, 20,
    1, 22,
    1, 23,
    1, 25,
    1, 38,
    1, 44,
    1, 52,
    1, 54,
    1, 57,
    2, 20,
    2, 22,
    2, 24,
    2, 25,
    4, 1,
    4, 20,
    4, 22,
    4, 24,
    4, 25,
    4, 26,
    6, 1,
    6, 33,
    6, 40,
    6, 43,
    7, 22,
    7, 25,
    10, 10,
    11, 3,
    11, 7,
    11, 15,
    11, 17,
    11, 21,
    11, 25,
    11, 35,
    11, 36,
    11, 37,
    11, 39,
    11, 44,
    11, 47,
    11, 49,
    11, 52,
    11, 53,
    11, 54,
    11, 55,
    11, 57,
    12, 1,
    12, 3,
    12, 7,
    12, 15,
    12, 17,
    12, 20,
    12, 22,
    12, 23,
    12, 25,
    12, 54,
    12, 55,
    12, 57,
    15, 1,
    15, 20,
    15, 22,
    15, 24,
    15, 25,
    15, 26,
    16, 1,
    16, 24,
    16, 25,
    16, 26,
    16, 33,
    17, 1,
    17, 10,
    17, 20,
    17, 22,
    17, 24,
    17, 25,
    17, 26,
    18, 3,
    18, 7,
    18, 15,
    18, 17,
    18, 20,
    18, 21,
    18, 22,
    18, 23,
    18, 24,
    18, 25,
    18, 35,
    18, 36,
    18, 37,
    18, 39,
    18, 47,
    18, 49,
    18, 52,
    18, 54,
    18, 56,
    18, 57,
    19, 19,
    19, 20,
    19, 22,
    19, 23,
    19, 25,
    19, 52,
    19, 54,
    19, 55,
    19, 56,
    19, 57,
    20, 1,
    20, 3,
    20, 7,
    20, 15,
    20, 17,
    20, 19,
    20, 33,
    20, 35,
    20, 36,
    20, 37,
    20, 39,
    20, 41,
    20, 45,
    20, 46,
    20, 47,
    20, 49,
    20, 50,
    20, 51,
    20, 52,
    20, 53,
    20, 58,
    21, 56,
    22, 1,
    22, 3,
    22, 7,
    22, 15,
    22, 17,
    22, 19,
    22, 33,
    22, 35,
    22, 36,
    22, 37,
    22, 39,
    22, 40,
    22, 43,
    22, 47,
    22, 49,
    22, 51,
    22, 54,
    22, 57,
    23, 1,
    23, 33,
    23, 35,
    23, 36,
    23, 37,
    23, 39,
    23, 47,
    23, 49,
    23, 51,
    24, 3,
    24, 7,
    24, 15,
    24, 17,
    24, 21,
    24, 25,
    24, 35,
    24, 36,
    24, 37,
    24, 39,
    24, 44,
    24, 47,
    24, 49,
    24, 52,
    24, 53,
    24, 54,
    24, 55,
    24, 57,
    25, 1,
    25, 3,
    25, 7,
    25, 15,
    25, 17,
    25, 19,
    25, 33,
    25, 35,
    25, 36,
    25, 37,
    25, 38,
    25, 39,
    25, 40,
    25, 43,
    25, 45,
    25, 46,
    25, 47,
    25, 48,
    25, 49,
    25, 50,
    25, 51,
    25, 52,
    25, 53,
    25, 54,
    25, 56,
    25, 57,
    25, 58,
    26, 3,
    26, 7,
    26, 15,
    26, 17,
    27, 42,
    33, 20,
    33, 22,
    33, 25,
    33, 54,
    33, 55,
    33, 57,
    34, 20,
    34, 22,
    34, 23,
    34, 24,
    34, 25,
    34, 54,
    34, 56,
    34, 57,
    37, 20,
    37, 25,
    37, 42,
    38, 20,
    38, 22,
    38, 23,
    38, 24,
    38, 25,
    38, 29,
    38, 33,
    38, 38,
    38, 40,
    38, 43,
    38, 52,
    38, 54,
    38, 57,
    40, 54,
    40, 55,
    40, 57,
    41, 20,
    41, 29,
    42, 20,
    43, 21,
    43, 23,
    43, 33,
    43, 35,
    43, 36,
    43, 37,
    43, 39,
    43, 44,
    43, 47,
    43, 49,
    43, 53,
    44, 38,
    44, 52,
    45, 54,
    45, 55,
    45, 57,
    46, 54,
    46, 55,
    46, 57,
    47, 20,
    47, 22,
    47, 23,
    47, 24,
    47, 25,
    47, 54,
    47, 56,
    47, 57,
    48, 20,
    48, 22,
    48, 23,
    48, 24,
    48, 25,
    48, 54,
    48, 56,
    48, 57,
    49, 42,
    50, 33,
    50, 38,
    50, 52,
    50, 54,
    50, 57,
    51, 20,
    51, 22,
    51, 23,
    51, 25,
    51, 56,
    52, 38,
    52, 52,
    53, 20,
    54, 33,
    54, 35,
    54, 36,
    54, 37,
    54, 47,
    54, 49,
    55, 33,
    56, 21,
    56, 23,
    56, 33,
    56, 35,
    56, 36,
    56, 37,
    56, 39,
    56, 44,
    56, 47,
    56, 49,
    56, 53,
    57, 33,
    57, 35,
    57, 36,
    57, 37,
    57, 47,
    57, 49,
    58, 20
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -3, -3, -3, -3, -23, -22, -3, -29,
    -6, -3, -6, -6, -6, -9, -6, -6,
    -12, -6, -10, -9, -9, -12, -6, -12,
    -12, 6, 6, -9, -14, 12, -9, -9,
    -9, -9, -6, -12, -6, -6, -6, -6,
    -6, -6, -6, -6, -9, -17, -12, -17,
    6, -6, -6, -6, -6, -12, -17, -6,
    -29, -17, -12, -17, -6, -10, -9, -9,
    -12, -6, -17, -14, -6, -6, -17, -6,
    12, -10, -9, -9, -12, -6, -3, -3,
    -3, -3, -12, -3, -10, -6, -1, -17,
    -6, -6, -6, -6, -6, -6, -6, -3,
    6, -3, -6, -12, -12, -6, -12, -6,
    -6, -3, -6, -6, -23, -6, -6, -6,
    -6, -6, -23, -12, -12, -12, -12, -6,
    -12, -12, -12, -12, -12, -17, 6, -12,
    -12, -6, -23, -9, -9, -9, -9, -6,
    -23, -12, -12, -12, -12, 9, 9, -12,
    -12, -12, -9, -9, -10, -12, -6, -6,
    -6, -6, -6, -6, -6, -9, -9, -9,
    -9, -6, -12, -6, -6, -6, -6, -6,
    -6, -6, -6, -9, -17, -12, -17, -29,
    -12, -12, -12, -12, -6, -35, -17, -17,
    -17, -12, -17, 6, 6, -17, -17, -17,
    -12, -17, -17, -23, -6, -12, -12, -17,
    -12, -17, -6, -6, -6, -6, 23, -17,
    -12, -29, -6, -6, -6, -12, -17, -6,
    -6, -17, -3, -6, -3, -6, -12, 6,
    12, 12, 12, 12, 12, 17, -3, 9,
    3, 3, 9, 3, 3, -6, -3, -6,
    -6, 23, -6, -6, -6, -6, -6, -6,
    -6, -3, -6, -6, -6, -6, -6, -3,
    -6, -3, -6, -6, -3, -6, -12, -17,
    -6, -6, -17, -3, -6, -3, -12, -17,
    -6, -6, -17, -3, -6, -3, 6, -10,
    6, 6, 3, 3, -12, -12, -6, -17,
    -3, 6, 3, -12, -12, -3, -3, -3,
    -3, -3, -12, -6, -6, -6, -6, -6,
    -6, -3, -6, -6, -6, -6, -12, -3,
    -3, -3, -3, -3, -12
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 317,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t alibaba_font_18 = {
#else
lv_font_t alibaba_font_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ALIBABA_FONT_18*/
