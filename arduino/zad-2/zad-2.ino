//UART - LEDs + ANNOUCEMENT + #define directive
#define buttonPin 7
#define ledPinRed 9
#define ledPinGreen 10 

void setup()
{
  Serial.begin(9600);   // Setting the baud rate
  
  pinMode(ledPinRed, OUTPUT);   //red LED
  pinMode(ledPinGreen, OUTPUT);    //green LED
  pinMode(buttonPin,INPUT_PULLUP);    //button

  digitalWrite(ledPinRed, LOW); //Both LEDs off
  digitalWrite(ledPinGreen, LOW);
}

void loop() 
{
  if(digitalRead(buttonPin) == LOW) //if button is pressed
  {
    digitalWrite(ledPinGreen, HIGH);   //green LED on
    digitalWrite(ledPinRed, LOW);   //red LED off
    Serial.println("The window is OPEN!!!");    //annoucement
    delay(500);
  }
  
  else                      // if button isn't pressed
  {
    digitalWrite(ledPinGreen, LOW);    //green LED on
    digitalWrite(ledPinRed, HIGH);    //red LED off
    Serial.println("ATTENTION! ALARM! The window is closed");   //annoucement
    delay(100);

    while(digitalRead(buttonPin) == HIGH)
    {
      delay(30);
    }
  }
}
