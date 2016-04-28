// Project 13 - Piezo Knock Sensor

int ledPin = 9; // LED on digital Pin 9
int piezoPin = 5; // Piezo on Analog Pin 5
int threshold = 120; // The sensor value to reach before activation
int sensorValue = 0; // A variable to store the value read from the sensor
float ledValue = 0;  // The brightness of the LED

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);     // Set the ledPin to an OUTPUT
  // Flash the LED twice to show the program has started
  digitalWrite(ledPin, HIGH); delay(150); digitalWrite(ledPin, LOW); delay(150);
  digitalWrite(ledPin, HIGH); delay(150); digitalWrite(ledPin, LOW); delay(150);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(piezoPin);       // Read the value from the sensor

  if (sensorValue >= threshold){
    // If knock detected set brightness to max
    ledValue = 255;
    
  }

  analogWrite(ledPin, int(ledValue));  // Write brightness value to LED
  ledValue = ledValue - 0.05;          // Dim the LED slowly
  if (ledValue <= 0){
    ledValue = 0;   // Make sure value does not go below zero 
  }

}
