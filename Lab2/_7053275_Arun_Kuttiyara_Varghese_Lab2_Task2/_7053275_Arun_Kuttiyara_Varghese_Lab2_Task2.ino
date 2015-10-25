/*
  7053275_Arun_Kuttiyara_Varghese_Lab2_Task2
   Program to print the size of the datatypes.
 */
 
// the setup routine runs once when you press reset:
void setup() {                
  // Initilaize the board rate and serial communication
  Serial.begin(9600);
  delay(3000); // three second delay given, so that we dont miss this print by the time we take the serial monitor.
  Serial.println(" Starting Lab 2 Task 2");
}

// the loop routine runs over and over again forever:
void loop() {
     
     Serial.print("the size in bytes of datatype int8_t is  :  ");
     Serial.print(sizeof(int8_t));      
     Serial.print("\n");
     
    
     Serial.print("the size in bytes of datatype int16_t is :  ");
     Serial.print(sizeof(int16_t));      
     Serial.print("\n");
     
     Serial.print("the size in bytes of datatype int32_t is :  ");
     Serial.print(sizeof(int32_t));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype int64_t is :  ");
     Serial.print(sizeof(int64_t));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype int is     :  ");
     Serial.print(sizeof(int));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype char is    :  ");
     Serial.print(sizeof(char));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype byte is    :  ");
     Serial.print(sizeof(byte));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype long is    :  ");
     Serial.print(sizeof(long));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype double is  :  ");
     Serial.print(sizeof(double));      
     Serial.print("\n");
    
     Serial.print("the size in bytes of datatype float is   :  ");
     Serial.print(sizeof(float));      
     Serial.print("\n");
     
     while(1);
}
