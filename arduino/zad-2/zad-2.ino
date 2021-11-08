//COUNTER - changing integer variable type on byte type 
//--> after reaching 255 counter backs to 0

byte licznik = 0;

void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(licznik);
  licznik++;
  delay(100);
}
