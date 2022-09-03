/*To blink the LED*/

void setup() 
{
  // configure pin2 as output pin
  pinMode(2, OUTPUT); 
  
}

void loop() 
{
  // Turn ON the LED
  digitalWrite(2, HIGH);
  delay(1000);

  // Turn OFF the LED
  digitalWrite(2, LOW);
  delay(1000);  

}
