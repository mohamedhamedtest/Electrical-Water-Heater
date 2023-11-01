/*
 * led.c
 *
 *  Author: GAZAR
 */ 


#include "LED.h"

void led_init(void){
	
	// PIN 0 in the port is an output pin
	// the LED pin is initially off
	
	set_bit(LED_PORT_DIR,LED_PIN);
	clr_bit(LED_PORT,LED_PIN);

}

void led_on(void){
	set_bit(LED_PORT,LED_PIN);
}

void led_off(void){
	clr_bit(LED_PORT,LED_PIN);
}
