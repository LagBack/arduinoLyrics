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

  lcd.print("Sunken");
  delay(240);
  lcd.print(" city");
  delay(200);
  lcd.print(" by");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(200);
  lcd.print(" ocean");
  delay(400);

  lcd.clear();
  delay(900);

  lcd.print("You");
  delay(240);
  lcd.print(" could");
  delay(200);
  lcd.print(" teach");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(100);
  lcd.print(" 7th");
  delay(350);
  lcd.print(" grade");
  delay(400);

  lcd.clear();
  delay(900);

  lcd.print("Do");
  delay(200);
  lcd.print(" you");
  delay(200);
  lcd.print(" think");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("because");
  delay(150);
  lcd.print(" you");
  delay(200);

  lcd.clear();  
  lcd.setCursor(5, 1);
  lcd.print("chose");
  delay(200);
  lcd.print(" to?");
  delay(400);

  lcd.clear();
  delay(900);

  lcd.print("You");
  delay(400);
  lcd.print(" always!");
  delay(800);

  lcd.clear();
  delay(900);

  lcd.print("Fell");
  delay(240);
  lcd.print(" in");
  delay(200);
  lcd.print(" love");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(100);
  lcd.print(" way");
  delay(200);
  lcd.print(" you're");
  delay(200);

  lcd.clear();  
  lcd.setCursor(5, 1);
  lcd.print("supposed");
  delay(200);
  lcd.print(" to");
  delay(300);

  lcd.clear();
  delay(900);

  lcd.print("At");
  delay(240);
  lcd.print(" the");
  delay(200);
  lcd.print(" target");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("inside");
  delay(300);
  lcd.print(" the");
  delay(200);
  lcd.print(" mall");
  delay(300);

  lcd.clear();
  delay(800);

  lcd.print("Fear");
  delay(200);
  lcd.print(" of");
  delay(200);
  lcd.print(" what");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(100);
  lcd.print(" weren't");
  delay(200);

  lcd.clear();  
  lcd.setCursor(5, 1);
  lcd.print("exposed");
  delay(200);
  lcd.print(" to");
  delay(300);

  lcd.clear();
  delay(800);

  lcd.print("There's");
  delay(300);
  lcd.print(" no");
  delay(500);
  lcd.print(" way!");
  delay(500);

  lcd.clear();
  delay(700);

  lcd.print("To");
  delay(200);
  lcd.print(" keep");
  delay(200);
  lcd.print(" in");
  delay(100);
  lcd.print(" touch");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("with");
  delay(200);
  lcd.print(" certain");
  delay(200);

  lcd.clear();  
  lcd.setCursor(7, 1);
  lcd.print("people");
  delay(500);

  lcd.clear();
  delay(800);

  lcd.print("Wonder");
  delay(200);
  lcd.print(" how");
  delay(200);
  lcd.print(" long");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("something");
  delay(150);
  lcd.print(" can");
  delay(200);

  lcd.clear();  
  lcd.setCursor(11, 1);
  lcd.print("last");
  delay(400);

  lcd.clear();
  delay(200);

  lcd.print("Pretty");
  delay(300);
  lcd.print(" sure");
  delay(300);
  lcd.print(" most");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("people");
  delay(250);
  lcd.print(" don't");
  delay(250);

  lcd.clear();

  lcd.print("think");
  delay(300);
  lcd.print(" about");
  delay(200);
  lcd.print(" that");
  delay(300);

  lcd.clear();
  delay(900);

  lcd.print("But");
  delay(200);
  lcd.print(" who");
  delay(200);
  lcd.print(" the");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("fuck's");
  delay(150);
  lcd.print(" laughing");
  delay(240);

  lcd.clear();  
  lcd.setCursor(11, 1);
  lcd.print("now?");
  delay(400);

  lcd.clear();
  delay(600);

  lcd.print("Sunken");
  delay(240);
  lcd.print(" city");
  delay(200);
  lcd.print(" by");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(200);
  lcd.print(" ocean");
  delay(400);

  lcd.clear();
  delay(300);

  lcd.print("Car");
  delay(240);
  lcd.print(" smells");
  delay(200);
  lcd.print(" like");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("hot");
  delay(500);
  lcd.print(" gatorade");
  delay(700);

  lcd.clear();
  delay(400);

  lcd.print("Do");
  delay(200);
  lcd.print(" you");
  delay(200);
  lcd.print(" think");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("because");
  delay(350);
  lcd.print(" you");
  delay(200);

  lcd.clear();  
  lcd.setCursor(6, 1);
  lcd.print("chose");
  delay(300);
  lcd.print(" to?");
  delay(400);

  lcd.clear();
  delay(200);

  lcd.print("Do");
  delay(200);
  lcd.print(" you");
  delay(200);
  lcd.print(" think");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("things");
  delay(100);
  lcd.print(" are");
  delay(200);

  lcd.clear();

  lcd.print("different");
  delay(200);
  lcd.print(" than");
  delay(140);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(150);
  lcd.print(" think");
  delay(200);
  lcd.print(" they");
  delay(150);

  lcd.clear();  
  lcd.setCursor(11, 1);
  lcd.print("are?");
  delay(500);

  lcd.clear();
  delay(460);

  lcd.print("Never");
  delay(200);
  lcd.print(" really");
  delay(200);
  lcd.print(" had");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("a");
  delay(200);
  lcd.print(" drug");
  delay(300);
  lcd.print(" phase");
  delay(500);

  lcd.clear();
  delay(700);

  lcd.print("So");
  delay(200);
  lcd.print(" you");
  delay(200);
  lcd.print(" think");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("you're");
  delay(100);
  lcd.print(" fucking");
  delay(140);

  lcd.clear();  
  lcd.setCursor(2, 1);
  lcd.print("miserable");
  delay(200);
  lcd.print(" now?");
  delay(500);

  lcd.clear();
  delay(500);

  lcd.print("For");
  delay(200);
  lcd.print(" the");
  delay(200);
  lcd.print(" Catalina");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("Fight");
  delay(300);
  lcd.print(" Song");
  delay(500);

  lcd.clear();
  delay(700);

  lcd.print("You");
  delay(400);
  lcd.print(" al-");
  delay(400);
  lcd.clear();
  lcd.print("You always!");
  delay(1000);


  lcd.clear();
  lcd.noBacklight();
}

void loop() {
}