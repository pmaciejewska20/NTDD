//LEDs control by UART (Universal Asynchronous Receiver/Transmitter) + message added

#define pinLedGreen 10
#define pinLedRed 9

String odebraneDane = ""; //Empty string of read characters

void setup()
{
  Serial.begin(9600);
  pinMode(pinLedRed, OUTPUT);
  pinMode(pinLedGreen, OUTPUT);

  digitalWrite(pinLedRed, LOW);
  digitalWrite(pinLedGreen, LOW);
}

void loop() 
{
  if (Serial.available() > 0)
  {
    odebraneDane = Serial.readStringUntil('\n');
    
    if (odebraneDane == "pinLedGreen")
    {
      digitalWrite(pinLedGreen, HIGH);
      delay(1000);
      digitalWrite(pinLedGreen, LOW);
    }
    else if (odebraneDane == "pinLedRed")
    {
      digitalWrite(pinLedRed, HIGH);
      delay(1000);
      digitalWrite(pinLedRed, LOW);
    }
     else
    {
      Serial.println("Sorry, you've entered wrong color.");
    }
  }
}
