//PWM - gradual LED lightening
#define ledRed 10

int wypelnienie = 0;
int change = 5;
void setup() 
{
  pinMode(ledRed, OUTPUT);
}

void loop() 
{
  analogWrite(ledRed, wypelnienie);
  if (wypelnienie < 255)
  {
    wypelnienie = wypelnienie + change;
  }
  else
  {
    wypelnienie = 0;
  }
  delay(50);
}
