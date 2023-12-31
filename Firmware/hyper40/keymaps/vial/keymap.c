/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( \
         KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,     \
    \
    KC_F1,   KC_F2,   KC_F3,     KC_ESCAPE,KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPACE,     KC_KP_7, KC_KP_8, KC_KP_9,\
    KC_F4,   KC_F5,   KC_F6,      KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCOLON,LT(2,KC_ENTER),KC_KP_4, KC_KP_5, KC_KP_6,\
    KC_F7,   KC_F8,   KC_F9,       KC_LSHIFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT, KC_UP, LT(1,KC_SLASH),KC_KP_1, KC_KP_2, KC_KP_3,\
    KC_F10,  KC_F11,  KC_F12,    KC_LCTRL, KC_LGUI, KC_LALT,                          KC_SPACE,                       KC_LEFT, KC_DOWN, KC_RIGHT,   KC_KP_0,KC_KP_DOT,KC_KP_ENTER \
    ),

    [1] = LAYOUT( \
         RGB_MOD,     RGB_RMOD,      RGB_HUI,     RGB_HUD,       RGB_SAI,     RGB_SAD,       RGB_VAI,     RGB_VAD,       RGB_SPI,     RGB_SPD,       KC_TRNS,     KC_TRNS,     \
    \
    RGB_TOG, KC_TRNS, KC_TRNS,   KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELETE,      KC_NUMLOCK,KC_TRNS,KC_KP_SLASH,
    KC_TRNS, KC_TRNS, KC_TRNS,  QK_BOOT, KC_QUOTE, KC_BSLASH, KC_MINUS, KC_EQUAL, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_LBRACKET, KC_RBRACKET, KC_TRNS,KC_TRNS, KC_TRNS, KC_KP_ASTERISK,\
    KC_TRNS, KC_TRNS, KC_TRNS,     KC_LSHIFT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_KP_MINUS,\
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_LCTRL,   KC_TRNS,   KC_LALT,                      KC_TRNS,                         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_KP_PLUS \
    ),

    [2] = LAYOUT( \
         KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,     \
    LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),      KC_TRNS,  KC_F1, KC_F2, KC_F3, KC_F4,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,          KC_PSCREEN,KC_SCROLLLOCK,KC_PAUSE,\
    LSFT(KC_4),LSFT(KC_5),LSFT(KC_6),      KC_TRNS,  KC_F5, KC_F6, KC_F7, KC_F8,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,          KC_INSERT,    KC_HOME,    KC_PGUP,\
    LSFT(KC_7),LSFT(KC_8),LSFT(KC_9),      KC_TRNS,  KC_F9,KC_F10,KC_F11,KC_F12,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_VOLU,KC_TRNS,          KC_DELETE,    KC_END,   KC_PGDOWN,\
    LSFT(KC_0),  KC_TRNS,   KC_TRNS,      KC_MPRV, KC_MPLY, KC_MNXT,                   KC_TRNS,                   KC_TRNS,KC_VOLD,KC_TRNS,          KC_TRNS,      KC_TRNS,    KC_TRNS \
    ),

    [3] = LAYOUT( \
         KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,     \
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,\
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,\
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,\
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,                      KC_TRNS,                         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS \
    ),

    [4] = LAYOUT( \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
    ),

    [5] = LAYOUT( \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
    ),

    [6] = LAYOUT( \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
    ),

    [7] = LAYOUT( \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
    )

};

