//LEDs control by UART (Universal Asynchronous Receiver/Transmitter) + message added + opposite state

#define pinLedGreen 10
#define pinLedRed 9

String odebraneDane = ""; //Empty string of read characters
bool onGreen = true;
bool onRed = true;

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
      onGreen = !onGreen;
      digitalWrite(pinLedGreen, onGreen);
    }
    else if (odebraneDane == "pinLedRed")
    {
      digitalWrite(pinLedRed, HIGH);
      delay(1000);
      onRed = !onRed;
      digitalWrite(pinLedRed, onRed);
    }
     else
    {
      Serial.println("Sorry, you've entered wrong color.");
    }
  }
}
