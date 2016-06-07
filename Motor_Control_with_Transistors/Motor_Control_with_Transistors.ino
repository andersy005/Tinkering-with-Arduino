
// Declare the pin for the motor
int motorPin = 2;


void setup() {
  // put your setup code here, to run once:

  // Define pin #9 as output
  pinMode( motorPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  // Turn motor on

  digitalWrite(motorPin, HIGH);

  delay(10000);

  digitalWrite(motorPin, LOW);

  delay(1000);

}
