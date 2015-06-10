
#include "DigiLED.h"

#define color_def 510

typedef struct hsv_data{
	uint16_t hue;
	uint8_t sat;
	uint8_t val;
}HSV_DATA;

HSV_DATA running_digi[15] = {
	{color_def, 255, 180},	//green
	{color_def, 255,  50},	//green
	{color_def, 255,  45},	//green
	{color_def, 255,  40},	//green
	{color_def, 255,  35},	//green
	{color_def, 255,  30},	//green
	{color_def, 255,  25},	//green
	{color_def, 255,  20},	//green
	{color_def, 255,  15},	//green
	{color_def, 255,  10},	//green
	{color_def, 255,   5},	//green
	{color_def, 255,   5},	//green
	{color_def, 255,   0},	//black
	{color_def, 255,   0},	//black
	{color_def, 255,   0},	//black
};

int main(){
	int i, j, color_index=0, rot_index=0;

    set_leds(225);

    enable_leds();

    while(1){
		for(i=0; i<numberOfLEDs; i++){
			if(color_index == 15)
				color_index = 0;

			HSVsetLEDColor(i,
				running_digi[(color_index+rot_index)%15].hue,
				running_digi[(color_index+rot_index)%15].sat,
				running_digi[(color_index+rot_index)%15].val
			);

			color_index++;

		}

		if(rot_index == 15)
			rot_index = 0;

		rot_index++;

		for(j=0;j<350000;j++);
    }
}
