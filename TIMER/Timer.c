/*
 * Timer.c
 *
 *  Author: GAZAR
 */ 


#include "Timer.h"

void timer1_init(void)
{
	
	// we are working with AVR ATmega32 chip with a frequency of 1 MHz
	// It triggers an interrupt every One millisecond
	
	
	// Select CTC Mode
	set_bit(TCCR1B,WGM12);
	
	
	// Load Value in OCR1A
	OCR1AH = 0b00000000;
	OCR1AL = 0b01100010;
	/*
	// Load Value in OCR1B
	OCR1BH = 0b00000011;
	OCR1BL = 0b11010001;
	*/
	// Select Clock Prescaler (F_CPU / 1024)
	set_bit(TCCR1B,CS10);
	clr_bit(TCCR1B,CS11);
	set_bit(TCCR1B,CS12);
	
	// Enable Global Interrupt bit
	sei();

}

void timer0_init(void)
{
	
	// choose mode
	set_bit(TCCR0,WGM01);
	
	// Load Value in OCR0
	OCR0 = 250;
	
	// Choose Prescaler
	set_bit(TCCR0,CS00);
	set_bit(TCCR0,CS02);
	
	// Enable Timer INT
	sei();
	set_bit(TIMSK,OCIE0);
	
}

void timer1_INT_disable(void){
	
	// Disable Interrupts when Comparing with values A and B
	clr_bit(TIMSK,OCIE1A);
	//clr_bit(TIMSK,OCIE1B);
}

void timer1_INT_enable(void){
	
	// Enable Interrupts when Comparing with values A and B
	set_bit(TIMSK,OCIE1A);
	//set_bit(TIMSK,OCIE1B);
}
