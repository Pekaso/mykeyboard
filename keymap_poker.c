#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*0:qwerty*/
  KEYMAP(ESC,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, FN1, DEL,  \
         GRV,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,      BSPC, \
         TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,      BSLS, \
         LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,      ENT,       \
         LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,     RSFT,            \
              LGUI,LALT,           SPC,                FN0,FN2),
  /*1:FN 1*/
  KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,TRNS,     TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,     TRNS,      \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,PGDN,DOWN,     TRNS,           \
              TRNS,TRNS,          TRNS,               TRNS,TRNS),

  /*2:FN 2*/
  KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS,   P,   Q,   K,   8,   2,   X,   T,   A,   5,   J,TRNS,TRNS,     TRNS, \
         TRNS,   E,   L,   O,   I,   C,   H,   4,   0,   U,   D,TRNS,TRNS,     TRNS, \
         TRNS,   G,   Y,   R,   W,   3,   0,   N,   6,   M,TRNS,TRNS,     TRNS,      \
         TRNS,   B,   F,   1,   Z,   S,   Z,   7,TRNS,TRNS,TRNS,     TRNS,           \
              TRNS,TRNS,          TRNS,               TRNS,TRNS),

  /*1:FN 3*/
  KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
         TRNS,BTN1,TRNS,BTN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_U,TRNS,     TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_L,MS_R,     TRNS,      \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_D,     TRNS,          \
              TRNS,TRNS,          TRNS,               TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_TOGGLE(2),
  [2] = ACTION_LAYER_MOMENTARY(3),
};
