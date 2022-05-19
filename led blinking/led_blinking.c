/*
 * led_blink.c
 *
 * Created: 30-04-2022 08:41:09
 *  Author: TUSHAR
 */ 


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB = 0b11111111;
	DDRC = 0b11111111;
	DDRA=0b00000000;
    while(10)
    {
        PORTB = 0b11111111;
		_delay_ms(1000);
		PORTB = 0b00000000;
		_delay_ms(1000);
		PORTC = 0b01111110;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		
    }
}
