/*
 * main.c
 *
 * Created: 4/25/2021 11:47:23 AM
 *  Author: yeltsin
 */ 

#include <xc.h>
#include <avr/delay.h>
#include "firmware/ports/ports.h"
#include "extanal_devices/lcd/lcd.h"
int main(void)
{
	init_lcd();
    while(1)
    {
		set_action_lcd(ON_DISPLAY);
		_delay_ms(5000);
		set_action_lcd(OFF_DISPLAY);
		_delay_ms(5000);
    }
}