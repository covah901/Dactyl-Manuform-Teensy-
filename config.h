#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    covah901
#define PRODUCT         Dactyl Manuform
#define DESCRIPTION     "handwired dactyl manuform"

//#define MASTER_RIGHT // Comment this line for the left half firmware
#define MASTER_LEFT // Comment this line for the right half firmware

/* key matrix size rows are doubled up*/
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* key matrix pins */

#define MATRIX_ROW_PINS { D2, D3, D4, D5, D6 }
#define MATRIX_COL_PINS { D7, E0, E1, C0, C1, E7 }

#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS_RIGHT { D3, D2, D4, C6, D7, E6 }
#define UNUSED_PINS
#define USE_I2C
// #define SOFT_SERIAL_PIN D1
// COL2ROW or ROW2COL 
#define DIODE_DIRECTION COL2ROW

// Right encoder.
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { C7 }

#define ENCODERS_PAD_A_RIGHT { B2 }
#define ENCODERS_PAD_B_RIGHT { B6 }
#define ENCODER_RESOLUTION 4

#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 20
#define RGBLED_SPLIT { 10, 10 }
#define RGB_DI_PIN F1

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

//#define TAP_CODE_DELAY 10
#define TAPPING_TERM 5000
#define PERMISSIVE_HOLD

  
