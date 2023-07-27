/*
 * main.c
 *
 * Created: 7/26/2023 11:40:53 AM
 *  Author: Owner
 */ 

#include "lcd.h"

#include <util/delay.h> 
#include <avr/io.h>

#define BUTTON1_PIN PD0
#define BUTTON2_PIN PD1



int main(void)
{
	// Setup button pins as input
	
	LCD_init(); /* Initialize the LCD */
	
	// Set button pins as inputs
	DDRB &= ~(1 << BUTTON1_PIN);
	DDRB &= ~(1 << BUTTON2_PIN);

	// Enable internal pull-up resistors for button pins
	PORTB |= (1 << BUTTON1_PIN);
	PORTB |= (1 << BUTTON2_PIN);
	
	uint8 customChar[8] = {
  0x00,
  0x00,
  0x0E,
  0x0E,
  0x0E,
  0x00,
  0x00,
  0x00
};



	LCD_displayCustomCharacter(customChar);
	
	LCD_sendCommand(0x85);
	
	LCD_displayCharacter(0);
	//_delay_ms(1000);
	_delay_ms(1000);
	
	LCD_clearScreen();
	
	LCD_sendCommand(0x40);
	
	int score1,score2=0;
	
	while(1)
	{
		
	
	
		int x, y=0;
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		 
		if(score1==5 || score2==5)
		{
			return 0;
		}
		 
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		 if(score1==5 || score2==5)
		 {
			 return 0;
		 }
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		 if(score1==5 || score2==5)
		 {
			 return 0;
		 }
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==8)
		{
			score1++;
			y++;
			x=0;
		}else
		{
			x=x+4;
		}
		
		 if(score1==5 || score2==5)
		 {
			 return 0;
		 }
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		 
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		 if(score1==5 || score2==5)
		 {
			 return 0;
		 }
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		 if(score1==5 || score2==5)
		 {
			 return 0;
		 }
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		if (x==0)
		{
			score2++;
			y--;
			x=8;
		}else
		{
			x=x-4;
		}
		
		if(score1==5 || score2==5)
		{
			return 0;
		}
		
		LCD_displayCustumCharaterRowColumn(y,x,customChar);
		LCD_sendCommand(0x85);
		LCD_displayCharacter(0);
		
		_delay_ms(1000);
		
		LCD_clearScreen();
		
		LCD_sendCommand(0x40);
		
		
		}
		
		if(score1>score2)
		{
			LCD_displayString(" player 1 is the winner");
			_delay_ms(3000);
		} else{
			LCD_displayString(" player 2 is the winner");
			_delay_ms(3000);
		}
	return 0;
}
