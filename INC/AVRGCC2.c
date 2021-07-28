/*
 * AVRGCC2.c
 *
 * Created: 27-07-2021 20:22:13
 *  Author: shriv
 */ 

# include <avr/io.h>
# include<util/delay.h>

 int main(void)
{
   DDRB |=(1<<PBO); // set BO=1

    while(1)
    {
         PORTB | =(1<<PBO);
		_delay_ms(2000);
		PORTB &=~ (1<<PBO);
		_delay_ms(2000);
		
     }
 }