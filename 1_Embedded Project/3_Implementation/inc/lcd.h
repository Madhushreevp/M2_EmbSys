/******************************************************************************
 *
 * Module: LCD
 *
 * File Name: lcd.h
 *
 * Description: Header file for the LCD driver
 *
 *******************************************************************************/
#define lcd_port PORTD
#define lcd_data_dir  DDRD      
#define rs PD0                  
#define en PD1
void lcd_command( unsigned char );
void initialize_lcd(void);
void lcd_command( unsigned char cmnd );
void lcd_clear();
void lcd_output(char *str);
void lcd_CursorSet(unsigned char x, unsigned char y);
