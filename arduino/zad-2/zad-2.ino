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
  if(digitalRead(7) == LOW)
  {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    Serial.println("The window is OPEN!!!");
    delay(5000);
  }
  
  else
  {
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    Serial.println("ATTENTION! ALARM! The window is closed");
    delay(5000);
  }
}
