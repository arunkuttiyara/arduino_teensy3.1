/*
  7053275_Arun_Kuttiyara_Varghese_Lab1_Task2
  Led flashes twice very quickly and then pauses for a second before repeating.
  This example code is in the public domain.
 */
 
// Pin 13 has the LED on Teensy 3.0

int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                // wait for 1/10th of a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                // wait for 1/10th of a second
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
