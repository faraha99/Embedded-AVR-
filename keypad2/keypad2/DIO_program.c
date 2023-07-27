/*
 * DIO_program.c
 *
 *
 */ 




#include <avr/io.h>
#include <stdint.h>

#include "DIO_int.h"
// Constants for pin directions
#define OUTPUT 1
#define INPUT 0

// Constants for pin values
#define HIGH 1
#define LOW 0

// Offsets for accessing the port registers
#define DDR_OFFSET 0x01 // Data Direction Register offset
#define PORT_OFFSET 0x02 // Port Register offset
#define PIN_OFFSET 0x00 // Pin Register offset

// Typedef for an unsigned 8-bit integer
typedef uint8_t u8;

// Set the direction of a specific pin on a specific port
void DIO_voidSetPinDirection(u8 PortId, u8 PinId, u8 Direction) {
	if (Direction == OUTPUT) {
		// Set the pin's corresponding bit in the data direction register to 1 for output
		*(volatile u8 *)(PortId + DDR_OFFSET) |= (1 << PinId);
		} else if (Direction == INPUT) {
		// Set the pin's corresponding bit in the data direction register to 0 for input
		*(volatile u8 *)(PortId + DDR_OFFSET) &= ~(1 << PinId);
	}
}

// Set the value of a specific pin on a specific port
void DIO_voidSetPinValue(u8 PortId, u8 PinId, u8 Value) {
	if (Value == HIGH) {
		// Set the pin's corresponding bit in the port register to 1
		*(volatile u8 *)(PortId + PORT_OFFSET) |= (1 << PinId);
		} else if (Value == LOW) {
		// Set the pin's corresponding bit in the port register to 0
		*(volatile u8 *)(PortId + PORT_OFFSET) &= ~(1 << PinId);
	}
}

// Get the value of a specific pin on a specific port
u8 DIO_u8GetPinValue(u8 PortId, u8 PinId) {
	// Read the pin's corresponding bit in the pin register
	return (*(volatile u8 *)(PortId + PIN_OFFSET) & (1 << PinId)) >> PinId;
}

// Get the value of a specific pin on a specific port and store it in a pointer
void DIO_voidGetPinValue(u8 PortId, u8 PinId, u8 *ptr) {
	// Read the pin's corresponding bit in the pin register and store it in the pointer
	*ptr = (*(volatile u8 *)(PortId + PIN_OFFSET) & (1 << PinId)) >> PinId;
}

// Set the direction of an entire port
void DIO_voidSetPortDirection(u8 PortId, u8 Direction) {
	// Set all the bits in the data direction register to 1 for output or 0 for input
	if (Direction == OUTPUT) {
		*(volatile u8 *)(PortId + DDR_OFFSET) = 0xFF;
		} else if (Direction == INPUT) {
		*(volatile u8 *)(PortId + DDR_OFFSET) = 0x00;
	}
}

// Set the value of an entire port
void DIO_voidSetPortValue(u8 PortId, u8 Value) {
	// Set all the bits in the port register to 1 or 0
	*(volatile u8 *)(PortId + PORT_OFFSET) = Value;
}

void DIO_SetPullUpRes(u8 port, u8 pin)
{
	// Set the pin as an input
	DDRB &= ~(1 << pin);

	// Enable the internal pull-up resistor
	PORTB |= (1 << pin);
}