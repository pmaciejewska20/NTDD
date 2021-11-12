//simple game

#define ledGreen 8
#define ledYellow 9
#define ledRed 10
#define button 11

int enteredNumberInt = 0;
String enteredNumber = "";
int readValue = 0; 
byte tries = 2;
boolean startAgain = true;


void setup() 
{
  Serial.begin(9600);
  
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  
  pinMode(button, INPUT_PULLUP); //button

  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);
}

void loop() 
{
  if (startAgain == true)
  {
    Serial.println("Turn the potentiometer and press the button. ");
    
    while (digitalRead(button) == LOW) delay(25);
    while (digitalRead(button) == HIGH) delay(250);
    readValue = analogRead(A5);
    Serial.println(readValue);
    Serial.println("Enter the number between 0 and 1023: ");
    delay(100);
    //Serial.println(enteredNumber);
  }

  
  while (Serial.available() == 0);
  enteredNumber = Serial.readStringUntil('\n');
  enteredNumberInt = enteredNumber.toInt();
    
    
  if ((readValue - enteredNumberInt  <= 50) && (readValue - enteredNumberInt  >= -50))
  {
      digitalWrite(ledGreen, HIGH);
      Serial.println("Great, You won!");
      delay(500);
      digitalWrite(ledGreen, LOW);
      startAgain = true;
   }
   
   else
   {
      if (tries > 0)
      {
        startAgain = false;
        digitalWrite(ledYellow, HIGH);
        delay(500);
        Serial.println("You have another chance, enter the number:");
        tries--;
        digitalWrite(ledYellow, LOW);
        while(Serial.available() == 0);
      }
      
      else
      {
        digitalWrite(ledRed, HIGH);
        delay(500);
        Serial.println("You lost, press the button to try again.");
        digitalWrite(ledRed, LOW);
      }
    }
  delay(25);
}
