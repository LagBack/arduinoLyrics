#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.print(".");
  delay(900);

  lcd.print(".");
  delay(900);

  lcd.print(".");
  delay(900);

  lcd.clear();

  lcd.print("When");
  delay(500);
  lcd.print(" I");
  delay(400);
  lcd.print(" look");
  delay(300);
  lcd.print(" at");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(1400);

  lcd.clear(); 
  delay(650);

  lcd.print("Oh,");
  delay(500);
  lcd.print(" but");
  delay(400);
  lcd.print(" I");
  delay(300);
  lcd.print(" don't");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("know");
  delay(400);
  lcd.print(" what's");
  delay(400);
  lcd.print(" real");
  delay(700);

  lcd.clear(); 
  delay(1200);

  lcd.print("Once");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" a");
  delay(300);
  lcd.print(" while");
  delay(900);

  lcd.clear();
  delay(700);

  lcd.print("And");
  delay(500);
  lcd.print(" you");
  delay(300);
  lcd.print(" make");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(1000);
  lcd.print(" laugh");
  delay(1000);

  lcd.clear();
  delay(700);

  lcd.print("And");
  delay(500);
  lcd.print(" I'll");
  delay(300);
  lcd.print(" sleep");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("tomorrow");
  delay(1500);

  lcd.clear();
  delay(500);

  lcd.print("And");
  delay(1190);
  lcd.print(" it");
  delay(300);
  lcd.print(" won't");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("be");
  delay(500);
  lcd.print(" long");
  delay(1500);

  lcd.clear(); 
  delay(600);

  lcd.print("Once");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" a");
  delay(300);
  lcd.print(" while");
  delay(900);

  lcd.clear(); 
  delay(1100);

  lcd.print("Then");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" take");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(1000);
  lcd.print(" down");
  delay(1500);

  lcd.clear();
  delay(700);

  lcd.print("When");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" walk");
  delay(650);
  lcd.setCursor(0, 1);
  lcd.print("away");
  delay(1000);

  lcd.clear();
  lcd.noBacklight();

  delay(15000);
  lcd.backlight();
  delay(900);

  lcd.print("When");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" say");
  delay(650);
  lcd.setCursor(0, 1);
  lcd.print("'I do'");
  delay(1000);

  lcd.clear(); 
  delay(900);

  lcd.print("Oh,");
  delay(500);
  lcd.print(" but");
  delay(400);
  lcd.print(" I");
  delay(300);
  lcd.print(" don't");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("believe");
  delay(400);
  lcd.print(" in");
  delay(400);
  lcd.print(" you");
  delay(700);

  lcd.clear(); 
  delay(1650);

  lcd.print("I");
  delay(400);
  lcd.print(" can't");
  delay(300);
  lcd.print(" forget");
  delay(650);
  lcd.setCursor(0, 1);
  lcd.print("it");
  delay(1650);

  lcd.clear();
  delay(2950);

  lcd.print("When");
  delay(500);
  lcd.print(" you");
  delay(300);
  lcd.print(" sleep");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("tomorrow");
  delay(1500);

  lcd.clear();
  delay(540);

  lcd.print("And");
  delay(1190);
  lcd.print(" it");
  delay(300);
  lcd.print(" won't");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("be");
  delay(500);
  lcd.print(" long");
  delay(1500);

  lcd.clear(); 
  delay(1000);

  lcd.print("Once");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" a");
  delay(300);
  lcd.print(" while");
  delay(900);

  lcd.clear(); 
  delay(1100);

  lcd.print("When");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" make");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(1000);
  lcd.print(" smile");
  delay(1500);
  

  lcd.clear();
  delay(700);

  lcd.print("And");
  delay(400);
  lcd.print(" turn");
  delay(300);
  lcd.print(" your");
  delay(550);
  lcd.setCursor(0, 1);
  lcd.print("long");
  delay(300);
  lcd.print(" blonde");
  delay(300);
  lcd.print(" hair");
  delay(500);

  lcd.clear();

  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(400);

  lcd.backlight();
  delay(3400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(400);

  lcd.backlight();
  delay(3400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(560);


  lcd.backlight();
  delay(3400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  delay(400);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(400);
  lcd.backlight();
  delay(300);
  lcd.noBacklight();
  delay(700);
  lcd.backlight();

  delay(3850);


  lcd.print("When");
  delay(500);
  lcd.print(" I");
  delay(400);
  lcd.print(" look");
  delay(300);
  lcd.print(" at");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(1400);

  lcd.clear(); 
  delay(650);

  lcd.print("Oh,");
  delay(500);
  lcd.print(" but");
  delay(400);
  lcd.print(" I");
  delay(300);
  lcd.print(" don't");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("know");
  delay(400);
  lcd.print(" what's");
  delay(400);
  lcd.print(" real");
  delay(700);

  lcd.clear(); 
  delay(1200);

  lcd.print("Once");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" a");
  delay(300);
  lcd.print(" while");
  delay(900);

  lcd.clear();
  delay(700);

  lcd.print("And");
  delay(500);
  lcd.print(" you");
  delay(300);
  lcd.print(" make");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(1000);
  lcd.print(" laugh");
  delay(1000);

  lcd.clear();
  delay(700);

  lcd.print("And");
  delay(500);
  lcd.print(" I'll");
  delay(300);
  lcd.print(" sleep");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("tomorrow");
  delay(1500);

  lcd.clear();
  delay(500);

  lcd.print("And");
  delay(1190);
  lcd.print(" it");
  delay(300);
  lcd.print(" won't");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("be");
  delay(500);
  lcd.print(" long");
  delay(1500);

  lcd.clear(); 
  delay(600);

  lcd.print("Once");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" a");
  delay(300);
  lcd.print(" while");
  delay(900);

  lcd.clear(); 
  delay(1100);

  lcd.print("Then");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" take");
  delay(450);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(1000);
  lcd.print(" down");
  delay(1500);

  lcd.clear();
  delay(700);

  lcd.print("When");
  delay(400);
  lcd.print(" you");
  delay(300);
  lcd.print(" walk");
  delay(650);
  lcd.setCursor(0, 1);
  lcd.print("away");
  delay(1000);

  lcd.clear();
  lcd.noBacklight();


  





}

void loop() {
}