/*To blink the LED*/

 // configure pin2 as output pin for LED
const int LED = 2;

void setup() 
{
 
  pinMode(LED, OUTPUT);   //Here, the mode of the pin in which LED is connected and will give output.
  
}

void loop() 
{
  // Turn ON the LED
  digitalWrite(LED, HIGH);
  delay(1000);

  // Turn OFF the LED
  digitalWrite(LED, LOW);
  delay(1000);  

}
