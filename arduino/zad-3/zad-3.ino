int readValue = 0; 

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  readValue = analogRead(A5);
  Serial.println(readValue);
  delay(200);
}
