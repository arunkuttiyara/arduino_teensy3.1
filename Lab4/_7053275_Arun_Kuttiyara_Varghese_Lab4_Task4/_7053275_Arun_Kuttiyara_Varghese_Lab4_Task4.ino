/*
  7053275_Arun_Kuttiyara_Varghese_Lab4_Task4
  A more easier way for HappyBirthday using character constants !
 */
 
// pin 10 have the capability to play tone function in Adruino.
int8_t speaker_pin = 10;

// function to play a given frequency
int8_t playNote(int32_t );
//function to play Happy Birthday
int8_t playSong(int *);

// defining character constants to a particular value,
//which makes Happy Birthday easier
const int g=392;
const int A=440;
const int B=494;
const int C=523;
const int D=587;
const int E=659;
const int F=699;
const int G=794;

int hbday[] = {g,g,A,g,C,B,g,g,A,g,D,C,g,g,G,E,C,B,A,F,F,E,C,D,C};

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
int8_t playSong(int song[]){
int x = 0;
int noteToPlay;
int test;
while ( x < sizeof(hbday)) { 

 if(song[x] == 392 || song[x] == 440 || song[x] == 494 || song[x] == 523 || song[x] == 587 || song[x] == 659 || song[x] == 699 || song[x] == 794 )
    {
     playNote(song[x]);
     Serial.print(song[x]);
     Serial.print("\n");
     x++;
    }
    else
    {
      Serial.print("Error ..character outside expected range \n");
      return -1;
    }
  }
  return 1;
}

