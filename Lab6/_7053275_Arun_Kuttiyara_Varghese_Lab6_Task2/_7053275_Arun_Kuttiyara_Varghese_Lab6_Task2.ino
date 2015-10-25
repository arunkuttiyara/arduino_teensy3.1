
/*
  7053275_Arun_Kuttiyara_Varghese_Lab6_Task1 
 */

// pin 20-25 have capability to perform PWM in arduino
int8_t led_1=23;
int8_t led_2=24;
int8_t led_3=25;

int8_t led;  //global variable used to store respective led pin number 

// funnction to read serail values from the console and controls the the Led Flash
int8_t readSerial_and_control_LED();  
int8_t led_ON(int8_t,int32_t);
int8_t led_OFF(int8_t,int32_t);

void setup()
{

  //Enabling serial communiction in arduino
  Serial.begin(9600);

  // initialize the digital pin as an output.
  pinMode(led_1,OUTPUT);     
  pinMode(led_2,OUTPUT);     
  pinMode(led_3,OUTPUT);     

}

void loop()
{

  // funnction to read serail values from the console and controls the the Led Flash
  readSerial_and_control_LED();
}

int8_t readSerial_and_control_LED(){

  int32_t incomingValue_1,incomingValue_2;   //variables to store values from serial

  if (Serial.available() > 0 ) //then chars are in the serial buffer
  {

    incomingValue_1 = Serial.parseInt();
    incomingValue_2 = Serial.parseInt();
    incomingValue_3 = Serial.parseInt();

    Serial.print("You entered: ");
    Serial.println(incomingValue_1,incomingValue_2);

    if(1 == incomingValue_1 || 2 == incomingValue_1 || 3 == incomingValue_1){

      switch(incomingValue_1){
      case 1 : 
        led=led_1;
        break;
      case 2 : 
        led=led_2; 
        break;
      case 3 : 
        led=led_3; 
        break;      
      default: 
        Serial.println(" out of range led values");            
      }

      if(0 == incomingValue_2)
        led_OFF(led);
      else if(1 == incomingValue_2) 
        led_ON(led);
    }
  }  
}


int8_t led_ON(int32_t led,int32_t brightness){

  Serial.println("LED_ON ..... ");

  // do analogue write here
  //delay(1000);
}

int8_t led_OFF(int32_t led,int32_t brightness){

  Serial.println("LED_OFF ..... ");
  // do analogue write here
  //  delay(1000);
}


















