


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	
	DDRC = 0b11111111;
	
    while(10)
    {
        
		PORTC = 0b10000001;//beep on
		_delay_ms(1000);
		PORTC= 0b00000000;//beep of
		
		
		
    }
}
