#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.clear();
  
}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.print("printing text");

  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Setting Cursor");

  delay(3000);

  lcd.clear();
  lcd.print("Blink Cursor");
  lcd.blink();

  
  delay(3000);

  lcd.clear();
  lcd.print("Uline Cursor");
  lcd.cursor();

  delay(3000);

  lcd.clear();
  lcd.print("No Cursor");
  lcd.noCursor();

  delay(3000);

  lcd.clear();
  lcd.print("No Display");

  delay(1000);

  lcd.noDisplay();
  lcd.clear();
  lcd.print("Display on");

  delay(3000);
  lcd.display();

  delay(3000);
  
  

}
