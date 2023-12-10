/*
 *  File_name:  Timer0_interface.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_

#include "Timer0_config.h"
#include "Timer0_private.h"
#include "../DIO/DIO_interface.h"

void Timer0_init(void);
void Timer0_OVInterrupt_Enable(void);
void Timer0_OVInterrupt_Disable(void);
void Timer0_OCInterrupt_Enable(void);
void Timer0_OCInterrupt_Disable(void);
void Timer0_FastPWM(u8 duty);

void PWM_init(void);

#endif