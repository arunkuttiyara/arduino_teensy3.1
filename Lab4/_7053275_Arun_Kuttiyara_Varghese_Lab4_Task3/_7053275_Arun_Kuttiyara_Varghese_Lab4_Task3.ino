/*
  7053275_Arun_Kuttiyara_Varghese_Lab4_Task3
  Playing Happy Birthday using an array of integers analogous to tone frequency.
  A more easier way for HappyBirthday !
 */
 
// pin 10 have the capability to play tone function in Adruino.
int8_t speaker_pin = 10;

// function to play a given frequency
int8_t playNote(int32_t );
//function to play Happy Birthday
int8_t playSong(char *);

//array to store happy birthday tone sequence
char hbday[] = "@@A@CB@@A@DC@@GECBAFFECDC";
//char yellowRose[] = "AABBCCDDD";
//char taDa[] = "AAADDDD";

int noteFreq[] = {392,440,494,523,587,659,699,794};
//corresponds to:  @   A   B   C   D   E   F   G

// the setup routine runs once when you press reset:
void setup() {                
 // initialize the digital pin as an output.
 pinMode(speaker_pin,OUTPUT);  
 //enabling serial printing
 Serial.begin(9600); 
}

//the loop routine runs over and over again forever:
void loop() {    
  //calling function to play happy birthday
 playSong(hbday);
}

// function which contains tone equivalent for different frequency
int8_t playNote(int32_t noteToPlay){
   tone(speaker_pin,noteToPlay,750);
   //playing the given frequency
   delay(800);
   //given a delay higher than the tone time
   return 1;
}

//function to play a given array of characters
int8_t playSong(char *song){
   int x = 0;
   int noteToPlay;
   
   //loop which picking u each character and printing
   while (song[x]) {  
     if(song[x]-64 <0 || song[x]-64 > 7){
     Serial.print("Error ......outside expected charatcer range  \n");
     return -1;
    }    
   noteToPlay = noteFreq[song[x]-64];
   //hbday[x] – 64 changes to a starting point of 0 for @
   //instead of @ = 64 as would be the case if @ was ascii
   playNote(noteToPlay);
   Serial.print(noteToPlay);
   Serial.print("\n");
   x++;
  }
  return 1;
}

