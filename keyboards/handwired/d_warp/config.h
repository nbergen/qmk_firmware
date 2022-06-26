// Copyright 2022 diademed (@diademed)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

                                                            
#include "config_common.h"                                  
                                                            
/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    diademed
#define PRODUCT         dwarp
                                                            
/* key matrix size */                                       
// Rows are doubled-up                                      
#define MATRIX_ROWS 10                                      
#define MATRIX_COLS 6                                       
                                                            
// row-driven                                               
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }              
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }          
                                                            
/* COL2ROW or ROW2COL */                                    
#define DIODE_DIRECTION COL2ROW                             
                                                            
#define EE_HANDS

/* serial.c configuration for split keyboard */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define SPLIT_USB_DETECT
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_USB_TIMEOUT 2500