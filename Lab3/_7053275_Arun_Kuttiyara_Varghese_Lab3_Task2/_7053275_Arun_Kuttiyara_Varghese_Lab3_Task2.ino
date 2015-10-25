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
  Serial.begin(9600); 
}

//function to flash led for a particular ON and OFF time
int8_t flashLed(int32_t time);

//function to flash SOS pattern on LED
int8_t flashSOS();

// the loop routine runs over and over again forever:
void loop() {
  //calling flashSOS function to produce the SOS pattern
  flashSOS();
}

//function to flash led for a particular ON and OFF time
int8_t flashLed(int32_t ONtime,int32_t OFFtime){
  
  if ((ONtime >= 1 && ONtime <= 10000) && (OFFtime >=1 && OFFtime <= 10000)) 
  {
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(ONtime);
      digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
      delay(OFFtime);
      return 1;
  }
  else
  return -1;
}

//function to flash SOS pattern on LED
int8_t flashSOS(){
  for (int i=0;i<=8;i++)
  {
    if((i>=0 && i<=2) || (i>=6 && i<=8))
     {
       if(-1 == flashLed(200,200))
         Serial.print("error, Please check ON & OFF time values for dot \n");
     }
    else
    {
      if(-1 == flashLed(500,200))
        Serial.print("error, please check ON & OFF time values for dash \n");
    } 
    
    if(i==2 || i==5 || i== 8)
    delay(500);  
    
  }
  delay(1400);
  
  return 0;
}


















