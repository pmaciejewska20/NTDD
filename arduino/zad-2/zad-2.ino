//UART - SENDING TEXT TO COMPUTER

void setup()
{
  Serial.begin(9600);   // Setting the baud rate
  Serial.println("Welcome in Forbot!"); //One-time text sending
}

void loop() 
{
 delay(5000);
 Serial.println("5 seconds have passed!");    //Sending in loop

}
