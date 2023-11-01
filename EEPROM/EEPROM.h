/*
 * EEPROM.h
 *
 *  Author: GAZAR
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_

#include <avr/io.h>
#include "../LIB/std_macros.h"

/************* FUNCTIONS ************/
/*
	Function Name        : EEPROM_write
	Function Returns     : void
	Function Arguments   : const unsigned short 
						   unsigned char 
	Function Description : To write data in the EEPROM given the address and the data.
*/
void EEPROM_write(const unsigned short addr, unsigned char data);
/*
	Function Name        : EEPROM_read
	Function Returns     : unsigned char
	Function Arguments   : const unsigned short 
	Function Description : To read the data from the EEPROM given the Address.
*/
unsigned char EEPROM_read(const unsigned short addr);

//#include "EEPROM.c"
#endif /* EEPROM_H_ */
