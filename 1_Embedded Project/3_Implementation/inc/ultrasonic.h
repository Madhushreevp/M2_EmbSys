/******************************************************************************
 *
 * Module: Ultrasonic
 *
 * File Name: ultrasonic.h
 *
 * Description: Header file for the ultrasonic driver
 *
 *******************************************************************************/
#define US_PORT PORTC           
#define	US_PIN	PINC            
#define US_DDR 	DDRC
#define US_TRIG_POS	PC0         
#define US_ECHO_POS	PC1 
#define US_ERROR	   -1      
#define	US_NO_OBSTACLE -2
void HCSR04Initialise();
void HCSR04Trigger();
