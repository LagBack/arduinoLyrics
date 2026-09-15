#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.print(".");
  delay(900);

  lcd.print("."); //start at 0:22 now
  delay(900);

  lcd.print(".");
  delay(900);

  lcd.clear();

  lcd.print("We're");
  delay(600);
  lcd.print(" stressing");
  delay(950);
  lcd.setCursor(0, 1);
  lcd.print("out");
  delay(4000);

  lcd.clear(); 

  lcd.print("over");
  delay(700);
  lcd.print(" nothing");
  delay(1140);
  lcd.setCursor(0, 1);
  lcd.print("real");
  delay(1250);
  lcd.setCursor(0, 0);
  lcd.print("                ");
  delay(1000);
  lcd.clear();
  delay(1000);


  lcd.print("So");
  delay(450);
  lcd.print(" tell");
  delay(300);
  lcd.print(" me");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("what");
  delay(820);
  lcd.print(" it's");
  delay(400);
  lcd.print(" about");
  delay(1250);

  lcd.setCursor(0, 1);
  lcd.print("                ");
  delay(1000);

  lcd.setCursor(0, 0);
  lcd.print("                ");
  delay(1000);

  lcd.clear();

  lcd.print("Tell");
  delay(250);
  lcd.print(" me");
  delay(750);
  lcd.print(" what");
  delay(850);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(620);
  lcd.print(" feel");
  delay(1500);
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("    feel");
  delay(1000);

  lcd.clear();
  delay(6500);

  lcd.print("Re");
  delay(2000);
  lcd.print("lax");
  delay(800);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(900);

  lcd.clear();
  delay(1300);

  lcd.print("Take");
  delay(600);
  lcd.print(" it");
  delay(1700);
  lcd.setCursor(0, 1);
  lcd.print("easy");
  delay(2000);

  lcd.clear();
  delay(1000);

  lcd.print("Lie");
  delay(600);
  lcd.print(" down");
  delay(1600);
  lcd.print(" next");
  delay(700);
  lcd.setCursor(0, 1);
  lcd.print("to");
  delay(400);
  lcd.print(" me");
  delay(1800);

  lcd.clear();
  delay(400);

  lcd.print("Forget");
  delay(800);
  lcd.print(" your");
  delay(1600);
  lcd.setCursor(0, 1);
  lcd.print("worries");
  delay(2400);

  lcd.clear();



}

void loop() {
}