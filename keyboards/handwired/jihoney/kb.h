#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005,                   K009, K010, K011, K012, K013, K014, K015, K016, K017, \
	K100, K101, K102, K103, K104, K105,                   K109, K110, K111, K112, K113, K114, K115,       K117, \
	K200, K201, K202, K203, K204, K205,                   K209, K210, K211, K212, K213, K214,       K216,       \
	K300, K301, K302, K303, K304, K305,                   K309, K310, K311, K312, K313,       K315, K316,       \
	K400, K401, K402,       K404,                               K410,       K412, K413, K414, K415, K416, K417  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  KC_NO, KC_NO, KC_NO, K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  KC_NO, KC_NO, KC_NO, K109,  K110,  K111,  K112,  K113,  K114,  K115,  KC_NO, K117 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  KC_NO, KC_NO, KC_NO, K209,  K210,  K211,  K212,  K213,  K214,  KC_NO, K216,  KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  KC_NO, KC_NO, KC_NO, K309,  K310,  K311,  K312,  K313,  KC_NO, K315,  K316,  KC_NO }, \
	{ K400,  K401,  K402,  KC_NO, K404,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412,  K413,  K414,  K415,  K416,  K417 }  \
}

#endif