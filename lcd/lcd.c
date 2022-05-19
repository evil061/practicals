


#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000
void lcd_data (char ch);

int main(void)
{
	DDRC = 0b11111111;
	DDRD = 0b11111111;
	
	lcd_cmd(0x0e);
	lcd_cmd(0x80);
   
   lcd_data('T');
   lcd_data('U');
   lcd_data('S');
   lcd_data('H');
   lcd_data('A');
   lcd_data('R');
   
}
   void lcd_data(char ch)
   {
	   PORTC =ch;
	   PORTD =PORTD | (1<<PD0);
	   PORTD = PORTD &~(1<<PD1);
	   PORTD =PORTD | (1<<PD2);
	   _delay_ms(10);   
	   PORTD = PORTD &~(1<<PD2);
	   _delay_ms(10);   
   }	 
       
     void lcd_cmd(int cmd)
{
	PORTC =cmd;
	PORTD =PORTD &~ (1<<PD0);
	PORTD = PORTD &~(1<<PD1);
	   
	PORTD =PORTD | (1<<PD2);
	_delay_ms(10);   
    PORTD = PORTD &~(1<<PD2);
	_delay_ms(10);   
}
      
