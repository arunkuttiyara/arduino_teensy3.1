/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_Task3
  Program to print value read from analogue pin , in decimal and hex format
 */

// pin 14 have the capability to play tone function in Adruino.
int8_t analogue_pin = 14;

int input_v;

char strBuffer[100];


// the setup routine runs once when you press reset:
void setup() {                 
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
input_v= analogRead(analogue_pin);
sprintf(strBuffer,"Value read in decimal:%d value read in hex: %x \n",input_v,input_v);
Serial.print(strBuffer);
delay(1000);
}

