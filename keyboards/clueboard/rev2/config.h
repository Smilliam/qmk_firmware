#ifndef REV2_CONFIG_H
#define REV2_CONFIG_H

#include "../config.h"

#define PRODUCT_ID      0x2320
#define DEVICE_VER      0x0001

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// ROWS: Top to bottom, COLS: Left to right
/* Row pin configuration
* row: 0  1  2  3  4  5  6  7  8  9
* pin: B2 C7 C6 B6 B5 B0 B3 D5 D3 D2
*/
#define MATRIX_ROW_PINS { B2, C7, C6, B6, B5, B0, B3, D5, D3, D2 }
/* Column pin configuration
 * col: 0  1  2  3  4  5  6  7
 * pin: F0 F1 F4 F5 F6 F7 E6 B1
 */
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, E6, B1 }
#define UNUSED_PINS

 /* Backlight configuration
 */
#define BACKLIGHT_LEVELS 1

/* Underlight configuration
 */
#define ws2812_PORTREG PORTD
#define ws2812_DDRREG DDRD
#define ws2812_pin 7
#define RGBLED_NUM 14     // Number of LEDs
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#endif