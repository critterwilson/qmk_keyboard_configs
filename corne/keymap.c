;#include QMK_KEYBOARD_H
/* HOMEROW MODS */
#define HM_A LALT_T(KC_A)
#define HM_S LCTL_T(KC_S)
#define HM_D LGUI_T(KC_D)
#define HM_Z LSFT_T(KC_Z)
#define HM_J RSFT_T(KC_J)
#define HM_K RGUI_T(KC_K)
#define HM_L RCTL_T(KC_L)
#define HM_SCLN RALT_T(KC_SCLN)
/* THUMB MODS/LAYERS */
#define CW_TAB HYPR_T(KC_TAB)
#define CW_LMVM LT(MOVEMENT_MODE, KC_BSPC)
#define CW_RMVM LT(MOVEMENT_MODE, KC_SPC)
#define CW_SYMB LT(SYMBOL_MODE,   KC_TAB)
#define CW_MEDI LT(MEDIA_MODE,    SC_SENT)
#define SP_LAPO QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN
#define SP_RAPC QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE

#define QWERTY_MODE 0
#define MOVEMENT_MODE 1
#define SYMBOL_MODE 2
#define MEDIA_MODE 3

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    MVMT,
    SYMBOL,
    MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY_MODE] = LAYOUT(
        // TODO:KC_Q ==> Tap until you get q ` or ~
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     CW_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    HM_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    SP_LAPO,          SP_RAPC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_SENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, CW_LMVM, CW_SYMB,                   CW_MEDI, CW_RMVM, KC_RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [MOVEMENT_MODE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,  KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [SYMBOL_MODE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6, KC_ENT,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_LBRC,          KC_RBRC, KC_RBRC, KC_KP_1, KC_KP_2, KC_KP_3, KC_ENT,  KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_KP_0,  KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [MEDIA_MODE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLU, KC_TRNS, KC_TRNS,                            RGB_MOD, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_TRNS, RGB_TOG, KC_TRNS,          KC_TRNS, RGB_RMOD,RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// TRNS LAYER
//   //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
//      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//   //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
//      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//   //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
//      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//   //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
//                                     KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
//                                 // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
};



bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (get_highest_layer(layer_state) != 0) {
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);
    switch (layer) {
    case MOVEMENT_MODE:
      for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
          uint8_t index = g_led_config.matrix_co[row][col];

          if (index >= led_min && index < led_max && index != NO_LED &&
            keymap_key_to_keycode(layer, (keypos_t) {
              col,
              row
            }) > KC_TRNS) {
            rgb_matrix_set_color(index, 255, 0, 0);
          }
        }
      }
      break;
    case SYMBOL_MODE:
      for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
          uint8_t index = g_led_config.matrix_co[row][col];

          if (index >= led_min && index < led_max && index != NO_LED &&
            keymap_key_to_keycode(layer, (keypos_t) {
              col,
              row
            }) > KC_TRNS) {
            rgb_matrix_set_color(index, 0, 0, 255);
          }
        }
      }
      break;
    case MEDIA_MODE:
      for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
          uint8_t index = g_led_config.matrix_co[row][col];

          if (index >= led_min && index < led_max && index != NO_LED &&
            keymap_key_to_keycode(layer, (keypos_t) {
              col,
              row
            }) > KC_TRNS) {
            rgb_matrix_set_color(index, 0, 255, 0);
          }
        }
      }
      break;
    default:
      break;
    }
  }
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t * record) {
  switch (keycode) {
  case QWERTY:
    if (record -> event.pressed) {
      set_single_persistent_default_layer(QWERTY_MODE);
    }
    return false;

  case MVMT:
    if (record -> event.pressed) {
      layer_on(MOVEMENT_MODE);
      update_tri_layer(MOVEMENT_MODE, SYMBOL_MODE, MEDIA_MODE);
    } else {
      layer_off(MOVEMENT_MODE);
      update_tri_layer(MOVEMENT_MODE, SYMBOL_MODE, MEDIA_MODE);
    }
    return false;

  case SYMBOL:
    if (record -> event.pressed) {
      layer_on(SYMBOL_MODE);
      update_tri_layer(MOVEMENT_MODE, SYMBOL_MODE, MEDIA_MODE);
    } else {
      layer_off(SYMBOL_MODE);
      update_tri_layer(MOVEMENT_MODE, SYMBOL_MODE, MEDIA_MODE);
    }
    return false;

  case MEDIA:
    if (record -> event.pressed) {
      layer_on(MEDIA_MODE);
      update_tri_layer(MOVEMENT_MODE, SYMBOL_MODE, MEDIA_MODE);
    } else {
      layer_off(MEDIA_MODE);
      update_tri_layer(MOVEMENT_MODE, SYMBOL_MODE, MEDIA_MODE);
    }
    return false;

  }
  return true;
};
