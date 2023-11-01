/*
 * main.c
 *
 *  Author: GAZAR
 */ 
#include "main.h"

int main(void){
	
	sys_init();
	
	while(1){
		switch (Curr_state)
		{
			case ON:
			{
				ON_state();
				break;
			}
			case OFF:
			{
				OFF_state();
				break;
			}
			case SETTING:
			{
				SET_state();
				break;
			}
			default :
			{
				//Nothing
				break;
			}
		}	
	}
	
	return (0);
}


/******ON/OFF Button ISR********/

ISR(INT2_vect){
	if(Curr_state==OFF){
		Curr_state = ON;
		desired_temp = EEPROM_read(0x0000);
	}
	else if (Curr_state==ON || Curr_state==SETTING){
		Curr_state = OFF;
	}
}

/****TIMER1_ISR (A) : It triggers the ISR every 100ms. So, it makes the temperature
measure flag equals one to enable the ADC to do the work.*****/

ISR(TIMER1_COMPA_vect){
	temp_measure_f = 1;
}

/*****TIMER1_ISR (B) : It triggers the ISR every 1 second. So, it toggles the
toggle flag for the LED and the Seven Segment. and counts to keep it in
ON_STATE if nothing is pressed during in ON or SETTING modes for 5 secs.
**********/

ISR(TIMER0_COMP_vect){	
	if ((Curr_state==SETTING) || (Curr_state==ON)){
		setting_counter++;
		if(setting_counter % 4 == 0){
			toggle_f ^= 1;
		}
		if (setting_counter > 20){
			
			// Write the new desired temperature in EEPROM			
			Curr_state = ON;
		}
	}
}
