/*
  7053275_Arun_Kuttiyara_Varghese_Lab2_Task1
  Program to print Task name for one time & Programmer Name repeatedly after ten second delay. 
 */
 
// the setup routine runs once when you press reset:
void setup() {                
  // Initilaize the board rate and serial communication
  Serial.begin(9600);
  delay(5000); // three second delay given, so that we dont miss this print by the time we take the serial monitor.
  Serial.println(" Starting Lab 2 Task 1");
}

// the loop routine runs over and over again forever:
void loop() {
     delay(10000);
     // we need a delay here otherwise we overflow the USB buffer with too many prints 
     // we are giving here a ten second delay
     Serial.print("Arun Kuttiyara Varghese \n ");
}
