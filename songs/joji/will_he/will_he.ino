#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.print("."); //start now at 0:32
  delay(900);

  lcd.print("."); 
  delay(900);

  lcd.print(".");
  delay(800);

  lcd.clear();

  lcd.print("I");
  delay(500);
  lcd.print(" got");
  delay(500);
  lcd.print(" knots");
  delay(600);
  lcd.print(" all");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("up");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" my");
  delay(300);
  lcd.print(" chest");
  delay(800);

  lcd.clear(); 

  lcd.print("up");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" my");
  delay(300);
  lcd.print(" chest,");
  delay(500);

  lcd.clear();

  lcd.print("up");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.print(" my");
  delay(300);
  lcd.print(" chest");
  delay(800);

  lcd.clear(); 
  delay(600);

  lcd.print("Just");
  delay(400);
  lcd.print(" know");
  delay(450);
  lcd.print(" I'm");
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("trying");
  delay(500);
  lcd.print(" my");
  delay(500);
  lcd.print(" best");
  delay(650);

  lcd.clear();

  lcd.print("          I'm");
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("trying");
  delay(500);
  lcd.print(" my");
  delay(500);
  lcd.print(" best");
  delay(700);

  lcd.clear();
  delay(500);

  lcd.print("'Cause");
  delay(400);
  lcd.print(" when");
  delay(350);
  lcd.print(" you");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("look");
  delay(760);

  lcd.clear();
  delay(400);

  lcd.print("When");
  delay(340);
  lcd.print(" you");
  delay(300);
  lcd.print(" laugh");
  delay(680);

  lcd.clear();
  delay(400);

  lcd.print("When");
  delay(500);
  lcd.print(" you");
  delay(400);
  lcd.print(" smile");
  delay(700);

  lcd.clear();
  delay(400);

  lcd.print("I'll");
  delay(500);
  lcd.print(" bring");
  delay(400);
  lcd.print(" you");
  delay(360);
  lcd.setCursor(0, 1);
  lcd.print("back");
  delay(900);

  lcd.clear();

  lcd.print("And");
  delay(500);
  lcd.print(" now");
  delay(300);
  lcd.print(" I'm");
  delay(400);
  lcd.print(" sad");
  delay(800);

  lcd.clear();

  lcd.print("And");
  delay(500);
  lcd.print(" I'm");
  delay(400);
  lcd.print(" a");
  delay(300);
  lcd.print(" mess");
  delay(800);

  lcd.clear();

  lcd.print("And");
  delay(500);
  lcd.print(" now");
  delay(400);
  lcd.print(" we");
  delay(400);
  lcd.print(" high");
  delay(800);

  lcd.clear();

  lcd.print("That's");
  delay(500);
  lcd.print(" why");
  delay(500);
  lcd.print(" I");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("left");
  delay(500);

  lcd.clear();
  delay(400);

  lcd.print("That's");
  delay(400);
  lcd.print(" why");
  delay(500);
  lcd.print(" I");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("left");
  delay(200);

  lcd.clear();
  delay(800);

  lcd.print("Will");
  delay(400);
  lcd.print(" your");
  delay(400);
  lcd.print(" tongue");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("still");
  delay(500);
  lcd.print(" remember");
  delay(600);

  lcd.clear();

  lcd.print("the");
  delay(500);
  lcd.print(" taste");
  delay(500);
  lcd.print(" of");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(400);
  lcd.print(" lips?");
  delay(500);

  lcd.clear();

  lcd.print("my");
  delay(400);
  lcd.print(" lips,");
  delay(500);
  lcd.print(" my");
  delay(400);
  lcd.print(" lips,");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(400);
  lcd.print(" lips");
  delay(500);

  lcd.clear();
  delay(1200);

  lcd.print("Will");
  delay(500);
  lcd.print(" your");
  delay(400);
  lcd.print(" shadow");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("remember");
  delay(500);
  lcd.print(" the");
  delay(400);

  lcd.clear();

  lcd.print("swing");
  delay(500);
  lcd.print(" of");
  delay(500);
  lcd.print(" my");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("hips?");
  delay(600);

  lcd.clear();

  lcd.print("my");
  delay(400);
  lcd.print(" hips,");
  delay(500);
  lcd.print(" my");
  delay(400);
  lcd.print(" hips,");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(400);
  lcd.print(" hips");
  delay(500);

  lcd.clear();
  delay(770);

  lcd.print("Will");
  delay(400);
  lcd.print(" your");
  delay(400);
  lcd.print(" lover");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("caress");
  delay(500);
  lcd.print(" you");
  delay(400);

  lcd.clear();

  lcd.print("the");
  delay(400);
  lcd.print(" way");
  delay(400);
  lcd.print(" that");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(500);
  lcd.print(" did?");
  delay(500);

  lcd.clear();
  delay(500);

  lcd.print("I");
  delay(200);
  lcd.print(" did,");
  delay(700);
  lcd.print(" I");
  delay(200);
  lcd.print(" did,");
  delay(700);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(200);
  lcd.print(" did");
  delay(700);

  lcd.clear();
  delay(860);

  lcd.print("Will");
  delay(400);
  lcd.print(" you");
  delay(400);
  lcd.print(" notice");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(500);
  lcd.print(" charm");
  delay(400);
  lcd.print(" if");
  delay(500);

  lcd.clear();

  lcd.print("he");
  delay(400);
  lcd.print(" slips");
  delay(300);
  lcd.print(" up");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("one");
  delay(200);
  lcd.print(" bit?");
  delay(600);

  lcd.clear();
  delay(850);

  lcd.print("'Cause");
  delay(400);
  lcd.print(" I");
  delay(400);
  lcd.print(" don't");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("need");
  delay(500);
  lcd.print(" to");
  delay(300);
  lcd.print(" know");
  delay(1100);

  lcd.clear();
  delay(1250);

  lcd.print("I");
  delay(400);
  lcd.print(" just");
  delay(400);
  lcd.print(" wanna");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("make");
  delay(500);
  lcd.print(" sure");
  delay(400);
  lcd.print(" you're");
  delay(700);

  lcd.clear();
  lcd.print("okay,");
  delay(700);
  lcd.print(" okay...");
  delay(500);

  lcd.clear();

  lcd.print("I");
  delay(400);
  lcd.print(" don't");
  delay(400);
  lcd.print(" need");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("to");
  delay(300);
  lcd.print(" know");
  delay(1100);

  lcd.clear();
  delay(1200);

  lcd.print("I");
  delay(400);
  lcd.print(" just");
  delay(400);
  lcd.print(" wanna");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("make");
  delay(500);
  lcd.print(" sure");
  delay(400);
  lcd.print(" you're");
  delay(900);

  lcd.clear();

  lcd.print("all");
  delay(300);
  lcd.print(" safe,");
  delay(800);
  lcd.print(" all");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("safe,");
  delay(500);
  lcd.print(" all");
  delay(300);
  lcd.print(" safe");
  delay(500);

  lcd.clear();
  delay(820);

  lcd.print("Will");
  delay(400);
  lcd.print(" he");
  delay(400);
  lcd.print(" play");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(500);
  lcd.print(" those");
  delay(400);
  lcd.print(" songs");
  delay(500);

  lcd.clear();

  lcd.print("just");
  delay(400);
  lcd.print(" the");
  delay(400);
  lcd.print(" way");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("that");
  delay(500);
  lcd.print(" I");
  delay(250);
  lcd.print(" did?");
  delay(500);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" did,");
  delay(700);
  lcd.print(" I");
  delay(200);
  lcd.print(" did,");
  delay(700);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(200);
  lcd.print(" did");
  delay(700);

  lcd.clear();
  delay(600);

  lcd.print("Will");
  delay(400);
  lcd.print(" he");
  delay(400);
  lcd.print(" play");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(300);
  lcd.print(" so");
  delay(300);
  lcd.print(" strong");
  delay(400);

  lcd.clear();

  lcd.print("just");
  delay(400);
  lcd.print(" the");
  delay(400);
  lcd.print(" way");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("that");
  delay(500);
  lcd.print(" I");
  delay(250);
  lcd.print(" did?");
  delay(500);

  lcd.clear();
  delay(3650);


  lcd.print("Will");
  delay(300);
  lcd.print(" he");
  delay(300);
  lcd.print(" treat");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(300);
  lcd.print(" like");
  delay(400);
  lcd.print(" shit");
  delay(500);

  lcd.clear();

  lcd.print("just");
  delay(400);
  lcd.print(" the");
  delay(200);
  lcd.print(" way");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("that");
  delay(300);
  lcd.print(" I");
  delay(400);
  lcd.print(" did?");
  delay(600);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" did,");
  delay(700);
  lcd.print(" I");
  delay(200);
  lcd.print(" did,");
  delay(700);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(200);
  lcd.print(" did");
  delay(700);

  lcd.clear();

  lcd.print("'Cause");
  delay(400);
  lcd.print(" I");
  delay(400);
  lcd.print(" don't");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("blame");
  delay(500);
  lcd.print(" him");
  delay(1000);


  lcd.clear();
  delay(8000);

  lcd.print("'Cause");
  delay(400);
  lcd.print(" I");
  delay(400);
  lcd.print(" don't");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("need");
  delay(300);
  lcd.print(" to");
  delay(300);
  lcd.print(" know");
  delay(1400);

  lcd.clear();
  delay(1250);

  lcd.print("I");
  delay(400);
  lcd.print(" just");
  delay(400);
  lcd.print(" wanna");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("make");
  delay(500);
  lcd.print(" sure");
  delay(400);
  lcd.print(" you're");
  delay(700);

  lcd.clear();
  lcd.print("okay");
  delay(1200);

  lcd.clear();

  lcd.print("I");
  delay(400);
  lcd.print(" don't");
  delay(400);
  lcd.print(" need");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("to");
  delay(300);
  lcd.print(" know");
  delay(1100);

  lcd.clear();
  delay(1200);

  lcd.print("I");
  delay(400);
  lcd.print(" just");
  delay(400);
  lcd.print(" wanna");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("make");
  delay(500);
  lcd.print(" sure");
  delay(400);
  lcd.print(" you're");
  delay(500);

  lcd.clear();

  lcd.print("all");
  delay(300);
  lcd.print(" safe");
  delay(800);
  lcd.clear();

}

void loop() {
}