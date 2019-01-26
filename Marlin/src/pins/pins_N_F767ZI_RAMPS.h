/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef STM32F7xx
  #error "Oops! Select an STM32F7 board in 'Tools > Board.'"
#endif

#define DEFAULT_MACHINE_NAME "NucleoF767ZIRamps"
#define BOARD_NAME "NucleoRamps"

//#define EEPROM_EMULATED_WITH_SRAM // Emulate the EEPROM using Backup SRAM
#define I2C_EEPROM

//
// Limit Switches
//
#if DISABLED(SENSORLESS_HOMING)
  #define X_MIN_PIN        19
  #define X_MAX_PIN        18
  #define Y_MIN_PIN        0
  #define Y_MAX_PIN        17
  #define Z_MIN_PIN        1
  #define Z_MAX_PIN        2
#else
  #define X_STOP_PIN       36
  #define Y_STOP_PIN       39
  #define Z_MIN_PIN        62
  #define Z_MAX_PIN        42
#endif

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  26   // EXT_D1
#endif

//
// Steppers
//
#define X_STEP_PIN         20
#define X_DIR_PIN          45
#define X_ENABLE_PIN       47
// #define X_CS_PIN           14

#define Y_STEP_PIN         23
#define Y_DIR_PIN          52
#define Y_ENABLE_PIN       54
// #define Y_CS_PIN           15

#define Z_STEP_PIN         36
#define Z_DIR_PIN          3
#define Z_ENABLE_PIN       37
//#define Z_CS_PIN           16

#define E0_STEP_PIN        35
#define E0_DIR_PIN         40
#define E0_ENABLE_PIN      5
//#define E0_CS_PIN          10

#define E1_STEP_PIN        16
#define E1_DIR_PIN         39
#define E1_ENABLE_PIN      38
//#define E0_CS_PIN         

//
// Temperature Sensors
//
#define TEMP_0_PIN         79   // Thermistor 0
#define TEMP_1_PIN         78   // Thermistor 1
#define TEMP_BED_PIN       85   // Thermistor 2

//
// Heaters / Fans
//
#define HEATER_0_PIN       10
#define HEATER_BED_PIN     32 
#define FAN_PIN            9  // FAN0

//
// Servos
//
#define SERVO0_PIN         26   // PWM_EXT1
#define SERVO1_PIN         27   // PWM_EXT2

#define SDSS               41   // SD card reader select

#define LED_PIN            73   // STATUS_LED

//
// LCD / Controller
//
#define SD_DETECT_PIN      42   // SD_CARD_DET
#define BEEPER_PIN         64   // LCD_BEEPER
// #define LCD_PINS_RS        49   // LCD_RS
// #define LCD_PINS_ENABLE    48   // LCD_EN
// #define LCD_PINS_D4        50   // LCD_D4
// #define LCD_PINS_D5        51   // LCD_D5
// #define LCD_PINS_D6        52   // LCD_D6
// #define LCD_PINS_D7        53   // LCD_D7
#define BTN_EN1            43   // BTN_EN1
#define BTN_EN2            44   // BTN_EN2
#define BTN_ENC            46   // BTN_ENC

//
// Timers
//

#define STEP_TIMER 2
