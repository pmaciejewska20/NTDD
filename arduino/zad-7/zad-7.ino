//LCD as a voltometer
#include <LiquidCrystal.h> // adding library
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup() 
{
 lcd.begin (16,2);              //type declaration
 lcd.clear();
 lcd.setCursor(0,0);            //cursor setting
 lcd.print("read V value:");     //Text display
 lcd.setCursor(0,1);            //cursor setting
 lcd.print("0.00V");     // Text display
}

double read;

void loop() 
{
  read = analogRead(A0)*5.0/1024.0;
  lcd.setCursor(0,1);
  lcd.print(read);
  delay(250);
   
}
