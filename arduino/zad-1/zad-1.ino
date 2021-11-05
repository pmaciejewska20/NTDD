void setup() {
  pinMode(8, OUTPUT);   //dioda jako wyjscie
  pinMode(7, INPUT_PULLUP);   //przycisk jako wejscie
  digitalWrite(8, LOW);   //wylaczenie diody
  
}

void loop() {

  if(digitalRead(7) == LOW) {   //jesli przycisk wcisniety
    digitalWrite(8, HIGH);    //wlacz diode
    delay(1000);
  }
  else {    //jesli warunek nie zostal spelniony (przycisk nie jest wcisniety)
    digitalWrite(8, LOW);   //wylacz diode
  }
}
