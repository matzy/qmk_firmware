// Copyright 2022 Andrew Kannan (@awkannan)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_60_tsangan_hhkb(
        KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     , KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  , KC_EQL   , KC_BSPC  , KC_BSPC ,
        KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     , KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_LBRC  , KC_RBRC  , KC_BSLS  ,
        MO(_FN2) , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     , KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,            KC_ENT   ,
        KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  ,            KC_RSFT  , MO(_FN1) ,
        KC_LCTL  , KC_LGUI  , KC_LALT  ,                                  KC_SPC   ,                                             KC_RALT  , KC_RGUI  , KC_RCTL
    ),

    [_FN1] = LAYOUT_60_tsangan_hhkb(
        KC_GRV   , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    , KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   , KC_F12   , KC_DEL   , KC_DEL  ,
        _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , KC_PSCR  , KC_SCRL  , KC_PAUS  , KC_UP    , KC_INS   , _______  ,
        _______  , _______  , _______  , _______  , _______  , KC_MPLY  , _______  , _______  , KC_HOME  , KC_PGUP  , KC_LEFT  , KC_RGHT  ,            _______  ,
        _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , KC_END   , KC_PGDN  , KC_DOWN  ,            _______  , _______  ,
        _______  , _______  , _______  ,                                  _______  ,                                             _______  , _______  , _______
    ),
    // like emacs binding.
    [_FN2] = LAYOUT_60_tsangan_hhkb(
        _______  , C(KC_1)  , C(KC_2)  , C(KC_3)  , C(KC_4)  , C(KC_5)  , C(KC_6)  , C(KC_7)  , C(KC_8)  , C(KC_9)  , C(KC_0)  , _______  , _______  ,C(KC_BSPC), C(KC_BSPC),
        KC_CAPS  , _______  , C(KC_W)  , KC_END   , C(KC_I)  , _______  , C(KC_V)  , _______  , _______  ,C(KC_ENT) , KC_UP    , _______  , _______  , _______  ,
        _______  , KC_HOME  , C(KC_F)  , KC_DEL   , KC_RGHT  , _______  , KC_BSPC  , C(KC_J)  , C(KC_L)  , KC_F14   , _______  , _______  ,            _______  ,
        _______  , C(KC_Z)  , _______  , C(KC_C)  , KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_ENT   , _______  , _______  , C(KC_Z)  ,            _______  , _______  ,
        QK_BOOT  , _______  ,MO(_FN3)  ,                                 C(KC_SPC) ,                                             _______  , _______  , _______
    ),
    // like emacs binding with ALT key.
    [_FN3] = LAYOUT_60_tsangan_hhkb(
        _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
        _______  , _______  ,C(KC_INS) , _______  , _______  , _______  , _______  , _______  , _______  , _______  , A(KC_UP) , _______  , _______  , _______  ,
        KC_LCTL  , _______  , _______  , C(KC_DEL),C(KC_RGHT), _______  ,C(KC_BSPC), _______  , _______  , _______  , _______  , _______  ,            _______  ,
        _______  , _______  , _______  , _______  , KC_PGUP  ,C(KC_LEFT),A(KC_DOWN), _______  ,C(KC_HOME),C(KC_END) , _______  ,            _______  , _______  ,
        _______  , _______  , _______  ,                                  _______  ,                                             _______  , _______  , _______
    )

};
