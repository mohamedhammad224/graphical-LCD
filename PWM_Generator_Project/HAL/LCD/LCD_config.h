/*
 *  File_name:  LCD_config.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

#define GLCD_DATA_PORT      DIO_PORTD
#define GLCD_COMMAND_PORT   DIO_PORTC

#define GLCD_D0     PIND0
#define GLCD_D1     PIND1
#define GLCD_D2     PIND2
#define GLCD_D3     PIND3
#define GLCD_D4     PIND4
#define GLCD_D5     PIND5
#define GLCD_D6     PIND6
#define GLCD_D7     PIND7

#define GLCD_RS     PINC0
#define GLCD_RW     PINC1
#define GLCD_EN     PINC2
#define GLCD_RST    PINC4


#endif