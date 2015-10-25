/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_BONUS_TASK
  Trimming the input voltage read from a pin 
  and then convert to -5C to 30C
 */
 
// pin 14 have the capability to work with analogue signals.
int8_t analogue_pin = 14;
float convert(float x, float in_min, float in_max, float out_min, float out_max);
int 	trimPotVoltage;

char sbuffer[200];
// the setup routine runs once when you press reset:

void setup() {                
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
  float scaled_value;
  trimPotVoltage= analogRead(analogue_pin);

  Serial.print("Input value read is ");
  Serial.println(trimPotVoltage);  

  scaled_value=convert(trimPotVoltage,0,1023,-5,30);
 // calling function convert to change values from 0-1023 to -5 to 30
 
  Serial.print("Output Degree voltage is is  ");
  Serial.print(scaled_value);
  sprintf(sbuffer,"%cC\n",0x00B0);
  Serial.print(sbuffer);
  delay(1000);
}

// function to convert values to a specific range : based on default function map.
float convert(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


