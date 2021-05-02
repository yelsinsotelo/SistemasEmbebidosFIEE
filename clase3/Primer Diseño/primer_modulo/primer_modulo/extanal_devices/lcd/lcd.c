/*
 * CFile1.c
 *
 * Created: 2/05/2021 10:22:13
 *  Author: yelsi
 */ 
#include "lcd.h"
#include <util/delay.h>
#include "../../firmware/ports/ports.h"
void init_lcd(){
	OUTPUT_MODE(B,D7);
	OUTPUT_MODE(B,D8);
	OUTPUT_MODE(B,D9);
	OUTPUT_MODE(B,D10);
	OUTPUT_MODE(B,D11);
	OUTPUT_MODE(B,D12);
	OUTPUT_MODE(B,D13);
	OUTPUT_MODE(B,D14);
	OUTPUT_MODE(C,RS);
	OUTPUT_MODE(C,RW);
	OUTPUT_MODE(C,EN);
	SET_VALUE_PORT(B,0);
	L_PIN(C,RS);
	L_PIN(C,RW);
	L_PIN(C,EN);
} 

void set_action_lcd (uint8_t action) {
	SET_VALUE_PORT(B,action);
	_delay_ms(LONG_AWAIT);
	H_PIN(C,EN);
	_delay_ms(SHORT_AWAIT);
	L_PIN(C,EN);
}