#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.print(".");
  delay(800);

  lcd.print(".");
  delay(800);

  lcd.print(".");
  delay(800);

  lcd.clear();

  lcd.print("Baby,");
  delay(200);
  lcd.print(" I'm");
  delay(300);
  lcd.print(" a");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("bastard");
  delay(680);

  lcd.clear();

  lcd.print("You");
  delay(380);
  lcd.print(" know");
  delay(300);
  lcd.print(" what");
  delay(300);
  lcd.setCursor(0, 1);  
  lcd.print("you");
  delay(300);
  lcd.print(" are");
  delay(400);
  lcd.print(" too");
  delay(400);

  lcd.clear();

  lcd.print("Baby,");
  delay(400);
  lcd.print(" I");
  delay(300);
  lcd.print(" don't");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("make");
  delay(450);
  lcd.print(" the");
  delay(300);
  lcd.print(" rules");
  delay(600);

  lcd.clear();
  delay(300);

  lcd.print("Don't");
  delay(300);
  lcd.print(" sing");
  delay(300);
  lcd.print(" your");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("song");
  delay(600);
  lcd.print(" for");
  delay(300);
  lcd.print(" me");
  delay(300);
  lcd.print(" no");
  delay(330);
  lcd.clear();
  lcd.setCursor(11, 1);
  lcd.print(" more");
  delay(400);

  lcd.clear();

  lcd.print("'Cause");
  delay(280);
  lcd.print(" I");
  delay(300);
  lcd.print(" can't");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("listen");
  delay(300);
  lcd.print(" to");
  delay(300);
  lcd.print(" you");
  delay(400);

  lcd.clear();

  lcd.print("Cut");
  delay(300);
  lcd.print(" my");
  delay(300);
  lcd.print(" wrists,");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("don't");
  delay(300);
  lcd.print(" hurt");
  delay(400);
  lcd.print(" no");
  delay(300);
  lcd.clear();
  lcd.setCursor(11, 1);
  lcd.print(" more");
  delay(400);
  
  lcd.clear();

  lcd.print("Just");
  delay(300);
  lcd.print(" leave");
  delay(300);
  lcd.print(" me");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("bleeding");
  delay(500);
  lcd.print(" on");
  delay(300);
  lcd.print(" the");
  delay(200);
  lcd.clear();
  lcd.setCursor(11, 1);
  lcd.print("floor");
  delay(550);

  lcd.clear();

  lcd.print("You");
  delay(300);
  lcd.print(" were");
  delay(300);
  lcd.print(" the");
  delay(400);
  lcd.print(" one");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("that");
  delay(300);
  lcd.print(" I");
  delay(300);
  lcd.setCursor(0, 0);
  lcd.print("                            ");
  lcd.setCursor(0, 1);
  lcd.print("       adored");
  delay(500);

  lcd.clear();

  lcd.print("There's");
  delay(500);
  lcd.print(" lovers");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("galore,");
  delay(450);
  lcd.print(" galore");
  delay(400);

  lcd.clear();
  
}

void loop() {
}