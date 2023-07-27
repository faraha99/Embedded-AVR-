/*
 * main.c
 *
 * Created: 7/23/2023 3:18:39 PM
 *  Author: Owner
 */ 

#include "lcd.h"
#include <util/delay.h> 

int main(void)
{
	LCD_init(); /* Initialize the LCD */
	LCD_displayString(" hello world");
	LCD_displayStringRowColumn(1, 0, "");
	_delay_ms(1000);
	LCD_clearScreen();
	LCD_displayString(" ");
	LCD_intgerToString( 1234);
	
	_delay_ms(1000);
	LCD_clearScreen();
	LCD_sendCommand(0x40);
	uint8 customChar[8] = {
  0x0E,
  0x04,
  0x05,
  0x06,
  0x1C,
  0x04,
  0x0A,
  0x0A
};



	LCD_displayCustomCharacter(customChar);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	_delay_ms(1000);
	
	//LCD_clearScreen();
	
	
	//LCD_sendCommand(0x40);
	uint8 customChar2[8] = {
		0x0E,
		0x04,
		0x14,
		0x0C,
		0x07,
		0x04,
		0x0A,
		0x0A
	};
	
	uint8 customChar3[8] = {
		0x00,
		0x00,
		0x0E,
		0x0E,
		0x0E,
		0x05,
		0x0E,
		0x0E
	};
   
	LCD_displayCustomCharacter(customChar2);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayCustomCharacter(customChar);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	
	LCD_displayCustomCharacter(customChar2);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayCustomCharacter(customChar);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayCustomCharacter(customChar3);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayStringRowColumn(0, 6, "Hi, I'm Farah Ahmed 24  years old");
	
	_delay_ms(1000);
	
	LCD_clearScreen();
	
	
	LCD_sendCommand(0x40);
	
	LCD_displayCustomCharacter(customChar3);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayStringRowColumn(0, 6, "I'm fresh mechatronics eng.  ");
	_delay_ms(3000);
	
	LCD_clearScreen();
	
	
	LCD_sendCommand(0x40);
	
	LCD_displayCustomCharacter(customChar3);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayStringRowColumn(0, 6, "i am starting new chapter ");
	_delay_ms(3000);
	
	LCD_clearScreen();
	
	
	LCD_sendCommand(0x40);
	
	LCD_displayCustomCharacter(customChar3);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayStringRowColumn(0, 6, " in my life as an");
	_delay_ms(3000);
	
	LCD_clearScreen();
	
	
	LCD_sendCommand(0x40);
	
	LCD_displayCustomCharacter(customChar3);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	
	LCD_displayStringRowColumn(0, 6, "embedded engineer in NTI ");
	_delay_ms(3000);
	

	
	

	while(1)
	{
		
	}
	return 0;
}
