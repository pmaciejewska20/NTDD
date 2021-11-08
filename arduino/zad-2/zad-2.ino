//BIDIRECTIONAL TRANSMISSION

String odebraneDane = ""; //Empty string of read characters

void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available() > 0)
  {
    odebraneDane = Serial.readStringUntil('\n');
    Serial.println("Hello " + odebraneDane + "!"); //show the message
  }
}
