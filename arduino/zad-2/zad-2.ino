//UART - LEDs + ANNOUCEMENT

void setup()
{
  Serial.begin(9600);   // Setting the baud rate
  
  pinMode(9, OUTPUT);   //red LED
  pinMode(10, OUTPUT);    //green LED
  pinMode(7,INPUT_PULLUP);    //button

  digitalWrite(9, LOW); //Both LEDs off
  digitalWrite(10, LOW);
}

void loop() 
{
  if(digitalRead(7) == LOW) //if button is pressed
  {
    digitalWrite(10, HIGH);   //green LED on
    digitalWrite(9, LOW);   //red LED off
    Serial.println("The window is OPEN!!!");    //annoucement
    delay(500);
  }
  
  else                      // if button isn't pressed
  {
    digitalWrite(10, LOW);    //green LED on
    digitalWrite(9, HIGH);    //red LED off
    Serial.println("ATTENTION! ALARM! The window is closed");   //annoucement
    delay(100);

    while(digitalRead(10) == HIGH)
    {
      delay(30);
    }
  }
}
