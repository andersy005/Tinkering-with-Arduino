// Project 9 - LED Fire Effect

int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(ledPin1, random(120) + 135);
  analogWrite(ledPin2, random(120) + 135);
  analogWrite(ledPin3, random(120) + 135);
  delay(random(100));
  

}
