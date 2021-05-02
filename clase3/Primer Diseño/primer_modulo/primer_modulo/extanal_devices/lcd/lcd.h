/*
 * lcd.h
 *
 * Created: 2/05/2021 10:22:32
 *  Author: yelsi
 */ 


#ifndef LCD_H_
#define LCD_H_
#include <xc.h>
/*  basic commands  */
#define CLEAR_DISPLAY 0x01
#define RETURN_HOME 0x02
#define ENTRY_MODE 0x07
#define ON_DISPLAY 0x0F
#define OFF_DISPLAY 0x08
#define SHIFT_LEFT 0x1C
#define SET_FUNCTIONS 0x24

/* Usage ports */

#define D14 PORTB7
#define D13 PORTB6
#define D12 PORTB5
#define D11 PORTB4
#define D10 PORTB3
#define D9 PORTB2
#define D8 PORTB1
#define D7 PORTB0

#define RS PORTC0
#define RW PORTC1
#define EN  PORTC2

#define LONG_AWAIT   10
#define SHORT_AWAIT  5

void init_lcd();
void set_action_lcd(uint8_t action);




#endif /* LCD_H_ */