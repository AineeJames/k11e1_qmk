// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT_ortho_4x3(
        UG_NEXT, KC_7, KC_8, KC_9,
        KC_ENT,  KC_4, KC_5, KC_6,
        KC_0,    KC_1, KC_2, KC_3
    ),
    //clang-format on
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(UG_HUED, UG_HUEU)},
};
#endif
