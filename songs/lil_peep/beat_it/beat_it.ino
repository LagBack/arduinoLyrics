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

  lcd.print("Yeah,");
  delay(400);
  lcd.print(" I");
  delay(300);;
  lcd.print(" thought");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(200);
  lcd.print(" had");
  delay(200);
  lcd.print(" a");
  delay(400);
  lcd.print(" feeling");
  delay(400);

  lcd.clear();
  lcd.setCursor(10, 1);
  lcd.print("before");
  delay(600);

  lcd.clear();

  lcd.print("And");
  delay(400);
  lcd.print(" now");
  delay(200);;
  lcd.print(" you");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("closing");
  delay(300);
  lcd.print(" the");
  delay(400);
  lcd.print(" door");
  delay(400);

  lcd.clear();

  lcd.print("Because");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" dont");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("want");
  delay(350);
  lcd.print(" me");
  delay(600);
  lcd.print(" comin");
  delay(600);
  lcd.print(" in");
  delay(700);

  lcd.clear();
  delay(680);

  lcd.print("Yeah,");
  delay(300);
  lcd.print(" I");
  delay(300);;
  lcd.print(" know");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("I've");
  delay(400);
  lcd.print(" seen");
  delay(300);
  lcd.print(" you");
  delay(300);

  lcd.clear();
  lcd.setCursor(10, 1);
  lcd.print("before");
  delay(500);

  lcd.clear();

  lcd.print("Friday");
  delay(300);
  lcd.print(" night");
  delay(400);
  lcd.print(" at");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(300);
  lcd.print(" store");
  delay(670);

  lcd.clear();
  delay(300);

  lcd.print("You");
  delay(400);
  lcd.print(" had");
  delay(200);
  lcd.print(" another");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("boy");
  delay(300);
  lcd.print(" to");
  delay(300);
  lcd.print(" hold");
  delay(300);

  lcd.clear();
  lcd.setCursor(7, 1);
  lcd.print("your");
  delay(370);
  lcd.print(" hand");
  delay(800);

  lcd.clear();
  delay(500);

  lcd.print("Okay, ");
  delay(400);
  lcd.print("now");
  delay(200);
  lcd.print(" I");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("see");
  delay(300);
  lcd.print(" it,");
  delay(300);
  lcd.print(" bitch");
  delay(300);

  lcd.clear();

  delay(400);
  lcd.print("You");
  delay(400);
  lcd.print(" want");
  delay(200);
  lcd.print(" me");
  delay(300);
  lcd.print(" to");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("beat");
  delay(300);
  lcd.print(" it,");
  delay(300);
  lcd.print(" bitch");
  delay(400);

  lcd.clear();
  delay(100);

  lcd.print("I");
  delay(400);
  lcd.print(" ain't");
  delay(200);
  lcd.print(" finna");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("beat");
  delay(300);
  lcd.print(" it,");
  delay(300);
  lcd.print(" no,");
  delay(900);
  lcd.print(" no");
  delay(800);

  lcd.clear();

  lcd.print("She");
  delay(400);
  lcd.print(" said,");
  delay(400);

  lcd.clear();
  delay(200);

  lcd.print("Why");
  delay(400);
  lcd.print(" you");
  delay(200);
  lcd.print(" so");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("conceited,");
  delay(500);
  lcd.print(" bitch?'");
  delay(300);

  lcd.clear();

  lcd.print("Yeah,");
  delay(400);
  lcd.print(" I");
  delay(200);
  lcd.print(" got");
  delay(300);
  lcd.print(" my");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("reasons,");
  delay(400);
  lcd.print(" bitch");
  delay(800);

  lcd.clear();

  lcd.print("Why");
  delay(400);
  lcd.print(" the");
  delay(300);
  lcd.print(" fuck");
  delay(300);
  lcd.print(" you");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("geekin',");
  delay(400);
  lcd.print(" ho?");
  delay(1200);

  lcd.clear();
  
}

void loop() {
}