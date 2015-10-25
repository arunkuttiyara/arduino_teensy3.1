/*
  7053275_Arun_Kuttiyara_Varghese_Lab4_Task2
  Code to  play Happy Birthday to you !
 */
 
// pin 10 have the capability to play tone function in Adruino.
int8_t speaker_pin = 10;

// function to play a single character
int8_t playNote(char a);
//function to play a given array of letters one by one
int8_t playSong();

//array to store certian characters
char a[]={'C','D','E','F','G','A','B'};
//array to store happy birthday tone sequence
char hbday[] = "ggAgCBggAgDCggGECBAFFECDC";


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(speaker_pin,OUTPUT);  
  //enabling serial printing
 Serial.begin(9600); 
}

// the loop routine runs over and over again forever:
void loop() {    
  //calling function to play happy birthday
  playSong(hbday);
}

// function which contains tone equivalent for different chararcters
int8_t playNote(char a){
switch (a) {
    case 'g':
       tone(speaker_pin,392,750);
       delay(800);
      break;
    case 'A':
       tone(speaker_pin,440,750);
       delay(800);
      break;
     case 'B':
       tone(speaker_pin,494,750);
       delay(800);
      break;
     case 'C':
       tone(speaker_pin,523,750);
       delay(800);
      break;
     case 'D':
       tone(speaker_pin,587,750);
       delay(800);
      break;
     case 'E':
       tone(speaker_pin,659,750);
       delay(800);
      break;
     case 'F':
       tone(speaker_pin,699,750);
       delay(800);
      break; 
      case 'G':
       tone(speaker_pin,794,750);
       delay(800);
      break;
      
    default: 
     //error case
      Serial.print("error .... ..... return -1");
      return -1;
  }
}

//function to play a given array of characters
int8_t playSong(char *hbday){
  while(*++hbday){
    Serial.print(hbday);
    Serial.print("\n");
    if(-1 == playNote(*hbday)){
     Serial.print(" return -1 inside playsong ...... \n");
      return -1;
    }
  }
  return 1;
}

