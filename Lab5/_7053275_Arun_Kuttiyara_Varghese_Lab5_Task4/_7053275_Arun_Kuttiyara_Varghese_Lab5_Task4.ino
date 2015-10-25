
/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_Task4
  Trimming analogue input value from 0-1023 to 0-100
  And typecasting the values to decimal
 */
 
// pin 14 have the capability to work with analogue signals.
int8_t analogue_pin = 14;
char sbuffer[100];

int 	trimPotVoltage;
float 	trimPotVoltage0_100; // we want to trim to 0-100 range
const	float x = 0.097751711; 


// the setup routine runs once when you press reset:
void setup() {                
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
  trimPotVoltage= analogRead(analogue_pin);
  trimPotVoltage0_100 = x*(float)trimPotVoltage; //scale 0-100
  //Serial.print(" The trimmed value is  ");
  //Serial.println(trimPotVoltage0_100);
  delay(500);
  sprintf(sbuffer,"pot is set to %d", (int )trimPotVoltage0_100);
  Serial.println(sbuffer);
}

