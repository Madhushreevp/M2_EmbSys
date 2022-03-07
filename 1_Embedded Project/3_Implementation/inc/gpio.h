/******************************************************************************
 *
 * Module: GPIO
 *
 * File Name: gpio.h
 *
 * Description: Source file for the AVR GPIO driver
 *
 *******************************************************************************/

 #include<avr/io.h>              
 #include<util/delay.h>         
 #include<stdlib.h>            
 
 #define lcd_port PORTD           
 #define lcd_data_dir  DDRD     
 #define rs PD0                  
 #define en PD1                  
 
 #define US_PORT PORTC          
 #define US_PIN	PINC            
 #define US_DDR DDRC            
 
 #define US_TRIG_POS	PC0        
 #define US_ECHO_POS	PC1         
 
 #define led1 PC2               
 #define led2 PC3                
 #define led3 PC4
 #define led4 PC5
 #define led5 PD2
 
 #define US_ERROR		-1       
 #define US_NO_OBSTACLE	-2