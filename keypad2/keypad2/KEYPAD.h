/*
 * KEYPAD.h
 *
 * Created: 7/24/2023 10:26:33 AM
 *  Author: Lenovo
 */ 
#include "DIO_int.h"
#include "gpio.h"

#ifndef KEYPAD_H_
#define KEYPAD_H_

#define   ROW_PORT       PORTA_ID
#define   COLUMN_PORT    PORTA_ID

#define   KEYPAD_COLUM_0 	PIN0_ID
#define   KEYPAD_COLUM_1    PIN1_ID
#define   KEYPAD_COLUM_2 	PIN2_ID
#define   KEYPAD_COLUM_3 	PIN3_ID

#define   KEYPAD_ROW_0	 	PIN4_ID
#define   KEYPAD_ROW_1 	    PIN5_ID
#define   KEYPAD_ROW_2 	    PIN6_ID
#define   KEYPAD_ROW_3 	    PIN7_ID

void KeyPad_Init(void);

u8 KeyPad_GetChar(void);

#endif /* KEYPAD_H_ */