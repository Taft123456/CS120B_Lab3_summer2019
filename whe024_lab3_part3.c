/* Author: whe024
* Partner(s) Name: Wentao He
* Lab Section: 021
* Assignment: Lab #3  Exercise #3
* Exercise Description: [optional - include from your own benefit]
*
* I acknowledge all content contained herein, excluding template or example
* code, is my own original work.
*/

#include <avr/io.h>


int main(void)
{
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    
    unsigned char LED = 0x00;
    
    while(1)
    {
	    //Let PINA be fuel-level
		//Let PORTC be LED sensor
	    if((PINA & 0x00) == 0x00)
	    {
		    LED = 0x40;
	    }
	    if((PINA & 0x01) == 0x01)
	    {
		    LED = 0x60;
	    }
	    if((PINA & 0x02) == 0x02)
	    {
		    LED = 0x60;
	    }
	    if((PINA & 0x03) == 0x03)
	    {
		    LED = 0x70;
	    }
	    if((PINA & 0x04) == 0x04)
	    {
		    LED = 0x70;
	    }
	    if((PINA & 0x05) == 0x05)
	    {
		    LED = 0x38;
	    }
	    if((PINA & 0x06) == 0x06)
	    {
		    LED = 0x38;
	    }
	    if((PINA & 0x07) == 0x07)
	    {
		    LED = 0x3C;
	    }
	    if((PINA & 0x08) == 0x08)
	    {
		    LED = 0x3C;
	    }
	    if((PINA & 0x09) == 0x09)
	    {
		    LED = 0x3C;
	    }
	    if((PINA & 0x0A) == 0x0A)
	    {
		    LED = 0x3E;
	    }
	    if((PINA & 0x0B) == 0x0B)
	    {
		    LED = 0x3E;
	    }
	    if((PINA & 0x0C) == 0x0C)
	    {
		    LED = 0x3E;
	    }
	    if((PINA & 0x0D) == 0x0D)
	    {
		    LED = 0x3F;
	    }			
		if((PINA & 0x0E) == 0x0E)
	    {
		    LED = 0x3F;
	    }
	    if((PINA & 0x0F) == 0x0F)
	    {
		    LED = 0x3F;
	    }
		//PINA & 0x10 for ignition
		//PINA & 0x20 for seated driver
		//PINA & 0x40 for fasten seat belt
		if((PINA & 0x10) == 0x10 && (PINA & 0x20) == 0x20)
		{
			if((PINA & 0x40) == 0x40)
			{
				PORTC = LED;
			}
			else
			{
				PORTC = (LED | 0x80);
			}
			
		}
		else
		{
			PORTC = LED;
		}
		return 0;
    }
}
