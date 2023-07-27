/*
 * KEYPAD.c
 *
 * Created: 7/24/2023 10:26:14 AM
 *  Author: Lenovo
 */ 

#include <util/delay.h>
#include "KEYPAD.h"

const u8 KeyPad_Values[4][4] = {{'7' , '4' , '1' , 'c'} ,
{'8' , '5' , '2' , '0'} ,
{'9' , '6' , '3' , '='} ,
{'/' , 'x' , '-' , '+'}  };



void KeyPad_Init(void)
{

	DIO_voidSetPinDirection(COLUMN_PORT, KEYPAD_COLUM_0, OUTPUT );
	DIO_voidSetPinDirection(COLUMN_PORT, KEYPAD_COLUM_1, OUTPUT );
	DIO_voidSetPinDirection(COLUMN_PORT, KEYPAD_COLUM_2, OUTPUT );
	DIO_voidSetPinDirection(COLUMN_PORT, KEYPAD_COLUM_3, OUTPUT );

	DIO_voidSetPinValue(COLUMN_PORT, KEYPAD_COLUM_0, HIGH);
	DIO_voidSetPinValue(COLUMN_PORT, KEYPAD_COLUM_1, HIGH);
	DIO_voidSetPinValue(COLUMN_PORT, KEYPAD_COLUM_2, HIGH);
	DIO_voidSetPinValue(COLUMN_PORT, KEYPAD_COLUM_3, HIGH);

	DIO_voidSetPinDirection(ROW_PORT, KEYPAD_ROW_0, INPUT);
	DIO_voidSetPinDirection(ROW_PORT, KEYPAD_ROW_1, INPUT);
	DIO_voidSetPinDirection(ROW_PORT, KEYPAD_ROW_2, INPUT);
	DIO_voidSetPinDirection(ROW_PORT, KEYPAD_ROW_3, INPUT);


	DIO_SetPullUpRes(ROW_PORT, KEYPAD_ROW_0);
	DIO_SetPullUpRes(ROW_PORT, KEYPAD_ROW_1);
	DIO_SetPullUpRes(ROW_PORT, KEYPAD_ROW_2);
	DIO_SetPullUpRes(ROW_PORT, KEYPAD_ROW_3);


}

u8 KeyPad_GetChar(void)
{
	u8 COLUMNS[]={7,6,5,3};
	u8 ROWS[]={5,4,3,2};
	u8 i  = 0;
	u8 j  = 0;

	u8 Temp , Value = ' ';

	for(i=0 ;i<4 ;i++ )//colunm
	{
		DIO_voidSetPinValue(COLUMN_PORT, COLUMNS[i], LOW);

		for(j=0 ;j<4 ;j++) //rows
		{
			Temp = DIO_u8GetPinValue(ROW_PORT, ROWS[j]);
			_delay_ms(5);
			
			if(Temp==0)
			{
				_delay_ms(5);
				Value = KeyPad_Values[i][j];
			}
			while(Temp==0)
			{
				Temp = DIO_u8GetPinValue(ROW_PORT, ROWS[j]);
			}

		}
		DIO_voidSetPinValue(COLUMN_PORT, COLUMNS[i], HIGH);
	}
	return Value;


}
