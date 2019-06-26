/* Author: whe024
* Partner(s) Name: Wentao He
* Lab Section: 021
* Assignment: Lab #3  Exercise #1
* Exercise Description: [optional - include from your own benefit]
*
* I acknowledge all content contained herein, excluding template or example
* code, is my own original work.
*/

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	
	unsigned char totalInA;
	unsigned char totalInB;
	unsigned char i;
	
	while(1)
	{
		totalInA = 0x00;
		totalInB = 0x00;
		for(i = 0; i < 8; i++)
		{
			if((PINA >> i) & 0x01 == 0x01)
			{
				totalInA++;
			}
			if((PINB >> i) & 0x01 == 0x01)
			{
				totalInB++;
			}
		}
		PORTC = totalInA + totalInB;
	}
}