// LED connected to digital pin 10
int ledPin = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  // 3 dits
  for (int x = 0; x < 3; x++){

    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(150);                 // waits for 150 ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100);                // waits for 100 ms
  }


  // 100ms delay to cause slight gap between letters
  delay(100);

  // 3 dahs
   for (int x = 0; x < 3; x++){

    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(400);                 // waits for 400 ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100);                // waits for 100 ms
  }

  // 100ms delay to cause slight gap between letters
  delay(100);

  // 3 dits again

   for (int x = 0; x < 3; x++){

    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(150);                 // waits for 150 ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100);                // waits for 100 ms
  }


  // wait 5 seconds before repeating the SOS signal
  delay(5000);
  

}
