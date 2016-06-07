// Project 17 - Shift Register 5-Bit Counter
int latchPin = 8;    // Pin connected to pin 12 of 74HC595 (LATCH)
int clockPin = 12;  // Pin connected to pin 11 of 74HC595 (CLOCK)
int dataPin = 11;   // Pin connected to pin 14 of 74HC595 (Data)


void setup() {
  // put your setup code here, to run once:

  // set pins to Output
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // count from 0 to 32
  for(int i = 0; i < 32; i++){
    shiftDataOut(i);
    // set latchPin low then high to send data out
    digitalWrite(latchPin, LOW);
    digitalWrite(latchPin, HIGH);
    delay(1000);
  }

}

void shiftDataOut(
