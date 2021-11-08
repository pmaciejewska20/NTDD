//flashing LED with fraquency managed by potentiometer
 
int readValue = 0; 

void setup() 
{
  pinMode(2, OUTPUT);
}

void loop() 
{
  readValue = analogRead(A5);
  digitalWrite(2,HIGH);
  delay(readValue);
  digitalWrite(2, LOW);
  delay(readValue);
}
