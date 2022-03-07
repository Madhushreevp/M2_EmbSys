/******************************************************************************
 *
 * Module: Header
 *
 * File Name: header.h
 *
 * Description: Source file for all the libraries needed.
 *
 *
 *******************************************************************************/
#include<avr/io.h>             // This header file includes the appropriate Input/output definitions for the device 
#include<util/delay.h>         // to use delay function we need to include this library
#include<stdlib.h>             //function to convert integer to array that resides in this library
#define lcd_port PORTD          
#define lcd_data_dir  DDRD      
#define rs PD0 
#define en PD1
#define US_PORT PORTC           
#define	US_PIN	PINC            
#define US_DDR 	DDRC   
#define US_TRIG_POS	PC0        
#define US_ECHO_POS	PC1          
#define led1 PC2                
#define led2 PC3    
#define led3 PC4            
#define led4 PC5
#define led5 PD2
#define US_ERROR		-1       
#define	US_NO_OBSTACLE	-2
int distance, previous_distance;
void HCSR04Init();
void HCSR04Trigger();
void lcd_command( unsigned char );
void HCSR04Init();
void HCSR04Trigger();
uint16_t GetPulseWidth();
void initialize (void);
void lcd_command( unsigned char cmnd );
void lcd_clear();
void lcd_print (char *str);
void lcd_setCursor(unsigned char x, unsigned char y);
