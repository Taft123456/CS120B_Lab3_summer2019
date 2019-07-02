/* Author: whe024
* Partner(s) Name: Wentao He
* Lab Section: 021
* Assignment: Lab #3  Exercise #2
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
    
    while(1)
    {
	    //Let PINA be fuel-level
		//Let PORTC be LED sensor
	    if((PINA & 0x00) == 0x00)
	    {
		    PORTC = 0x40;
	    }
	    if((PINA & 0x01) == 0x01)
	    {
		    PORTC = 0x60;
	    }
	    if((PINA & 0x02) == 0x02)
	    {
		    PORTC = 0x60;
	    }
	    if((PINA & 0x03) == 0x03)
	    {
		    PORTC = 0x70;
	    }
	    if((PINA & 0x04) == 0x04)
	    {
		    PORTC = 0x70;
	    }
	    if((PINA & 0x05) == 0x05)
	    {
		    PORTC = 0x38;
	    }
	    if((PINA & 0x06) == 0x06)
	    {
		    PORTC = 0x38;
	    }
	    if((PINA & 0x07) == 0x07)
	    {
		    PORTC = 0x3C;
	    }
	    if((PINA & 0x08) == 0x08)
	    {
		    PORTC = 0x3C;
	    }
	    if((PINA & 0x09) == 0x09)
	    {
		    PORTC = 0x3C;
	    }
	    if((PINA & 0x0A) == 0x0A)
	    {
		    PORTC = 0x3E;
	    }
	    if((PINA & 0x0B) == 0x0B)
	    {
		    PORTC = 0x3E;
	    }
	    if((PINA & 0x0C) == 0x0C)
	    {
		    PORTC = 0x3E;
	    }
	    if((PINA & 0x0D) == 0x0D)
	    {
		    PORTC = 0x3F;
	    }			
		if((PINA & 0x0E) == 0x0E)
	    {
		    PORTC = 0x3F;
	    }
	    if((PINA & 0x0F) == 0x0F)
	    {
		    PORTC = 0x3F;
	    }
		return 0;
    }
}

