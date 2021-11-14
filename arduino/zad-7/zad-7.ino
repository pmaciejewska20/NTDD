//LCD (on/off)
#include <LiquidCrystal.h> // adding library
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup() 
{
 lcd.begin (16,2);              //type declaration
 lcd.setCursor(0,0);            //cursor setting
 lcd.print("Welcome");     //Text display
 lcd.setCursor(0,1);            //cursor setting
 lcd.print("On FORBOT!");     // Text display
 lcd.blink();
}

void loop() 
{
   lcd.display();
   delay(1000);
   lcd.noDisplay();
   delay(1000);
   
}
