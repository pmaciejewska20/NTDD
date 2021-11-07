//MIGANIE DIOD(DWOCH) JAK NA SWIATLACH

void setup()
{
  pinMode(9, OUTPUT);   //dioda zolta
  pinMode(10, OUTPUT);    //dioda czerwona

  pinMode(7, INPUT_PULLUP);   //przycisk
  
  digitalWrite(9, LOW);   //wylaczenie diod
  digitalWrite(10, LOW);
}

void loop() 
{

  if(digitalRead(7) == LOW) 
  {
    
    digitalWrite(9, HIGH);
    delay(1000);

    digitalWrite(10, HIGH);
    delay(1000);

    digitalWrite(9, LOW);
    delay(2000);

    digitalWrite(10, LOW);
    delay(3000);
    

    digitalWrite(10, HIGH);
    delay(1000);

    digitalWrite(10, LOW);

    digitalWrite(9, HIGH);
    delay(1000);

    digitalWrite(9, LOW);
 
  }
  

}
