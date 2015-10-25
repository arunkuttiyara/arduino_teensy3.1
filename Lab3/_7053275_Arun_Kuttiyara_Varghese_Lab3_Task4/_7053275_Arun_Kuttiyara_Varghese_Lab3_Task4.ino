/*
  7053275_Arun_Kuttiyara_Varghese_Lab3_Task4
 Program which flashes the led at 50% brightness for 250 ms
 & the flashes the LED at 100% brightness for 500ms
 
 */
 
//to get PWM feature we need to take pin 20-23
int led = 20;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led,OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {  
//  Writes an analog value (PWM wave) to a pin. Can be used to light a LED at varying brightnesses or drive a motor at various speeds. 
  analogWrite(led,127);
  delay(250);
  analogWrite(led,255);
  delay(500);
}



