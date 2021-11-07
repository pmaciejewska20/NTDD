//COUNTER
int licznik = 0;

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
