#include <avr/io.h>
//#include "USART_32.h"

#define F_CPU 1000000UL

#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sfr_defs.h>

void Delay_ms(unsigned int i)
{
	while(i)
	{
		_delay_ms(1);
		i--;
	}
}

int main(void)
{
	USART_Init(51);
	DDRA=0xFF;
	PORTA=0x00;
	DDRB=0x00;
	PORTB=0xFF; 
	int pressed[7],i=0;

	for(i=0;i<7;i++)pressed[i]=0;
	int state=0;	
    while(1)
    {
			if(bit_is_clear(PINB, 0))
			{
				pressed[0]++;
				if(pressed[0]>500)USART_Transmitchar('1'),Delay_ms(50000),pressed[0]=0,state=1;
			}
			else pressed[0] = 0;
			
			if(bit_is_clear(PINB, 1))
			{
				pressed[1]++;
				if(pressed[1]>500)USART_Transmitchar('2'),Delay_ms(50000),pressed[1]=0,state=1;
			}
			else pressed[1] = 0;
			
			if(bit_is_clear(PINB, 2))
			{
				pressed[2]++;
				if(pressed[2]>500)USART_Transmitchar('3'),Delay_ms(500),pressed[2]=0,state=1;
			}
			else pressed[2] = 0;
			
			if(bit_is_clear(PINB, 3))
			{
				pressed[3]++;
				if(pressed[3]>500)USART_Transmitchar('4'),Delay_ms(500),pressed[3]=0,state=1;
			}
			else pressed[3] = 0;
			
			if(bit_is_clear(PINB, 4))
			{
				pressed[4]++;
				if(pressed[4]>500)USART_Transmitchar('5'),Delay_ms(500),pressed[4]=0,state=1;
			}
			else pressed[4] = 0;

			if(bit_is_clear(PINB, 5))
			{
				pressed[5]++;
				if(pressed[5]>500)USART_Transmitchar('6'),Delay_ms(500),pressed[5]=0,state=1;
			}
			else pressed[5] = 0;
			
			if(bit_is_clear(PINB, 6))
			{
				pressed[6]++;
				if(pressed[6]>500)USART_Transmitchar('7'),Delay_ms(500),pressed[6]=0,state=1;
			}
			else pressed[6] = 0;
			
		if(state==1)state=0;
		else USART_Transmitchar('0');
	}
}
