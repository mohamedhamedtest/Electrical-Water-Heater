/*
 * led.h
 *
 *  Author: GAZAR
 */ 


#ifndef LED_H_
#define LED_H_


#include <avr/io.h>
#include "../LIB/std_macros.h"

/********* Define the Pins of LEDs ********/
#define LED_PORT_DIR DDRB
#define LED_PORT PORTB
#define LED_PIN 0

/************* FUNCTIONS ************/
/*
	Function Name        : led_init
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To init. heating element indication led by making it an output pin.
*/
void led_init(void);
/*
	Function Name        : led_on
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To turn on or toggle the LED.
*/
void led_on(void);
/*
	Function Name        : led_off
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To turn off or toggle the LED.
*/
void led_off(void);

//#include "LED.c"
#endif /* LED_H_ */
