/*
  7053275_Arun_Kuttiyara_Varghese_Lab3_Task5
  Code which will gradually increase the led brightness from 0% to 100% with a dealy of 4 ms in between stages. 
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
//  analogWrite Writes an analog value (PWM wave) to a pin. Can be used to light a LED at varying brightnesses or drive a motor at various speeds. 
// for loop is used to gradually increase the brightness
  for(int i=0;i<=255;i++){
    analogWrite(led,i);
    delay(4);
  }
}



