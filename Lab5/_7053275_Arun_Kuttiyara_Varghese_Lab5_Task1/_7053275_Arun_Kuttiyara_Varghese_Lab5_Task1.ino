/*
  7053275_Arun_Kuttiyara_Varghese_Lab5_Task1
  Reading value from analogue input and displaying it!
 */
 
// pin 14 have the capability to read analogue value in adruino
int8_t analogue_pin = 14;
int32_t analogue_value;
// the setup routine runs once when you press reset:
void setup() {                
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
 Serial.print(" The value of analogue pin is  ");
 analogue_value= analogRead(analogue_pin);
 Serial.println(analogue_value);
 delay(500);
}

