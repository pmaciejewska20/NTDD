//PWM 
#define ledRed 10
void setup() 
{
  pinMode(ledRed, OUTPUT);
}

void loop() 
{
 digitalWrite(ledRed, HIGH);
 delay(1667);
 digitalWrite(ledRed, LOW);
 delay(333);
}
