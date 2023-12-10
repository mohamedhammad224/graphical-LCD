/*
 * Project:	PWM_Generator_Project
 * Author:	Mohammed Hammad
 * Date:	06/12/2023
 * Version:	0.1
 */ 

#define F_CPU 8000000UL
#include "MCAL/DIO/DIO_interface.h"
#include "MCAL/Timer0/Timer0_interface.h"
#include "HAL/LCD/LCD_interface.h"
#include <util/delay.h>


int main(void)
{
	u8 duty;
	DIO_init();
	PWM_init();
	GLCD_init();
    while (1) 
    {
	
		for(duty=0; duty<255; duty++) {
			OCR0=duty;
			_delay_ms(5);
		}
		for(duty=255; duty<1; duty--) {
			OCR0=duty;
			_delay_ms(5);
		}
		
    }
}

