// Declare the pins for the segment display

int pinUP = 2;
int pinUPR = 3;
int pinDWR = 4;
int pinDW = 5;
int pinDWL = 6;
int pinUPL = 7;
int pinCT = 8;


void setup() {
  // put your setup code here, to run once:
  // Declare the pins as outputs

  pinMode(pinUP, OUTPUT);
  pinMode(pinUPR, OUTPUT);
  pinMode(pinDWR, OUTPUT);
  pinMode(pinDW, OUTPUT);
  pinMode(pinDWL, OUTPUT);
  pinMode(pinUPL, OUTPUT);
  pinMode(pinCT, OUTPUT);
  

}


void writeNumber(int value){
  // First we erase the previous value

  digitalWrite(pinUP, HIGH);
  digitalWrite(pinUPR, HIGH);
  digitalWrite(pinDWR, HIGH);
  digitalWrite(pinDW, HIGH);
  digitalWrite(pinDWL, HIGH);
  digitalWrite(pinUPL, HIGH);
  digitalWrite(pinCT, HIGH);

  // if we want to write 0

  if( value == 0){
      digitalWrite(pinUP, LOW);
      digitalWrite(pinUPR, LOW);
      digitalWrite(pinDWR, LOW);
      digitalWrite(pinDW, LOW);
      digitalWrite(pinDWL, LOW);
      digitalWrite(pinUPL, LOW);
     
  }
  
 // if we want to write 1
  if( value == 1){
    digitalWrite(pinUPR, LOW);
    digitalWrite(pinDWR, LOW);
  }

 // if we want to write 2

 if ( value == 2) {
  digitalWrite( pinUP, LOW);
  digitalWrite( pinUPR, LOW);
  digitalWrite( pinCT, LOW);
  digitalWrite( pinDWL, LOW);
  digitalWrite( pinDW, LOW);
  
  
 }

 // if we want to write 3

 if (value == 3){
  digitalWrite( pinUP, LOW);
  digitalWrite( pinUPR, LOW);
  digitalWrite( pinCT, LOW);
  digitalWrite( pinDWR, LOW);
  digitalWrite( pinDW, LOW);
 }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // a resetting count-dowm
  writeNumber(3);
  delay(1000);

  writeNumber(2);
  delay(1000);

 writeNumber(1);
  delay(1000);

  writeNumber(0);
  delay(1000);

}
