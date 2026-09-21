#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.print(".");
  delay(900);

  lcd.print(".");
  delay(850);

  lcd.print(".");
  delay(850);

  lcd.clear();

  lcd.print("I've");
  delay(850);
  lcd.print(" felt");
  delay(1980);
  lcd.setCursor(0, 1);
  lcd.print("this");
  delay(770);
  lcd.print(" way");
  delay(2400);

  lcd.clear();
  delay(800);

  lcd.print("Oh");
  delay(700);
  lcd.print(" no,");
  delay(1000);
  lcd.print(" I");
  delay(820);
  lcd.print(" really");
  delay(800);
  lcd.setCursor(0, 1); 
  lcd.print("shouldn't");
  delay(800);
  lcd.print(" stay");
  delay(1800);

  lcd.clear();
  delay(800);

  lcd.print("I've");
  delay(850);
  lcd.print(" felt");
  delay(2080);
  lcd.setCursor(0, 1);
  lcd.print("so");
  delay(700);
  lcd.print(" strange");
  delay(2400);

  lcd.clear();
  delay(800);

  lcd.print("Will");
  delay(600);
  lcd.print(" you");
  delay(1500);
  lcd.print(" talk");
  delay(500);
  lcd.print(" to");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("me");
  delay(700);
  lcd.print(" again?");
  delay(2000);

  lcd.clear();
  delay(800);

  lcd.print("But");
  delay(700);
  lcd.print(" I");
  delay(1400);
  lcd.print(" really");
  delay(800);
  lcd.setCursor(0, 1); 
  lcd.print("shouldn't");
  delay(800);
  lcd.print(" stay");
  delay(4000);

  lcd.clear();
  delay(6000);

  lcd.print("But");
  delay(900);
  lcd.print(" I");
  delay(1599);
  lcd.print(" really");
  delay(800);
  lcd.setCursor(0, 1); 
  lcd.print("shouldn't");
  delay(800);
  lcd.print(" stay");
  delay(3000);

  lcd.setCursor(0, 0);
  lcd.print ("                  ");
  delay(2000);
  lcd.setCursor(0, 1);
  lcd.print ("                  ");

}

void loop() {
}