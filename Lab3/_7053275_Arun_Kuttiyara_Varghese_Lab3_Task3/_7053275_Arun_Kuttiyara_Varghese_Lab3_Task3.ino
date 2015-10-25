/*
  7053275_Arun_Kuttiyara_Varghese_Lab3_Task3
 If pin 7 is connected to ground, led will be on for 500ms & off for 1000ms.
 if pin is not connected, it will flash the SOS pattern.
 */
 
// Pin 14-23 are GPIO pins of LED 
//So here we are taking GPIO pin 14
int led = 14;

//pin7 have the capability of internal pullup resistance.
int input_pin = 7; 

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led,OUTPUT);   
  pinMode(input_pin,INPUT_PULLUP);
 
}

//function to flash led for a particular ON and OFF time
int8_t flashLed(int32_t time);

//function to flash SOS pattern on LED
int8_t flashSOS();

// the loop routine runs over and over again forever:
void loop() {
  
  //check if wire is connected to ground
  if (0 == digitalRead(input_pin))
    flashLed(500,1000);
  else
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


















