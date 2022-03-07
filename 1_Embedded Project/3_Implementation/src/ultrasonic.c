/******************************************************************************
 *
 *Module: Ultrasonic sensor
 *
 * File Name: ultrasonic.c
 *
 * Description: Source file for Ultrasonic sensor functions.
 *
 *******************************************************************************/
#include<header.h>

void HCSR04Initialise()
{
	
	//  setting the trigger pin as output 
	US_DDR|=(1<<US_TRIG_POS);
}

void HCSR04Trigger()
{   // generates ultrasonic sound wave for 15 microseconds 
	//Send a 10uS pulse on trigger line
	
	US_PORT|=(1<<US_TRIG_POS);	//high
	
	_delay_us(15);				//wait 15uS
	
	US_PORT&=~(1<<US_TRIG_POS);	//low
}

uint16_t GetPulseWidth()
{
	//function to measure the pulse duration. When the ultra sound echo back after hitting an object
	// the microcontroller will read the pulse using the echo pin of the ultrasonic sensor connected to it. 
	
	uint32_t i,result;

	// checking if the ultrasonic is working or not
	// its check the echo pin for a certain amount of time. 
    //If there is no signal it means the sensor is not working or not connect properly
	for(i=0;i<600000;i++)
	{
		if(!(US_PIN & (1<<US_ECHO_POS)))
		continue;	
		else
		break;		
	}

	if(i==600000)
	return US_ERROR;	//Indicates time out
		
	// timer for counting the time of the pulse
	//Setup Timer1
	TCCR1A=0X00;
	TCCR1B=(1<<CS11);	
	TCNT1=0x00;			

	// checks weather the there is any object or not
	for(i=0;i<600000;i++)               
	{
		if(US_PIN & (1<<US_ECHO_POS))
		{
			if(TCNT1 > 60000) break; else continue;   
		}
		else
		break;
	}

	if(i==600000)
	return US_NO_OBSTACLE;	//Indicates time out

	result=TCNT1;          // stores the the value of the counted pulse time in the TCNT1 register

	TCCR1B=0x00;

	if(result > 60000)
	return US_NO_OBSTACLE;	//No obstacle
	else
	return (result>>1);
}
