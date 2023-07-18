/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "hyper40.h"

void matrix_init_kb(void) {
	matrix_init_user();
}

led_config_t g_led_config = { {

    {4,4,4,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED },{ NO_LED,NO_LED,NO_LED,NO_LED,3,3,3,  4,     4,   NO_LED,NO_LED}, \
    {5,5,5,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED },{ NO_LED,NO_LED,NO_LED,NO_LED,2,2,2,NO_LED,NO_LED,NO_LED,NO_LED}, \
    {6,6,6,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED },{ NO_LED,NO_LED,NO_LED,NO_LED,1,1,1,NO_LED,NO_LED,  3,     3   }, \
    {7,7,7,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,NO_LED },{ NO_LED,NO_LED,NO_LED,NO_LED,0,0,0,NO_LED,NO_LED,NO_LED,NO_LED} \
}, {
	{ 127, 50 }, { 127, 38 }, { 127, 26 }, { 127, 14 },
	{ 97, 14 },  { 97, 26 },  { 97, 38 },  { 97, 50 }
}, {
	2, 2, 2, 2, 2, 2, 2, 2
} };