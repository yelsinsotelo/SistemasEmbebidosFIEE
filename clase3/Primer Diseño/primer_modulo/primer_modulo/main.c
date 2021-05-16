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

int x = SET_INIT_ADDRESS_FIRST_ROW;
int y = 1;
char *buf;
int main(void)
{
	init_lcd();
	set_action_lcd(SHIFT_RIGTH);
	set_action_lcd(SHIFT_RIGTH);
	set_action_lcd(SHIFT_RIGTH);
	set_action_lcd(SHIFT_RIGTH);
	set_action_lcd(RETURN_HOME);
	goToXY(4,1);
	char hola[] = "HOLA";
    write_string(hola);
	goToXY(16,2);
	char fiee[] = "FIEE";
	write_string(fiee);
    while(1)
    {
		
    }
}