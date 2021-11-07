//FLASHING LED, WHILE THE BUTTON IS PRESSED

void setup()
{
  pinMode(10, OUTPUT);   // yellow LED
  pinMode(9, OUTPUT);    // red LED

  pinMode(7, INPUT_PULLUP);   // button
  
  digitalWrite(10, LOW);   // LEDs off
  digitalWrite(9, LOW);
}

void loop() 
{
  
  while (digitalRead(7) == LOW)     // If the button is pressed
  {
    digitalWrite(10, LOW);        // red LED off
    delay(1000);
    digitalWrite(10, HIGH);        // red LED on
    delay(1000);
  }

}
