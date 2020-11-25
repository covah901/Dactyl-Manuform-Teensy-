#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    covah901
#define PRODUCT         Dactyl Manuform
#define DESCRIPTION     "handwired dactyl manuform"

// #define MASTER_RIGHT // Comment this line for the left half firmware
#define MASTER_LEFT // Comment this line for the right half firmware

/* key matrix size rows are doubled up*/
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* key matrix pins */
#ifdef MASTER_LEFT
#define MATRIX_ROW_PINS { D2, D3, D4, D5, D6 }
#define MATRIX_COL_PINS { D7, E0, E1, C0, C1, E7 }
#endif

#ifdef MASTER_RIGHT
#define MATRIX_ROW_PINS { F4, F5, F7, B1, B3 }
#define MATRIX_COL_PINS { D3, D2, D4, C6, D7, E6 }
#endif

#define MATRIX_ROW_PINS_RIGHT { F4, F5, F7, B1, B3 }
#define MATRIX_COL_PINS_RIGHT { D3, D2, D4, C6, D7, E6 }
#define UNUSED_PINS
#define USE_I2C
// #define SOFT_SERIAL_PIN D1
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// Right encoder.
#ifdef MASTER_LEFT
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { C7 }
#endif

#ifdef MASTER_RIGHT
#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }
#endif

#define ENCODERS_PAD_A_RIGHT { B2 }
#define ENCODERS_PAD_B_RIGHT { B6 }
#define ENCODER_RESOLUTION 4

#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 20
#define RGBLED_SPLIT { 10, 10 }
#define RGB_DI_PIN F1

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/*
#ifdef QWIIC_MICRO_OLED_ENABLE
#define I2C_ADDRESS_SA0_1 0x3C
#define LCDWIDTH      128
#define LCDHEIGHT     64
#endif
*/

/*
#ifdef MASTER_LEFT
//enable midi slider//
#define POT_ENABLE
#endif
*/
  
#endif
