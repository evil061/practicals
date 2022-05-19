


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB = 0b11111111;
	DDRC = 0b11111111;
	DDRA=0b00000000;
    while(10)
    {
        
		PORTC = 0b1111110;//zero
		_delay_ms(1000);
		PORTC= 0b00001100;//one
		_delay_ms(1000);
		PORTC = 0b10110111;//two
		_delay_ms(1000);
		PORTC= 0b10011111;//three
		_delay_ms(1000);
		PORTC = 0b11001101;//four
		_delay_ms(1000);
		PORTC= 0b11011011;//five
		_delay_ms(1000);
		PORTC= 0b11111011;//six
		_delay_ms(1000);
		PORTC= 0b00001110;//seven
		_delay_ms(1000);
		PORTC= 0b11111111;//eight
		_delay_ms(1000);
		PORTC= 0b11011111;//five
		_delay_ms(1000);
		
		
    }
}
