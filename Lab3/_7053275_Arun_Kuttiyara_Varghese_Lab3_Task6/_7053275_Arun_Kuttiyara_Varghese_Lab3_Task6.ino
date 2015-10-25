/*
  7053275_Arun_Kuttiyara_Varghese_Lab3_Task6
  Code which will basically replicate the heartbeating !
 */
 
//to get PWM feature we need to take pin 20-23
int led = 20;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led,OUTPUT);   
}

//function used to increase led brightness from 0 to 100 %, with delay as an arguement. 
int8_t led_zero_to_full_bright(int8_t );

// the loop routine runs over and over again forever:
void loop() {  
   led_zero_to_full_bright(1);
  delay(250);
  led_zero_to_full_bright(2);  
  delay(500);
}

int8_t led_zero_to_full_bright(int8_t delay_time){
// analogWrite Writes an analog value (PWM wave) to a pin. Can be used to light a LED at varying brightnesses or drive a motor at various speeds. 
// for loop is used to gradually increase the brightness
  for(int i=0;i<=255;i++){
    analogWrite(led,i);
    delay(delay_time);
  }
}

