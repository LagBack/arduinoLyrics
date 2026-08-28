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

  lcd.print("Next");
  delay(400);
  lcd.print(" day");
  delay(400);
  lcd.print(" I'm");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("walking");
  delay(400);
  lcd.print(" the road");
  delay(600);

  lcd.clear();

  // kickin' rocks, it's my fault
  lcd.print("kickin'");
  delay(500);
  lcd.print(" rocks,");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("it's");
  delay(200);
  lcd.print(" my");
  delay(200);
  lcd.print(" fault");
  delay(500);

  lcd.clear();

  // My life's the worst story told
  lcd.print("My");
  delay(200);
  lcd.print(" life's");
  delay(250);
  lcd.print(" the");
  delay(200);
  
  lcd.setCursor(0, 1);
  lcd.print("worst");
  delay(300);
  lcd.print(" story");
  delay(350);
  lcd.print(" told");
  delay(430);

  lcd.clear();

  // I'll be this way till I'm old
  lcd.print("I'll");
  delay(200);
  lcd.print(" be");
  delay(210);
  lcd.print(" this");
  delay(220);
  lcd.print(" way");
  delay(250);
  lcd.setCursor(0, 1);
  lcd.print("till");
  delay(300);
  lcd.print(" I'm");
  delay(300);
  lcd.print(" old");
  delay(390);

  lcd.clear();

  // I rip a page out the book
  lcd.print("I");
  delay(300);
  lcd.print(" rip");
  delay(300);
  lcd.print(" a");
  delay(300);
  lcd.print(" page");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("out");
  delay(400);
  lcd.print(" the");
  delay(350);
  lcd.print(" book");
  delay(400);

  lcd.clear();

  // I'm just so misunderstood
  lcd.print("I'm");
  delay(300);
  lcd.print(" just");
  delay(300);
  lcd.print(" so");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("misunderstood");
  delay(600);

  lcd.setCursor(0, 0);
  lcd.print("                ");
  delay(500);
  lcd.clear();

  // I always think about her now
  lcd.print("I");
  delay(300);
  lcd.print(" always");
  delay(300);
  lcd.print(" think");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("about");
  delay(300);
  lcd.print(" her");
  delay(400);
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("      her");
  delay(300);

  lcd.clear();

  // when my life felt good
  lcd.print("And");
  delay(200);
  lcd.print(" when");
  delay(200);
  lcd.print(" my");
  delay(200);
  lcd.print(" life");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("felt");
  delay(500);
  lcd.print(" good");
  delay(500);

  lcd.clear();

  // I smoked a cig on the porch
  lcd.print("I");
  delay(300);
  lcd.print(" smoked");
  delay(300);
  lcd.print(" a");
  delay(250);
  lcd.print(" cig");
  delay(250);
  lcd.setCursor(0, 1);
  lcd.print("on");
  delay(300);
  lcd.print(" the");
  delay(250);
  lcd.print(" porch");
  delay(500);

  lcd.clear();

  // it doesn't help me at all
  lcd.print("It");
  delay(200);
  lcd.print(" doesn't");
  delay(250);
  lcd.print(" help");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(300);
  lcd.print(" at");
  delay(300);
  lcd.print(" all");
  delay(450);

  lcd.clear();

  // I'm wonderin', what's it all for?
  lcd.print("I");
  delay(200);
  lcd.print(" wonder");
  delay(300);
  lcd.print(" what's");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("it");
  delay(300);
  lcd.print(" all");
  delay(400);
  lcd.print(" for");
  delay(600);

  lcd.clear();

  // Is this the girl I adore?
  lcd.print("Is");
  delay(300);
  lcd.print(" this");
  delay(300);
  lcd.print(" the");
  delay(300);
  lcd.print(" girl");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(300);
  lcd.print(" adored?");
  delay(500);

  lcd.clear();

  // And I know I can't afford
  lcd.print("And");
  delay(300);
  lcd.print(" I");
  delay(300);
  lcd.print(" know");
  delay(300);
  lcd.print(" I");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("can't");
  delay(300);
  lcd.print(" afford");
  delay(500);

  lcd.clear();

  // watchin' her walk out the door
  lcd.print("Watchin");
  delay(300);
  lcd.print(" her");
  delay(300);
  lcd.print(" walk");
  delay(250);
  lcd.setCursor(0, 1);
  lcd.print("out");
  delay(300);
  lcd.print(" the");
  delay(300);
  lcd.print(" door");
  delay(350);

  lcd.clear();

  // So I keep it to myself
  lcd.print("So");
  delay(300);
  lcd.print(" I");
  delay(300);
  lcd.print(" keep");
  delay(300);
  lcd.print(" it");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("to");
  delay(300);
  lcd.print(" myself");
  delay(400);

  lcd.clear();

  // and keep my feet on the floor
  lcd.print("and");
  delay(300);
  lcd.print(" keep");
  delay(300);
  lcd.print(" my");
  delay(300);
  lcd.print(" feet");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("on");
  delay(300);
  lcd.print(" the");
  delay(300);
  lcd.print(" floor");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);

  lcd.clear();
  lcd.print(":)");
}

void loop() {
}