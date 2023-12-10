/*
 *  File_name:  LCD_program.c
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#include "LCD_interface.h"

static void GLCD_WriteCommand(u8 command) {
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_RS, LOW);     // Make RS pin LOW for command register
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_RW, LOW);     // Make RW pin LOW for write operation
    DIO_Write_Port_val(GLCD_DATA_PORT, command);
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_EN, HIGH);    // Make EN pin HIGH for enable signal
    _delay_ms(2);
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_EN, LOW);     // Make EN pin LOW for enable signal
    _delay_ms(2);
}

static void GLCD_WriteData(u8 data) {
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_RS, HIGH);     // Make RS pin HIGH for command register
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_RW, LOW);     // Make RW pin LOW for write operation
    DIO_Write_Port_val(GLCD_DATA_PORT, data);
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_EN, HIGH);    // Make EN pin HIGH for enable signal
    _delay_ms(2);
    DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_EN, LOW);     // Make EN pin LOW for enable signal
    _delay_ms(2);
}

void GLCD_init(void) {
	_delay_ms(50);
	DIO_Wirte_Pin_val(GLCD_COMMAND_PORT, GLCD_RST, HIGH);
	GLCD_WriteCommand(0x30);
	_delay_ms(1);
	GLCD_WriteCommand(0x30);
	_delay_ms(1);
	GLCD_WriteCommand(0x0C);
	_delay_ms(1);
	GLCD_WriteCommand(0x01);
	_delay_ms(1);
	GLCD_WriteCommand(0x03);
}


