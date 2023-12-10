/*
 *  File_name:  DIO_interface.h
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "DIO_config.h"
#include "DIO_private.h"

/* DIO Initialization Functions */
void DIO_init(void);

/* DIO Bits Functions */
/* Pins Direction Functions */
void DIO_Write_Pin_Dir(u8 port, u8 pin, u8 dir);
u8 DIO_Read_Pin_Dir(u8 port, u8 pin);
/* Pins Values Functions */
void DIO_Wirte_Pin_val(u8 port, u8 pin, u8 val);
u8 DIO_Read_Pin_val(u8 port, u8 pin);

/* DIO Ports Functions */
/* Port Direction functions */
void DIO_Write_Port_dir(u8 port, u8 dir);
u8 DIO_READ_Port_dir(u8 port);
/* Port Values Functions */
void DIO_Write_Port_val(u8 port, u8 val);
u8 DIO_Read_Port_Val(u8 port);

#endif
