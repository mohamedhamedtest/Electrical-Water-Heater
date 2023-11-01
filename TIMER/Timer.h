/*
 * Timer.h
 *
 *  Author: GAZAR
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "../LIB/std_macros.h"

/************* FUNCTIONS ************/
/*
	Function Name        : timer1_init
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To initialize timer(1) to measure time between tasks every 1ms.
*/
void timer1_init(void);
/*
	Function Name        : sys_init
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To initialize timer(0) to trigger INT every 100ms to get Temp.
*/
void timer0_init(void);
/*
	Function Name        : timer1_INT_disable
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To stop timer(1) from triggering INTERRUPTS.
*/
void timer1_INT_disable(void);
/*
	Function Name        : timer1_INT_enable
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To make timer(1) start.
*/
void timer1_INT_enable(void);

//#include "Timer.c"
#endif /* TIMER_H_ */
