# define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA=0x00;
	DDRD=0xff;
    while (1) 
    {
		if(PINA==0x01)
		{
			_delay_ms(50);
			PORTD=1<<5;
		}
		else if(PINA==0x00){
			_delay_ms(50);
			PORTD=0<<5;
		}
		
    }
}
