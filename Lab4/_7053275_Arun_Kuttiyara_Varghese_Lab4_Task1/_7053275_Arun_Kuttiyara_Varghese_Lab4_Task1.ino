/*
  7053275_Arun_Kuttiyara_Varghese_Lab4_Task1
  Code to  play Do Re Me !
 */
 
// pin 10 have the capability to play tone function in Adruino.
int8_t speaker_pin = 10;

//function to play Do Re Me
int8_t play_music();


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(speaker_pin,OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {  
  //function to play Do Re Me
  play_music(); 
}

int8_t play_music(){
//C,D,E,F,G,A,B then next Octave of C
int16_t musical_array[]={520,587,659,698,784,880,987,1047};   
// playing C,D,E,F,G,A,B then next Octave of C
for(int i=0;i<sizeof(musical_array)/2;i++){
   tone(speaker_pin,musical_array[i],750);
   delay(800);
 } 
}

