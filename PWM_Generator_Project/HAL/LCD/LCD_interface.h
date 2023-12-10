/*
 *  File_name:  LCD_interface.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#define F_CPU	8000000UL
#include "LCD_config.h"
#include "LCD_private.h"
#include <util/delay.h>

static void GLCD_WriteCommand(u8 command);
static void GLCD_WriteData(u8 data);
void GLCD_init(void);

#endif