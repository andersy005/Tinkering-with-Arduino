// Project 14 - Light Sensor

int piezoPin = 8;    // Piezo on pin 8
int ldrPin = 0;      // LDR on Analog Pin 0
int ldrValue = 0;    // Value read from the LDR

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  ldrValue = analogRead(ldrPin);             // read the value from the LDR
  tone(piezoPin, 1000);                     // play a 1000 Hz tone from the piezo
  delay(25);                               // wait a bit
  noTone(piezoPin);                        // stop the tone
  delay(ldrValue);                         // wait the amount of milliseconds in ldrValue

}
