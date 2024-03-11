/* Copyright 2021 KnoblesseOblige
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
    /* Base */
    [0] = LAYOUT_tkl_f13_ansi_split_bs_rshift(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,              KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,             KC_DEL,  KC_END,  KC_PGDN,
        MO(2) ,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT ,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(1)  ,                      KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_MENU, KC_RALT, KC_RGUI, KC_RCTL,             KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_tkl_f13_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, _______,
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_DEL , KC_DEL ,    _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, KC_UP  , KC_INS , _______,             _______, _______, _______,
        _______, _______, _______, _______, _______, KC_MPLY, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_END , KC_PGDN, KC_DOWN,          _______, _______,                      _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______,             _______, _______, _______
    ),
    [2] = LAYOUT_tkl_f13_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, _______,
        _______, C(KC_1), C(KC_2), C(KC_3), C(KC_4), C(KC_5), C(KC_6), C(KC_7), C(KC_8), C(KC_9), C(KC_0), _______, _______,C(KC_BSPC),C(KC_BSPC),_______, _______, _______,
        KC_CAPS, _______, C(KC_W), KC_END , C(KC_I), _______, C(KC_V), _______, _______,C(KC_ENT),KC_UP  , _______, _______, _______,             _______, _______, _______,
        _______, KC_HOME, C(KC_F), KC_DEL , KC_RGHT, _______, KC_BSPC, C(KC_J), C(KC_L), KC_F14 , _______, _______,          _______,
        _______, C(KC_Z), _______, C(KC_C), KC_PGDN, KC_LEFT, KC_DOWN, KC_ENT , _______,C(KC_DOT),C(KC_Z),          _______, _______,                      _______,
        _______, _______, MO(3)  ,                            C(KC_SPC),                          _______, _______, _______, _______,             _______, _______, _______
    ),
    [3] = LAYOUT_tkl_f13_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,
        _______, _______,C(KC_INS),_______, _______, _______, _______, _______, _______, _______,A(KC_UP), _______, _______, _______,             _______, _______, _______,
        KC_LCTL, _______, _______,C(KC_DEL),C(KC_RGHT),_______,C(KC_BSPC),_______,_______,_______,_______, _______,          _______,
        _______, _______, _______, _______, KC_PGUP,C(KC_LEFT),A(KC_DOWN),_______,C(KC_HOME),C(KC_END),_______,     _______, _______,                      _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______,             _______, _______, _______
    )
};
