/*
 *  File_name:  DIO_private.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "../../data_type.h"
#include "../../bit_math.h"

/* DIO Registers */
/* PortA Registers */
#define PORTA   *((volatile u8* const)0x3B)   // Port A Data Register (PORTA)
#define DDRA    *((volatile u8* const)0x3A)   // Port A Data Direction (DDRA)
#define PINA    *((volatile u8* const)0x39)   // Port A Input Pins (PINA)
/* PortB Registers */
#define PORTB   *((volatile u8* const)0x38)   // Port B Data Register (PORTB)
#define DDRB    *((volatile u8* const)0x37)   // Port B Data Direction (DDRB)
#define PINB    *((volatile u8* const)0x36)   // Port B Input Pins (PINB)
/* PortC Registers */
#define PORTC   *((volatile u8* const)0x35)   // Port C Data Register (PORTC)
#define DDRC    *((volatile u8* const)0x34)   // Port C Data Direction (DDRC)
#define PINC    *((volatile u8* const)0x33)   // Port C Input Pins (PINC)
/* PortD Registers */
#define PORTD   *((volatile u8* const)0x32)   // Port D Data Register (PORTD)
#define DDRD    *((volatile u8* const)0x31)   // Port D Data Direction (DDRD)
#define PIND    *((volatile u8* const)0x30)   // Port D Input Pins (PIND)

/* Ports */
#define DIO_PORTA   0
#define DIO_PORTB   1
#define DIO_PORTC   2
#define DIO_PORTD   3

/* Pins */
#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7

/* Values */
#define LOW     0
#define HIGH    1

/* Directions */
#define INPUT   0
#define OUTPUT  1

/* Security */
#define NO_PINS 8
#define DEFAULT 0x00

#endif
