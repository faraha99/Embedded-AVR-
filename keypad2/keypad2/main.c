/*
 * main.c
 *
 * Created: 7/24/2023 11:28:13 AM
 *  Author: Owner
 */ 
#include "lcd.h"
#include "KEYPAD.h"


#include <util/delay.h> 

int main(void)
{
	unsigned char key,key1,key2,result;
	LCD_init();
	KeyPad_Init();


	LCD_moveCursor(0,0); 
	
	key = KeyPad_GetChar();

	
		LCD_intgerToString(key);
		
		
		_delay_ms(100);
	

	while(1)
	{
		
		

			LCD_displayString(" +, -, *, /):");
			key = KeyPad_GetChar();
			_delay_ms(100);
			
			LCD_displayString(" Enter two operands: ");
			key1 = KeyPad_GetChar();
			key2 = KeyPad_GetChar();
          _delay_ms(100);
			switch (key) {
				case '+':
				result=  key1 + key2;
				LCD_intgerToString(result);
				_delay_ms(100);
				break;
				case '-':
				result= key1 - key2;
				LCD_intgerToString(result);
				_delay_ms(100);
				break;
				case '*':
				result= key1 * key2;
				LCD_intgerToString(result);
				_delay_ms(100);
				break;
				case '/':
			
				result= key1 / key2;
				LCD_intgerToString(result);
				_delay_ms(100);
				break;
				// operator doesn't match any case constant
				default:
				LCD_displayString("Error! operator is not correct");
				_delay_ms(100);
			}
			

			return 0;
		}
}
		
	

