/*
 * ssd.h
 *
 *  Author: GAZAR
 */ 


#ifndef SSD_H_
#define SSD_H_


#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "../LIB/std_macros.h"
	
// SSD Display Macros
#define DISP1 1
#define DISP2 2

#define SSD_ENABLE_PORT_DIR DDRB
#define SSD_ENABLE_PORT PORTB
#define SSD1_ENABLE_PIN 6 
#define SSD2_ENABLE_PIN 7
#define SSD_DATA PORTD
#define SSD_PORT_DIR DDRD

/****** Array for Numbers' Values******/
uint8_t Nums[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

/************* FUNCTIONS ************/
/*
	Function Name        : SSD_init
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To initialize the Seven Segment by making its port OUTPUT.
*/
void SSD_init(void);
/*
	Function Name        : SSD_send
	Function Returns     : void
	Function Arguments   : uint16_t 
	Function Description : To Upload data (Number) to the Seven Segment.
*/
void SSD_send(uint16_t);
/*
	Function Name        : SSD_enable
	Function Returns     : void
	Function Arguments   : uint8_t 
	Function Description : the 2 seven seg. are multiplexed and works with the same pins.
						   So, this function is to enable one and disable the other.
*/
void SSD_enable(uint8_t);
/*
	Function Name        : SSD_disable
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To disable the two seven segments for some special cases.
*/
void SSD_disable(void);
/*
	Function Name        : SSD_turn_off
	Function Returns     : void
	Function Arguments   : void 
	Function Description : To turn off the Seven Segment in the OFF STATE.
*/
void SSD_turn_off(void);
/*
	Function Name        : SSD_write
	Function Returns     : void
	Function Arguments   : uint16_t 
	Function Description : To calculate what to write on each of the two SSDs, and send.
*/
void SSD_write(uint16_t);

//#include "SSD_disp.c"
#endif /* SSD_H_ */
