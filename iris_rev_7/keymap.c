#include "vim.h"

#define CW_TAB HYPR_T(KC_TAB)
#define CW_LSPC LT(MOVEMENT_MODE,KC_SPC)
#define CW_RSPC LT(SYMBOL_MODE,KC_SPC)
#define CW_ASPC LT(MEDIA_MODE, KC_SPC)
#define SP_LAPO QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN
#define SP_RAPO QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY_MODE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     CW_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    SP_LAPO,          SP_RAPO, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, CW_LSPC, CW_RSPC,                   CW_ASPC, CW_LSPC, KC_RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [MOVEMENT_MODE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,  KC_TRNS, VIM_W,   VIM_E,   KC_TRNS, KC_TRNS,                            VIM_Y,   VIM_U,   VIM_I,   VIM_O,   VIM_P,   KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, VIM_A,   VIM_S,   VIM_D,   KC_TRNS, KC_TRNS,                            VIM_H,   VIM_J,   VIM_K,   VIM_L,   KC_TRNS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, VIM_X,   VIM_C,   VIM_V,   VIM_B,   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SC_SENT,
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
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6, KC_ENT,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_LBRC,          KC_RBRC, KC_RBRC, KC_KP_1, KC_KP_2, KC_KP_3, KC_ENT,  KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_KP_0
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
  bool SHIFTED = (keyboard_report -> mods & MOD_BIT(KC_LSFT)) |
    (keyboard_report -> mods & MOD_BIT(KC_RSFT));

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
    } else {
      layer_off(MEDIA_MODE);
    }
    return false;

    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_UP();
        break;
      case VIM_C:
        VIM_CHANGE_UP();
        break;
      case VIM_D:
        VIM_DELETE_UP();
        break;
      case VIM_V:
        VIM_VISUAL_UP();
        break;
      }
    }
    return false;

  case VIM_A:
    if (record -> event.pressed) {
      SHIFTED ? VIM_APPEND_LINE() : VIM_APPEND();
    }
    return false;

  case VIM_B:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_BACK();
        break;
      case VIM_C:
        VIM_CHANGE_BACK();
        break;
      case VIM_D:
        VIM_DELETE_BACK();
        break;
      case VIM_V:
        VIM_VISUAL_BACK();
        break;
      }
    }
    return false;

  case VIM_C:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        SHIFTED ? VIM_CHANGE_LINE() : VIM_LEADER(VIM_C);
        break;
      case VIM_C:
        VIM_CHANGE_WHOLE_LINE();
        break;
      }
    }
    return false;

  case VIM_D:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        SHIFTED ? VIM_DELETE_LINE() : VIM_LEADER(VIM_D);
        break;
      case VIM_D:
        VIM_DELETE_WHOLE_LINE();
        break;
      }
    }
    return false;

  case VIM_E:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_END();
        break;
      case VIM_C:
        VIM_CHANGE_END();
        break;
      case VIM_D:
        VIM_DELETE_END();
        break;
      case VIM_V:
        VIM_VISUAL_END();
        break;
      }
    }
    return false;

  case VIM_H:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_LEFT();
        break;
      case VIM_C:
        VIM_CHANGE_LEFT();
        break;
      case VIM_D:
        VIM_DELETE_LEFT();
        break;
      case VIM_V:
        VIM_VISUAL_LEFT();
        break;
      }
    }
    return false;

  case VIM_I:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        layer_on(QWERTY_MODE);
        break;
      case VIM_C:
        VIM_LEADER(VIM_CI);
        break;
      case VIM_D:
        VIM_LEADER(VIM_DI);
        break;
      case VIM_V:
        VIM_LEADER(VIM_VI);
        break;
      }
    }
    return false;

  case VIM_J:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        SHIFTED ? VIM_JOIN() : VIM_DOWN();
        break;
      case VIM_C:
        VIM_CHANGE_DOWN();
        break;
      case VIM_D:
        VIM_DELETE_DOWN();
        break;
      case VIM_V:
        VIM_VISUAL_DOWN();
        break;
      }
    }
    return false;

  case VIM_K:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_UP();
        break;
      case VIM_C:
        VIM_CHANGE_UP();
        break;
      case VIM_D:
        VIM_DELETE_UP();
        break;
      case VIM_V:
        VIM_VISUAL_UP();
        break;
      }
    }
    return false;

  case VIM_L:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_RIGHT();
        break;
      case VIM_C:
        VIM_CHANGE_RIGHT();
        break;
      case VIM_D:
        VIM_DELETE_RIGHT();
        break;
      case VIM_V:
        VIM_VISUAL_RIGHT();
        break;
      }
    }
    return false;

  case VIM_O:
    if (record -> event.pressed) {
      SHIFTED ? VIM_OPEN_ABOVE() : VIM_OPEN();
    }
    return false;

  case VIM_P:
    if (record -> event.pressed) {
      SHIFTED ? VIM_PUT_BEFORE() : VIM_PUT();
    }
    return false;

  case VIM_S:
    if (record -> event.pressed) {
      SHIFTED ? VIM_CHANGE_WHOLE_LINE() : VIM_SUBSTITUTE();
    }
    return false;

  case VIM_U:
    if (record -> event.pressed) {
      VIM_UNDO();
    }
    return false;

  case VIM_V:
    if (record -> event.pressed) {
      VIM_LEADER(VIM_V);
    }
    return false;

  case VIM_W:
    if (record -> event.pressed) {
      switch (VIM_QUEUE) {
      case KC_NO:
        VIM_WORD();
        break;
      case VIM_C:
        VIM_CHANGE_WORD();
        break;
      case VIM_CI:
        VIM_CHANGE_INNER_WORD();
        break;
      case VIM_D:
        VIM_DELETE_WORD();
        break;
      case VIM_DI:
        VIM_DELETE_INNER_WORD();
        break;
      case VIM_V:
        VIM_VISUAL_WORD();
        break;
      case VIM_VI:
        VIM_VISUAL_INNER_WORD();
        break;
      }
    }
    return false;

  case VIM_X:
    if (record -> event.pressed) {
      VIM_CUT();
    }
    return false;

  case VIM_Y:
    if (record -> event.pressed) {
      SHIFTED ? VIM_YANK_LINE() : VIM_YANK();
    }
    return false;

  }
  return true;
};
