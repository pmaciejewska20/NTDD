//PWM - LED blinking
#define ledRed 10

int wypelnienie = 255;
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
  
  if (wypelnienie == 255)
  {
    while(wypelnienie != 0)
    {
      wypelnienie = wypelnienie - change;
      analogWrite(ledRed, wypelnienie);
      delay(30);
    }
  }
  delay(30);
  
}
