<<<<<<<< HEAD:keyboards/keychron/k1_pro/k1_pro.h
/* Copyright 2023 @ Keychron (https://www.keychron.com)
========
/* Copyright 2022 Yiancar-Designs
>>>>>>>> master:keyboards/crypt_macro/keymaps/via/keymap.c
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT( /* Base */
    KC_VOLU, KC_VOLD, KC_MPLY,
             MO(1)           ),

<<<<<<<< HEAD:keyboards/keychron/k1_pro/k1_pro.h
#include "quantum.h"
#ifdef VIA_ENABLE
#include "via.h"
#endif
========
[1] = LAYOUT( /* FN */
    LCTL(KC_X), LCTL(KC_C), LCTL(KC_V),
                KC_TRNS               ),
>>>>>>>> master:keyboards/crypt_macro/keymaps/via/keymap.c

[2] = LAYOUT( /* Empty for dynamic keymaps */
    KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS         ),

<<<<<<<< HEAD:keyboards/keychron/k1_pro/k1_pro.h
#ifdef VIA_ENABLE
#define USER_START  USER00
#else
#define USER_START  SAFE_RANGE
#endif

// clang-format off
enum {
    KC_LOPTN = USER_START,
    KC_ROPTN,
    KC_LCMMD,
    KC_RCMMD,
    KC_MCTL,
    KC_LNPD,
    KC_TASK,
    KC_FILE,
    KC_SNAP,
    KC_CTANA,
    KC_SIRI,
#ifdef KC_BLUETOOTH_ENABLE
    BT_HST1,
    BT_HST2,
    BT_HST3,
#endif
    BAT_LVL,
    NEW_SAFE_RANGE,
========
[3] = LAYOUT( /* Empty for dynamic keymaps */
    KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS         )
>>>>>>>> master:keyboards/crypt_macro/keymaps/via/keymap.c
};
