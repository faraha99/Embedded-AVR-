/*
 * DIO_int.h
 *
 *
 */ 


#ifndef DIO_INT_H_
#define DIO_INT_H_

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
typedef unsigned char u8;

// Set the direction of a specific pin on a specific port
void DIO_voidSetPinDirection(u8 PortId, u8 PinId, u8 Direction) ;

// Set the value of a specific pin on a specific port
void DIO_voidSetPinValue(u8 PortId, u8 PinId, u8 Value) ;

// Get the value of a specific pin on a specific port
u8 DIO_u8GetPinValue(u8 PortId, u8 PinId) ;

// Get the value of a specific pin on a specific port and store it in a pointer
void DIO_voidGetPinValue(u8 PortId, u8 PinId, u8 *ptr) ;

// Set the direction of an entire port
void DIO_voidSetPortDirection(u8 PortId, u8 Direction) ;

// Set the value of an entire port
void DIO_voidSetPortValue(u8 PortId, u8 Value) ;



#endif /* DIO_INT_H_ */