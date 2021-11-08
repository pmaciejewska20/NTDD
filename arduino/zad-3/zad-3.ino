//using simple ADC program to create simple voltometer
 
int readValue = 0; 
float voltage = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  readValue = analogRead(A5);
  voltage = readValue * (5.0/1024.0);
  Serial.println(voltage);
  delay(200);
}
