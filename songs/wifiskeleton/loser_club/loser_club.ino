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

  lcd.print("Totally");
  delay(400);
  lcd.print(" better");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("than");
  delay(900);
  lcd.print(" fucking");
  delay(400);

  lcd.clear();

  lcd.print("nobody");
  delay(800);

  lcd.clear();

  lcd.print("Ah-");
  delay(680);
  lcd.print("Ah-");
  delay(600);
  lcd.print("Ah");
  delay(600);
  lcd.print(" I");
  delay(400);
  lcd.print(" just");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("can't");
  delay(480);
  lcd.print(" forget");
  delay(500);

  lcd.clear();

  lcd.print("That");
  delay(400);
  lcd.print(" your");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("friends");
  delay(500);
  lcd.print(" think");
  delay(450);
  
  lcd.clear();

  lcd.print("I'm");
  delay(300);
  lcd.print(" a");
  delay(300);
  lcd.print(" loser");
  delay(400);
  lcd.print(" and");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("shit,");
  delay(600);
  lcd.print(" I");
  delay(300);
  lcd.print(" hate");
  delay(300);
  lcd.print(" it");
  delay(730);

  lcd.clear();

  lcd.print("Ah-");
  delay(780);
  lcd.print("Ah-");
  delay(680);
  lcd.print("Ah");
  delay(600);
  lcd.print(" I");
  delay(400);
  lcd.print(" just");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("can't");
  delay(500);
  lcd.print(" forget");
  delay(500);

  lcd.clear();

  lcd.print("That");
  delay(400);
  lcd.print(" your");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("friends");
  delay(500);
  lcd.print(" think");
  delay(450);
  
  lcd.clear();

  lcd.print("I'm");
  delay(300);
  lcd.print(" a");
  delay(300);
  lcd.print(" loser");
  delay(400);
  lcd.print(" and");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("shit,");
  delay(600);
  lcd.print(" I");
  delay(300);
  lcd.print(" hate");
  delay(300);
  lcd.print(" it");
  delay(600);

  lcd.clear();

  lcd.print("Don't");
  delay(300);
  lcd.print(" talk");
  delay(300);
  lcd.print(" and");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("think");
  delay(300);
  lcd.print(" away");
  delay(300);

  lcd.clear();

  lcd.print("Don't");
  delay(300);
  lcd.print(" talk");
  delay(300);

  lcd.clear();

  lcd.print("Don't");
  delay(300);
  lcd.print(" talk");
  delay(300);
  lcd.print(" and");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("think");
  delay(300);
  lcd.print(" away");
  delay(300);

  lcd.clear();
  delay(800);
  lcd.setCursor(0, 1);
  lcd.print("      (loser)");

  lcd.setCursor(0, 0);

  lcd.print("I");
  delay(200);
  lcd.print(" don't");
  delay(300);

  lcd.setCursor(0, 1);
  lcd.print("                ");

  lcd.setCursor(8, 0); 
  lcd.print("know");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("what");
  delay(300);
  lcd.print(" to");
  delay(300);
  lcd.print(" say");
  delay(300);

  lcd.clear();

  lcd.print("You'll");
  delay(300);
  lcd.print(" probably");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("leave");
  delay(300);
  lcd.print(" my");
  delay(300);
  lcd.print(" head");
  delay(300);

  lcd.clear();
  lcd.print("    astray");
  delay(500);
  lcd.clear();
  delay(180);
  lcd.print("    astray");
  delay(80);
  lcd.clear();
  delay(100);
  lcd.print("    astray");
  delay(80);
  lcd.clear();
  delay(320);

  lcd.print("Don't");
  delay(300);
  lcd.print(" talk");
  delay(300);
  lcd.print(" and");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("think");
  delay(300);
  lcd.print(" away");
  delay(300);

  lcd.clear();

  lcd.print("Don't");
  delay(300);
  lcd.print(" talk");
  delay(300);

  lcd.clear();

  lcd.print("Don't");
  delay(300);
  lcd.print(" talk");
  delay(300);
  lcd.print(" and");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("think");
  delay(300);
  lcd.print(" away");
  delay(300);

  lcd.clear();
  delay(300);

  lcd.print("I");
  delay(200);
  lcd.print(" don't");
  delay(300);
  lcd.print(" know");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("what");
  delay(300);
  lcd.print(" to");
  delay(300);
  lcd.print(" say");
  delay(300);

  lcd.clear();

  lcd.print("You'll");
  delay(300);
  lcd.print(" probably");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("leave");
  delay(300);
  lcd.print(" my");
  delay(300);
  lcd.print(" head");
  delay(300);

  lcd.clear();
  lcd.print("    astray");
  delay(800);

  lcd.clear();\

  
}

void loop() {
}