<<<<<<<< HEAD:keyboards/keychron/bluetooth/factory_test.h
/* Copyright 2022 @ lokher (https://www.keychron.com)
========
/* Copyright 2022 TW59420 <https://github.com/TW59420>
>>>>>>>> master:keyboards/mwstudio/mw80/halconf.h
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

<<<<<<<< HEAD:keyboards/keychron/bluetooth/factory_test.h
#define FACTORY_RESET_CHECK process_record_factory_reset
#define FACTORY_RESET_TASK factory_reset_task

void process_record_factory_reset(uint16_t keycode, keyrecord_t *record);
void factory_reset_task(void);
void factory_test_rx(uint8_t *data, uint8_t length);
========
#define HAL_USE_PWM TRUE
// #define HAL_USE_PAL TRUE
// #define HAL_USE_GPT TRUE
// #define HAL_USE_I2C TRUE

#include_next <halconf.h>

>>>>>>>> master:keyboards/mwstudio/mw80/halconf.h
