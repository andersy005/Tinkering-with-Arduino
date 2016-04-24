// project 5 - LED chase Effect
byte ledPin [] = {5, 6, 7, 8, 9};               // create array for LED pins
int ledDelay = 65;                          // delay between changes
int direction = 1;
int currentLED = 0;
unsigned long changeTime;

void setup() {
  // put your setup code here, to run once:
  for( int x = 0; x < 5; x++){              // set all pins to output
    pinMode(ledPin[x], OUTPUT);
  }
  changeTime = millis();

}

void loop() {
  // put your main code here, to run repeatedly:

  if((millis()- changeTime) > ledDelay){          // if it has been ledDelay ms since last change
    changeLED();
    changeTime = millis();
    
  }

}

void changeLED(){                                   // turn off all LED's
  for (int x = 0; x < 5; x++){
    digitalWrite(ledPin[x], LOW);
  }
  digitalWrite(ledPin[currentLED], HIGH); // turn on the current LED
  currentLED += direction;              // increment by the direction value

  // change direction if we reach the end
  if(currentLED == 4){ direction = -1;}
  if(currentLED == 0){ direction = 1;}
}

