/*
 *  File_name:  bit_math.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/* Registers Math */
#define SET_REG(PORT)           (PORT=0xFF)
#define CLEAR_REG(PORT)         (PORT=0x00)
#define TOGGLE_REG(PORT)        (PORT^=0xFF)
#define ASSIGN_REG(PORT, VAL)   (PORT=VAL)

/* Pins Math */
#define SET_BIT(PORT, PIN)      (PORT|=(1<<PIN))
#define CLEAR_BIT(PORT, PIN)    (PORT&=(~(1<<PIN)))
#define TOGGLE_BIT(PORT, PIN)   (PORT^=(1<<PIN))
#define CHECK_BIT(PORT, PIN)    ((PORT>>PIN)&1)
                      
#endif