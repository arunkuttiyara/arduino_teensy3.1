/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_Task2
  Trimming analogue input value from 0-1023 to 0-100
 */
 
// pin 14 have the capability to work with analogue signals.
int8_t analogue_pin = 14;

int 	trimPotVoltage;
float 	trimPotVoltage0_100; // we want to trim to 0-100 range
const	float x = 0.097751711; //scaling factor


// the setup routine runs once when you press reset:
void setup() {                
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
  Serial.print(" The trimmed value is \n");
  trimPotVoltage= analogRead(analogue_pin);
  trimPotVoltage0_100 = x*(float)trimPotVoltage; //scale 0-100
  Serial.println(trimPotVoltage0_100);
  delay(500);
}

