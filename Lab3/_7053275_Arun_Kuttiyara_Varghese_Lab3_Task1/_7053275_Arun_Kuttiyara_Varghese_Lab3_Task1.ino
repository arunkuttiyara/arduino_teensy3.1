/*
  7053275_Arun_Kuttiyara_Varghese_Lab3_Task2
  Led flashes twice very quickly and then pauses for a second before repeating.
  This example code is in the public domain.
 */
 
// Pin 14-23 are GPIO pins of LED 
//So here we are taking GPIO pin 14

int led = 14;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

//function to alternatly blink LED with a delay
//blinking time can be given as an arguement 
int8_t led_Double_Blink(int8_t time);

// the loop routine runs over and over again forever:
void loop() {
 
  led_Double_Blink(100);
  //calling the function to blink LED twice with blinking time as an arguement

}

int8_t led_Double_Blink(int8_t time){

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time);                // wait for 1/10th of a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(time);                // wait for 1/10th of a second
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time);                // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  return 0;
}
