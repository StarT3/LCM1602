
/*--------------

Library usage example.
download library from:
https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads

LCD screen is from ebay, but similar to:
LCD Sainsmart http://www.sainsmart.com/arduino/arduino-shields/lcd-shields/new-sainsmart-iic-i2c-twi-1602-serial-lcd-module-display-for-arduino-uno-mega-r3.html

1602 with PCF8574T  LCM1602 IIC V1
--------------------------*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 
//address lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

//#define BACKLIGHT_PIN     13

void setup()
{
  // Switch on the backlight
  
 lcd.backlight ();

  
  lcd.begin(16,2);               // initialize the lcd 

  lcd.home ();                   // go home
  lcd.print("Hello, ARDUINO ");  
  lcd.setCursor ( 0, 1 );        // go to the next line
  lcd.print (" WORLD!  ");      
}

void loop()
{

}
