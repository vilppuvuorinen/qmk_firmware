/* Copyright 2021 Vilppu Vuorinen
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
#include "keymap_finnish.h"

enum kvb_layers {
  _QWERTY,
  _FN1,
  _FN2,
  _FN3
};

#define FN1 MO(_FN1)
#define FN2 MO(_FN2)
#define FN3 MO(_FN3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
    KC_ESC,  FI_1,    FI_2,    FI_3,    FI_4,    FI_5,    FI_6,    FI_7,    FI_8,    FI_9,    FI_0,    FI_PLUS, FI_ACUT, KC_BSPC,
    KC_TAB,  FI_Q,    FI_W,    FI_E,    FI_R,    FI_T,    FI_Y,    FI_U,    FI_I,    FI_O,    FI_P,    FI_ARNG, FI_DIAE,
    FN1,     FI_A,    FI_S,    FI_D,    FI_F,    FI_G,    FI_H,    FI_J,    FI_K,    FI_L,    FI_ODIA, FI_ADIA, FI_QUOT, KC_ENT,
    KC_LSFT, FI_LABK, FI_Z,    FI_X,    FI_C,    FI_V,    FI_B,    FI_N,    FI_M,    FI_COMM, FI_DOT,  FI_MINS, KC_UP,   KC_DEL,
    KC_LCTL, FN2,     KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_RCTL, FN2,     FN2,     FN1,     KC_LEFT, KC_DOWN, KC_RGHT
),
[_FN1] = LAYOUT(
    FI_SECT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_VOLD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_MUTE, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
    _______, FN3    , _______, _______, _______, _______, _______, FN3    , FN3    , _______, KC_HOME, KC_PGDN, KC_END
),
[_FN2] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    FN3    , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, FN3    , _______, _______, _______
),
[_FN3] = LAYOUT(
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};

