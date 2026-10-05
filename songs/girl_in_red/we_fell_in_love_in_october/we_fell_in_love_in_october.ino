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

  lcd.print("Smoking");
  delay(840);
  lcd.setCursor(0, 1);
  lcd.print("     cigarettes");
  delay(880);

  lcd.clear();

  lcd.print("on");
  delay(590);
  lcd.print(" the");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("      roof");
  delay(900);

  lcd.clear();
  delay(3000);

  lcd.print("You");
  delay(500);
  lcd.print(" look");
  delay(400);
  lcd.setCursor(0, 1); 
  lcd.print("     so");
  delay(420);
  lcd.print(" pretty");
  delay(500);

  lcd.clear();
  
  lcd.print("And");
  delay(400);
  lcd.print(" I");
  delay(380);
  lcd.print(" love");
  delay(600);
  lcd.setCursor(0, 1); 
  lcd.print("     this");
  delay(500);
  lcd.print(" view");
  delay(800);

  lcd.clear();
  delay(3000);

  lcd.print("We");
  delay(520);
  lcd.print(" fell");
  delay(600);
  lcd.print(" in");
  delay(200);
  lcd.print(" love");
  delay(780);
  lcd.setCursor(0, 1);
  lcd.print("in");
  delay(540);
  lcd.print(" october");
  delay(800);

  lcd.clear();
  delay(850);

  lcd.print("That's");
  delay(300);
  lcd.print(" why");
  delay(1780);
  lcd.setCursor(0, 1); 
  lcd.print("     I");
  delay(450);
  lcd.print(" love");
  delay(670);
  lcd.print(" fall");
  delay(800);

  lcd.clear();
  delay(350);

  lcd.print("Looking");
  delay(800);
  lcd.print(" at");
  delay(900);
  lcd.setCursor(0, 1); 
  lcd.print("     the");
  delay(450);
  lcd.print(" stars");
  delay(670);

  lcd.clear();
  delay(350);

  lcd.print("Admiring");
  delay(800);
  lcd.print(" from");
  delay(880);
  lcd.setCursor(0, 1); 
  lcd.print("     afar");
  delay(950);

  lcd.clear();
  delay(700);

  lcd.print("My");
  delay(300);
  lcd.print(" girl,");
  delay(580);
  lcd.clear();

  lcd.print("        My");
  delay(300);
  lcd.print(" girl,");
  delay(580);
  lcd.clear();

  lcd.setCursor(0, 1); 
  lcd.print("My");
  delay(900);
  lcd.print(" girl");
  delay(1280);
  lcd.clear();

  delay(1000);

  lcd.print("You");
  delay(400);
  lcd.print(" will");
  delay(580);
  lcd.print(" be");
  delay(580);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(300);
  lcd.print(" girl,");
  delay(580);
  lcd.clear();

  lcd.print("My");
  delay(300);
  lcd.print(" girl,");
  delay(580);
  lcd.clear();

  lcd.print("        My");
  delay(300);
  lcd.print(" girl,");
  delay(580);
  lcd.clear();

  lcd.setCursor(0, 1); 
  lcd.print("My");
  delay(900);
  lcd.print(" girl");
  delay(1280);
  lcd.clear();

  delay(1000);

  lcd.print("You");
  delay(400);
  lcd.print(" will");
  delay(580);
  lcd.print(" be");
  delay(580);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(300);
  lcd.print(" world,");
  delay(580);
  lcd.clear();

  lcd.print("My");
  delay(300);
  lcd.print(" world,");
  delay(580);
  lcd.clear();

  lcd.print("       My");
  delay(300);
  lcd.print(" world,");
  delay(580);
  lcd.clear();

  lcd.setCursor(0, 1); 
  lcd.print("My");
  delay(900);
  lcd.print(" world");
  delay(1280);
  lcd.clear();

  delay(1000);

  lcd.print("You");
  delay(400);
  lcd.print(" will");
  delay(580);
  lcd.print(" be");
  delay(580);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(300);
  lcd.print(" girl");
  delay(1280);
  lcd.clear();

  delay(6000);
  lcd.noBacklight();
  
}

void loop() {
}