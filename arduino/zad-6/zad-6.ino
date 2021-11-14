//print function
void setup() 
{
  Serial.begin(9600); //UART initialization
}

void loop() 
{
  int potentiometer = analogRead(A5); //ADC value reading

  Serial.print("Odczyt: ");
  Serial.print(potentiometer, DEC);
  Serial.print("[DEC]\t");
  Serial.print(potentiometer, HEX);
  Serial.print("[HEX]\t");
  Serial.print(potentiometer, OCT);
  Serial.print("[OCT]\t");
  Serial.print(potentiometer, BIN);
  Serial.print("[BIN]\n");

  delay(1000);
}
