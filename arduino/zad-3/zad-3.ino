//LED flashing in the dark
 
int readValue = 0; 

void setup() 
{
  pinMode(8, OUTPUT);
}

void loop() 
{
  readValue = analogRead(A5);
  
  if (readValue < 100)
  {
      digitalWrite(8,HIGH);
  }
  
  else
  {
    digitalWrite(8, LOW);
  }

}
