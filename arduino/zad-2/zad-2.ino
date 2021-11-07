//COUNTER - variable initialization moved to the loop --> gives only zeros

void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  int licznik = 0;
  Serial.println(licznik);
  licznik++;
  delay(100);
}
