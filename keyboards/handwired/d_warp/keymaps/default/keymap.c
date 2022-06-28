#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1
#define _LOWER 2


#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define CTL_SPC CTL_T(KC_SPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define RAISE TO(_RAISE)
#define LOWER TO(_BASE)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2
#define KC_MB3 KC_MS_BTN3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐                       ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │                       │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
     * ├───┼───┼───┼───┼───┼───┤                       ├───┼───┼───┼───┼───┼───┤
     * │TAB│ ' │ , │ . │ P │ Y │                       │ F │ G │ C │ R │ L │ } │
     * ├───┼───┼───┼───┼───┼───┤                       ├───┼───┼───┼───┼───┼───┤
     * │ * │ A │ O │ E │ U │ I │                       │ D │ H │ T │ N │ S │ ' │
     * ├───┼───┼───┼───┼───┼───┤                       ├───┼───┼───┼───┼───┼───┤
     * │ { │ ; │ Q │ J │ K │ X │                       │ B │ M │ W │ V │ Z │ } │
     * └───┴───┴───┴───┴───┴───┘    ┌────┐   ┌────┐    └───┴───┴───┴───┴───┴───┘
     *                         ┌────┤Col5│   │Col6├────┐
     *                         │Col4├────┤   ├────┤Col7│
     *                         │    │Col2│   │Col9│    │
     *                         └────┼────┤   ├────┼────┘
     *                              │Col3│   │Col8│
     *                              └────┘   └────┘
     */
    [_BASE] = LAYOUT_d_warp( \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL, \
        KC_MINS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
        KC_PAST, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
        KC_LBRC, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC, \
                          KC_DEL, CTL_SPC,  SFT_ENT, KC_BSPC,           RAISE,   SFT_ENT, CTL_SPC, KC_ESC \
    ),				/*
				 [_BASE] = LAYOUT_d_warp( \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS, \
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,              KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_RBRC, \
        KC_PAST, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,              KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_QUOT, \
        KC_LBRC, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,              KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RBRC, \
                          KC_DEL, CTL_SPC,  SFT_ENT, KC_BSPC,           RAISE,   SFT_ENT, CTL_SPC, KC_ESC \
    ),
				*/
    [_RAISE] = LAYOUT_d_warp( \
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  \
        KC_TAB , _______, _______, KC_MU,   _______, KC_PSCR,           _______, _______, KC_UP,   _______,  _______, _______, \
        _______, KC_LGUI, KC_ML,   KC_MD,   KC_MR,   _______,           _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, \
        KC_MB2,  _______, KC_COMM, KC_DOT,  KC_MINS, KC_EQL,            KC_LBRC, KC_RBRC, KC_QUES, KC_PIPE,  KC_SLSH, KC_BSLS, \
                          KC_MB3,  KC_WH_D, KC_MB1,  KC_WH_U,           _______, KC_RALT, LOWER,   KC_RSFT \
    )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
			 case SFT_T(KC_ESC):
    case CTL_T(KC_SPC):
				case SFT_T(KC_ENT):
      return -1;
    default:
      return TAPPING_TERM;
  }
}