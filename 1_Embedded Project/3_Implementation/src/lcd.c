/******************************************************************************
 *
 * Module: LCD
 *
 * File Name: lcd.c
 *
 * Description: Source file for displaying distance using LCD component.
 *
 *******************************************************************************/
#include<header.h>
void initialize_lcd(void)
{
	lcd_data_dir = 0xFF;     // set the LCD pins connected on the microcontroller as output
	_delay_ms(15);          
	lcd_command(0x02);       //  returns to the first row and first column position
	lcd_command(0x28);      
	lcd_command(0x0c);
	lcd_command(0x06);       //Increment cursor 
	lcd_command(0x01);       //Clear display screen
	_delay_ms(2);
}
void lcd_command( unsigned char cmnd )
{

	lcd_port = (lcd_port & 0x0F) | (cmnd & 0xF0); 
     // writes the command on the data pins of the lcd connected to the microcontroller portD pin 4 to 7
	lcd_port &= ~ (1<<rs);
	lcd_port |= (1<<en);
	_delay_us(1);
	lcd_port &= ~ (1<<en);
	
	// wait 200 microseconds
	_delay_us(200);
	
	// send the lower 4 bit of the data
	lcd_port = (lcd_port & 0x0F) | (cmnd << 4);
	lcd_port |= (1<<en);
	_delay_us(1);
	lcd_port &= ~ (1<<en);
	_delay_ms(2);
}

void lcd_clear()
{
	lcd_command (0x01);   // clears the LCD screen
	_delay_ms(2);         // waits for two milliseconds 
	lcd_command (0x80);   // sets the cursor to the row 1 column 1
}

void lcd_output(char *str)
{
	// this function will be used to display the string on the LCD screen
	int i;
	for(i=0; str[i]!=0; i++)
	{
		
		lcd_port = (lcd_port & 0x0F) | (str[i] & 0xF0);
		lcd_port |= (1<<rs);
		lcd_port|= (1<<en);
		_delay_us(1);
		lcd_port &= ~ (1<<en);
		_delay_us(200);
		lcd_port = (lcd_port & 0x0F) | (str[i] << 4);
		lcd_port |= (1<<en);
		_delay_us(1);
		lcd_port &= ~ (1<<en);
		_delay_ms(2);
	}
}

void lcd_CursorSet(unsigned char x, unsigned char y){    //  function will  set cursor 
	unsigned char adr[] = {0x80, 0xC0};    
    // command with adding 2 with the initial value will go to the second column of first row 
	lcd_command(adr[y-1] + x-1);
	_delay_us(100);
}