#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.print(".");
  delay(850);

  lcd.print(".");
  delay(850);

  lcd.print(".");
  delay(850);

  lcd.clear();

  lcd.print("I");
  delay(400);
  lcd.print(" can't");
  delay(550);
  lcd.print(" help");
  delay(450);
  lcd.print(" but");
  delay(650);
  lcd.setCursor(0, 1);
  lcd.print("repeat");
  delay(700);
  lcd.print(" myself");
  delay(700);

  lcd.clear();

  lcd.print("I");
  delay(450);
  lcd.print(" know");
  delay(850);
  lcd.print(" it's");
  delay(300);
  lcd.print(" not");
  delay(550);
  lcd.setCursor(0, 1); 
  lcd.print("your");
  delay(450);
  lcd.print(" fault");
  delay(800);

  lcd.clear();
  delay(200);

  lcd.print("Still");
  delay(450);
  lcd.print(" lately,");
  delay(1080);
  lcd.print(" I");
  delay(699);
  lcd.setCursor(0, 1);
  lcd.print("begin");
  delay(700);
  lcd.print(" to");
  delay(400);
  lcd.print(" shake");
  delay(500);

  lcd.clear();

  lcd.print("For");
  delay(700);
  lcd.print(" no");
  delay(640);
  lcd.print(" reason");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("at");
  delay(700);
  lcd.print(" all");
  delay(2500);

  lcd.clear();
  delay(2800);

  lcd.print("For");
  delay(600);
  lcd.print(" no");
  delay(500);
  lcd.print(" reason");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("at");
  delay(700);
  lcd.print(" all");
  delay(2500);

  lcd.clear();
  delay(2800);

  lcd.print("For");
  delay(600);
  lcd.print(" no");
  delay(500);
  lcd.print(" reason");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("at");
  delay(700);
  lcd.print(" all");
  delay(2500);

  lcd.clear();
  delay(2800);

  lcd.print("For");
  delay(600);
  lcd.print(" no");
  delay(500);
  lcd.print(" reason");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("at");
  delay(700);
  lcd.print(" all");
  delay(2500);

  lcd.clear();
  delay(2800);

  lcd.print("For");
  delay(600);
  lcd.print(" no");
  delay(500);
  lcd.print(" reason");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("at");
  delay(700);
  lcd.noBacklight();
  lcd.print(" all");
  delay(2500);

  lcd.clear();



}

void loop() {
}