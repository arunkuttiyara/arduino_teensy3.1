/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_Task6
  Trimming the input voltage read from a pin to 0-5 voltage range
 */
 
// pin 14 have the capability to work with analogue signals.
int8_t analogue_pin = 14;
char sbuffer[100];

int 	trimPotVoltage;
float 	trimPotVoltage0_5; // we want to trim to 0-5 range
//const	float x = 0.00488758; //scaling factor 5/1023
// NOTE :  if we use this scaling factor, MAX output value will be 4.99 only
const	float x = 0.00488759; //scaling factor 5/1023
// NOTE :  if we use this scaling factor, MAX output value will be 5.0 only

int precision = 100;

int8_t precision_maker(float ,int16_t );
//function to get a precise output to specific decimal values

// the setup routine runs once when you press reset:
void setup() {                
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
  trimPotVoltage= analogRead(analogue_pin);
  trimPotVoltage0_5 = x*(float)trimPotVoltage; //scale 0-5
//  Serial.println(" output voltage trimPotVoltage0_5 is ");
// Serial.println(trimPotVoltage0_5);
//  delay(500);
  precision_maker(trimPotVoltage0_5,precision);
}

//function to get a precise output
int8_t precision_maker(float trimPotVoltage0_5,int16_t precision){
  int val = (int)(trimPotVoltage0_5*(float)precision);// typecast
  
  // Since these debug prints will be useful later to study firther about precision values, 
  // we are just keeping it for a while.
  
//  Serial.print(" ***** val is ");
//  Serial.println(val);
  
//  Serial.print(" ##### trimPotVoltage0_5 is ");
//  Serial.println(trimPotVoltage0_5);

//  Serial.print(" ##### (float)precision ");
//  Serial.println((float)precision);

//  Serial.print(" ##### TEST ");
//  Serial.println(((trimPotVoltage0_5*(float)precision)));
  
  sprintf(sbuffer,"Voltage value is %d.%dV\n",val/precision,val%precision);
  Serial.print(sbuffer);
  delay(1000);
  return 1; 
}


