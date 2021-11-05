void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);      // Wlaczenie diody
  delay(15);                //odczekanie 1 sekundy
  digitalWrite(8, LOW);       //Wylaczenie diody
  delay(15);                //odczekanie 1 sekundy
}
