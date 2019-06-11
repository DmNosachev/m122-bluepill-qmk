#include QMK_KEYBOARD_H
#include "action_layer.h"

#define BASE 0 // base layer
#define FN 1   // Fn layer

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  COMP_FR_QUOTES,
  COMP_NBSP_EM_DASH,
  COMP_NBSP,
  URL1                     // Ctrl + T; url; Enter (Browser: open URL in new tab)
};

//simple hotkeys
#define BR_P LCTL(KC_PGUP)  // Ctrl + PgUp (Browser: previous tab)
#define BR_N LCTL(KC_PGDN)  // Ctrl + PgDn (Browser: next tab)
#define OSLK LGUI(KC_L)      // GUI + L (OS lock)
#define CUT LCTL(KC_X)      // Ctrl + X (Cut)
#define CPY LCTL(KC_C)      // Ctrl + C (Copy)
#define PST LCTL(KC_V)      // Ctrl + V (Paste)

//macros aliases
#define MC1 COMP_FR_QUOTES
#define MC2 COMP_NBSP_EM_DASH
#define MC3 COMP_NBSP

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0 */
[BASE] = LAYOUT_m122(
     /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------------------------------------------------------------------------.
     * |                 |PrnSc|ScrLk|Pause|Lock |MyCmp| << |Play|Stop| >> |Mute|Vol-|Vol+|                                          |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |                 |  F1 |  F2 |  F3 |  F4 |  F5 |  F6|  F7|  F8|  F9| F10| F11| F12|                                          |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |Copy|Pste|     ` |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    Bspc|    INS|  HOME|  PGUP|    NLCK| PSLS| PAST| PMNS| |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |Cut |Caps|    Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|      |    DEL|   END|  PGDN|     P7|   P8|   P9| |PPLS| |
     * |--------------------------------------------------------------------       --------------------------------------------------|
     * |BT< |BT>+|    FN0  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| \ |Enter |	      |   UP |            P4|   P5|   P6| |  = | |
     * |---------------------------------------------------------------------------------------------------------------------------- |
     * |url1|Menu|    Shift|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| *   Shift|   LEFT| DOWN | RIGHT|     P1|   P2|   P3| |PENT| |
     * |----------------------------------------------------------------------------------------------------------------------|    | |
     * |Esc |GUI |    Ctrl|    |Alt |            Space          |Alt |     |Ctrl  |       |  FN0 |           | *    P0| PDOT| |  * | |
     * `-----------------------------------------------------------------------------------------------------------------------------'
     */   
                  KC_PSCR, KC_SLCK, KC_PAUS, OSLK, KC_MYCM, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,
                  KC_F1,   KC_F2,   KC_F3,   KC_F4,KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,

  CPY,   PST,     KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,    KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSLS,   KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,  KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
  CUT,   KC_CAPS, KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_NO,              KC_DEL,  KC_END,  KC_PGDN,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
  BR_P,  BR_N,    MO(FN),  KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,    KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_BSLS,  KC_ENT,                      KC_UP, 		     KC_P4,   KC_P5,   KC_P6,   KC_EQL, \
  URL1,  KC_MENU, KC_LSFT, KC_NUBS, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,    KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO,    KC_RSFT,            KC_LEFT, KC_DOWN, KC_RIGHT, KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
  KC_ESC,KC_LGUI, KC_LCTL,          KC_LALT,                        KC_SPC,                                    KC_RALT,            KC_RCTL,                     MO(FN),            KC_NO,   KC_P0,   KC_PDOT, KC_NO) ,
	
/* Layer 1 */

        /* 
	 * ,-----------------------------------------------------------------------------------------------------------------------------.
     * |                 |___  |___  |___  |___  |___ |___ |___ |___ |___ |___ |___ |___ |                                           |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |                 |___  |___  |___  |___  |___ |___ |___ |___ |___ |___ |___ |___ |                                           |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |___ |___ |  ___  |___|___|___|___|___|___|___|___|___|___|mc2|___|  del |   ___ |  ___ |  ___ |     ___ | ___ | ___ | ___ |  |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |___ |___ |  ___  |wh+|lmb|msu|rmb|___|___|___|up |___|pgu|___|___|      |   ___ |  ___ |  ___ |     ___ | ___ | ___ | ___ |  |
     * |--------------------------------------------------------------------       --------------------------------------------------|
     * |___ |___ |   FN  |wh-|msl|msd|msr|___|___|lft|dn |rgt|pgd|___|___| ___  |	    | ___  |            ___ | ___ | ___ | ___ |  |
     * |-----------------------------------------------------------------------------------------------------------------------------|
     * |___ |___ |  ___  |___|___|___|___|___|___|___|___|mc1|___|___| ______   |  ___  | ___  | ___  |     ___ | ___ | ___ | |___|  |
     * |----------------------------------------------------------------------------------------------------------------------|   |  |
     * |___ |___ |  ___  |   |___ |            mc3           |___ |      |___   |       |  FN  |                | ___ | ___ | |   |  |
     * `-----------------------------------------------------------------------------------------------------------------------------'
     */
[FN] = LAYOUT_m122(
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,

  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, MC2,     _______, _______, KC_DEL, _______, _______, _______,   _______, _______, _______, _______, \
  _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, KC_UP,   _______,  KC_PGUP, _______, _______, _______,         _______, _______, _______,   _______, _______, _______, _______, \
  _______, _______, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, _______, _______, _______,                  _______,            _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  MC1,     _______, _______, _______,         _______, _______, _______,   _______, _______, _______, _______, \
  _______, _______, _______,          _______,                         MC3,                                             _______,          _______,                  _______,            _______, _______, _______, _______) ,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case COMP_FR_QUOTES:
        if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_RALT));
          chThdSleepMicroseconds(500000);
          SEND_STRING("<<");
          SEND_STRING(SS_TAP(X_RALT));
          chThdSleepMicroseconds(500000);
          SEND_STRING(">>"SS_TAP(X_LEFT));
        }
        break;
      case COMP_NBSP_EM_DASH:
        if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_RALT));
          chThdSleepMicroseconds(500000);
          SEND_STRING("  ");
          SEND_STRING(SS_TAP(X_RALT));
          chThdSleepMicroseconds(500000);
          SEND_STRING("--- ");
        }
        break;
      case COMP_NBSP:
        if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_RALT));
          chThdSleepMicroseconds(500000);
          SEND_STRING("  ");
        }
        break;
      case URL1:
        if (record->event.pressed) {
          SEND_STRING(SS_LCTRL("t"));
          SEND_STRING("https://example.com");
          SEND_STRING(SS_TAP(X_ENTER));
        }
      break;
    }
  }
  return true;
};
