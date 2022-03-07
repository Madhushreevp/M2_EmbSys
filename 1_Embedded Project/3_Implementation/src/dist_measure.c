/******************************************************************************
 *
 *Module: Distance calculation
 *
 * File Name: dist_measure.c
 *
 * Description: Source file for calculating distance.
 *
 *******************************************************************************/
#include<header.h>

int distance, previous_distance;
{          
    distance=(r*0.034/2.0);	
	  if (distance != prev_distance)    
		{
		 lcd_clear();
		}
                
		lcd_CursorSet(1, 1);      
		lcd_output("Distance = ");
		lcd_CursorSet(12, 1);      
		itoa(distance, numberString, 10);    
		lcd_output(numberString);
		lcd_CursorSet(14, 1);      
		lcd_output(" cm");
	prev_distance = distance;
	_delay_ms(30);
}