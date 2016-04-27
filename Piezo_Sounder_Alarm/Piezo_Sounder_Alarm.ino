// Project 11 - Piezo Sounder Alarm

float sinVal;
int toneVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int x = 0; x < 180; x++){
    // convert degrees to radians then obtain sin value
    sinVal = (sin(x *(3.1412/180)));


    // generate a frequency from the sin value
    toneVal = 2000 + (int(sinVal * 1000));
    tone(8, toneVal);
    delay(2);
  }

}
