

/***************************** Include Files *******************************/
#include "DigiLED.h"

/************************** Function Definitions ***************************/

int numberOfLEDs;

void set_leds(int number_of_LEDs){
    numberOfLEDs = number_of_LEDs;
}

void enable_leds(){
    *((u32*) DIGILED_BASE_ADDR) = 0x1;
}

void disable_leds(){
    *((u32*) DIGILED_BASE_ADDR) = 0x0;
}

//////HSV commands////////
void HSVsetLEDColor(uint16_t number, uint16_t hue, uint8_t sat, uint8_t val){
	if(number < numberOfLEDs){
		*((u32*) ((DIGILED_BASE_ADDR+16) + (4*number))) = (hue<<16 | sat<<8 | val);
	}
}

void HSVclear(void){
	int i;

	for(i=0;i<numberOfLEDs;i++)
		HSVsetLEDColor(i,0,0,0);
}

////////RGB commands///////////
void RGBsetLEDColor(uint16_t number, uint8_t red, uint8_t green, uint8_t blue){
   	if(number < numberOfLEDs){
   		*((u32*) ((DIGILED_BASE_ADDR+16) + (4*number))) = (red<<16 | green<<8 | blue);
  	}
}

void RGBclear(void){
	int i;

	for(i=0;i<numberOfLEDs;i++)
		RGBsetLEDColor(i,0,0,0);
}
