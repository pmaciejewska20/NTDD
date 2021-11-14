//PWM - gradual LED lightening(without 'if')
#define ledRed 10

byte wypelnienie = 0;
int change = 5;
void setup() 
{
  pinMode(ledRed, OUTPUT);
}

void loop() 
{
  analogWrite(ledRed, wypelnienie);
  wypelnienie = wypelnienie + change;

  delay(30);
}
