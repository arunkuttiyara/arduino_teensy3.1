/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_Task5
  Trimming the output voltage value to one decimal place of precision.
 */
 
// pin 14 have the capability to work with analogue signals.
int8_t analogue_pin = 14;
char sbuffer[100];

int 	trimPotVoltage;
float 	trimPotVoltage0_100; // we want to trim to 0-100 range
const	float x = 0.097751711; //scaling factor

int precision = 10;

int8_t precision_maker(float ,int16_t );
//function to get a precise output

// the setup routine runs once when you press reset:
void setup() {                
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
  trimPotVoltage= analogRead(analogue_pin);
  trimPotVoltage0_100 = x*(float)trimPotVoltage; //scale 0-100

  precision_maker(trimPotVoltage0_100,precision);
  //passing arguements to make the value precise to the required decimal places
}

//function which can be used to print float values with required precision
int8_t precision_maker(float trimPotVoltage0_100,int16_t precision){
  int val = (int)(trimPotVoltage0_100*(float)precision);// typecast
  sprintf(sbuffer,"Value trimmed to one decimal place is %d.%d \n",val/precision,val%precision);
  Serial.print(sbuffer);
  delay(500);
  return 1; 
}
