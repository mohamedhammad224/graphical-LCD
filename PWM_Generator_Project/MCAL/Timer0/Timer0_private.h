/*
 *  File_name:  Timer0_private.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#include "../../data_type.h"
#include "../../bit_math.h"

#define TIMER0_REG_CAPACITY		256

/* Timer0 Registers */
#define TCCR0   *((volatile u8* const)0x53) // Timer/Counter Control Register (TCCR0)
#define TCNT0   *((volatile u8* const)0x52) // Timer/Counter Register (TCNT0)
#define OCR0    *((volatile u8* const)0x5C) // Output Compare Register (OCR0)
#define TIMSK   *((volatile u8* const)0x59) // Timer/Counter Interrupt Mask (TIMSK)
#define TIRF    *((volatile u8* const)0x58) // Timer/Counter Interrupt Flag Register (TIRF)

/* Timer/Counter Control Register (TCCRO) Pins */
#define CS00    0
#define CS01    1
#define CS02    2
#define WGM01   3
#define COM00   4
#define COM01   5
#define WGM00   6
#define FOC0    7

/* Timer/Counter Interrupt Mask Register (TIMSK) Pins */
#define TOIE0   0
#define OCIE0   1

/* Timer/Counter Interrupt Flag Register (TIFR) Pins */
#define TOV0    0
#define OCF0    1

#endif