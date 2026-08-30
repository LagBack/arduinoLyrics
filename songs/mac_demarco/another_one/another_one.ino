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

  lcd.print("Feeling");
  delay(940);
  lcd.print(" so");
  delay(800);
  lcd.setCursor(0, 1);
  lcd.print("confused,");
  delay(1260);

  lcd.clear();

  lcd.print("You");
  delay(600);
  lcd.print(" don't");
  delay(320);
  lcd.print(" know");
  delay(350);
  lcd.setCursor(0, 1);
  lcd.print("what");
  delay(200);
  lcd.print(" to");
  delay(200);
  lcd.print(" do");
  delay(1800);

  lcd.clear();

  lcd.print("Afraid");
  delay(500);
  lcd.print(" she");
  delay(500);
  lcd.print(" might");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("not");
  delay(350);
  lcd.print(" love");
  delay(400);
  lcd.print(" you");
  delay(950);

  lcd.clear();

  lcd.setCursor(9, 1);
  lcd.print("anymore");
  delay(2300);
  lcd.clear();
  delay(1000);

  lcd.print("And");
  delay(500);
  lcd.print(" though");
  delay(500);
  lcd.print(" she");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("says");
  delay(300);
  lcd.print(" she");
  delay(300);
  lcd.print(" does");
  delay(1100);

  lcd.clear();

  lcd.print("And");
  delay(500);
  lcd.print(" hasn't");
  delay(350);
  lcd.print(" lost");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("your");
  delay(300);
  lcd.print(" trust");
  delay(1700);

  lcd.clear();

  lcd.print("Who");
  delay(500);
  lcd.print(" could");
  delay(500);
  lcd.print(" that");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("be");
  delay(300);
  lcd.print(" knocking");
  delay(1200);
  
  lcd.clear();
  lcd.setCursor(0,1);

  lcd.print("at");
  delay(300);
  lcd.print(" her");
  delay(300);
  lcd.print(" door?");
  delay(2500);

  lcd.clear();
  delay(1000);

  lcd.print("Must");
  delay(600);
  lcd.print(" be");
  delay(900);
  lcd.print(" another");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("one");
  delay(3000);

  lcd.clear();
  delay(1600);

  lcd.print("Must");
  delay(600);
  lcd.print(" be");
  delay(800);
  lcd.print(" another");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("one");
  delay(600);
  lcd.print(" she");
  delay(500);
  lcd.print(" loves");
  delay(2000);

  lcd.clear();
  delay(1600);

  lcd.print("Must");
  delay(600);
  lcd.print(" be");
  delay(900);
  lcd.print(" another");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("one");
  delay(3000);

  lcd.clear();
  delay(1600);

  lcd.print("Must");
  delay(600);
  lcd.print(" be");
  delay(800);
  lcd.print(" another");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("one");
  delay(600);
  lcd.print(" she");
  delay(500);
  lcd.print(" loves");
  delay(3500);

  lcd.clear();

  lcd.print(":(");
  delay(400);
  lcd.clear();
  lcd.print(" :(");
  delay(400);
  lcd.clear();
  lcd.print("  :(");
  delay(400);
  lcd.clear();
  lcd.print("   :(");
  delay(400);
  lcd.clear();
  lcd.print("    :(");
  delay(400);
  lcd.clear();
  lcd.print("     :(");
  delay(400);
  lcd.clear();
  lcd.print("      :(");
  delay(400);
  lcd.clear();
  lcd.print("       :(");
  delay(400);
  lcd.clear();
  lcd.print("        :(");
  delay(400);
  lcd.clear();
  lcd.print("         :(");
  delay(400);
  lcd.clear();
  lcd.print("          :(");
  delay(400);
  lcd.clear();
  lcd.print("           :(");
  delay(400);
  lcd.clear();
  lcd.print("            :(");
  delay(400);
  lcd.clear();
  lcd.print("             :(");
  delay(400);
  lcd.clear();
  lcd.print("               :(");
  delay(400);
  lcd.clear();
  lcd.print("                :(");
  delay(400);
  lcd.clear();

}

void loop() {
}