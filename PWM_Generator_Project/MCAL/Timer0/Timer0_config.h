/*
 *  File_name:  Timer0_config.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef TIMER0_CONFIG_H_
#define TIMER0_CONFIG_H_

/* 
 * For Timer0 Mode, Please select one of the following options:
 *  1. TIMER0_NORMAL
 *  2. TIMER0_PWM
 *  3. TIMER0_CTC
 *  4. TIMER0_FASTPWM
 */
#define TIMER0_MODE         TIMER0_FASTPWM

/*
 * For Timer0 Prescaling, Please select one of the following options:
 *  1. TIMER0_STOP
 *  2. TIMER0_PRESCALING_1
 *  3. TIMER0_PRESCALING_8
 *  4. TIMER0_PRESCALING_64
 *  5. TIMER0_PRESCALING_256
 *  6. TIMER0_PRESCALING_1024
 *  7. TIMER0_EXTERNAL_FALLING
 *  8. TIMER0_EXTERNAL_RISING
 */
#define TIMER0_PRESCALER    TIMER0_PRESCALING_1

/*
 * For Timer0 Output Compare, Please select one of the following options:
 *  1. TIMER0_DISCONNECT
 *  2. TIMER0_TOGGLE
 *  3. TIMER0_NONINVERTED
 *  4. TIMER0_INVERTED
 *  5. TIMER0_SET
 *  6. TIMER0_CLEAR
 */
#define TIMER0_OC0          TIMER0_NONINVERTED

#endif