#include QMK_KEYBOARD_H
//#include ../../d_warp.h

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐                       ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │                       │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
     * ├───┼───┼───┼───┼───┼───┤                       ├───┼───┼───┼───┼───┼───┤
     * │ T │ Q │ W │ E │ R │ T │                       │ Y │ U │ I │ O │ P │ \ │
     * ├───┼───┼───┼───┼───┼───┤                       ├───┼───┼───┼───┼───┼───┤
     * │Ese│ A │ S │ D │ F │ G │                       │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤                       ├───┼───┼───┼───┼───┼───┤
     * │Sh │ Z │ X │ C │ V │ B │                       │ N │ M │ , │ . │ / │ ft│
     * └───┴───┴───┴───┴───┴───┘     ┌───┐   ┌───┐     └───┴───┴───┴───┴───┴───┘
     *                           ┌───┤ V │   │ A ├───┐     
     *                           │   ├───┤   ├───┤   │ 
     *                           │   │PgU│   │   │   │
     *                           └───┼───┤   ├───┼───┘
     *                               │Del│   │   │   
     *                               └───┘   └───┘
     */
    [0] = LAYOUT_d_warp(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_PAST, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LBRC, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                          KC_1,    KC_2,    KC_3,    KC_4,


        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
        KC_6,    KC_7,    KC_8,    KC_9
    )
};
