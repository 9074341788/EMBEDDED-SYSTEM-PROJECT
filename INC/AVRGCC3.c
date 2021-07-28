/*
 * AVRGCC3.c
 *
 * Created: 27-07-2021 21:38:43
 *  Author: shriv
 */ 

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRB |=(1<< PB0); // set BO=1
    while(1)
    {
		 PORTB |=(1<<PB0);
		 _delay_ms(2000);
		 PORTB &=~(1<<PB0);
		 _delay_ms(2000);
        
    }
}