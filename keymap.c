/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_spanish_latin_america.h"
#include "oled.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
 LT(1,KC_TAB),    ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,                         ES_Y,    ES_U,    ES_I,    ES_O,    ES_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
CTL_T(KC_ESC),    ES_A,    ES_S,    ES_D,    ES_F,    ES_G,                         ES_H,    ES_J,    ES_K,    ES_L, ES_NTIL, ES_ACUT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,                         ES_N,    ES_M, ES_COMM,  ES_DOT, ES_MINS, SFT_T(ES_QUOT),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   MO(3),  KC_SPC,     KC_SPC,LT(2,KC_ENT), KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      ES_SLSH,    KC_7,    KC_8,    KC_9, ES_ASTR, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      ES_MINS,    KC_4,    KC_5,    KC_6, ES_PLUS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, XXXXXXX,  KC_SPC,     KC_SPC,  KC_ENT, KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, ES_DQUO,   ES_AT, ES_LPRN, ES_RPRN, ES_PERC,                       ES_EQL, ES_PLUS, ES_MINS, ES_LABK, ES_RABK, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, ES_IQUE, ES_QUES, ES_LCBR, ES_RCBR, ES_QUOT,                      ES_MORD, ES_NUMB, ES_SLSH, ES_PIPE, ES_BSLS,  ES_DLR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, ES_IEXL, ES_EXLM, ES_LBRC, ES_RBRC,  ES_NOT,                      ES_ASTR, ES_GRV,  ES_CIRC, ES_DIAE, ES_AMPR, ES_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   MO(4),  KC_SPC,     KC_ENT, _______, KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, KC_LSFT, KC_LALT, KC_LCTL, KC_LGUI,                      XXXXXXX, KC_LEFT, KC_DOWN,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD,                      KC_VOLU, KC_MPRV, KC_MSTP, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_SPC,     KC_SPC,   MO(4), KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TG(5),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_SPC,     KC_SPC, _______, KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,     ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,                         ES_Y,    ES_U,    ES_I,    ES_O,    ES_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    ES_A,    ES_S,    ES_D,    ES_F,    ES_G,                         ES_H,    ES_J,    ES_K,    ES_L, ES_NTIL, ES_ACUT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,                         ES_N,    ES_M,  ES_DOT, ES_COMM, ES_MINS,   TG(5),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   MO(6),  KC_SPC,     KC_SPC, KC_ENT, KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),

    [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_SPC,     KC_SPC,  KC_ENT, KC_LGUI
                                      //`--------------------------'  `--------------------------'
  ),
};
