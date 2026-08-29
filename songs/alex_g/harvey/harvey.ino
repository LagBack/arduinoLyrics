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

  lcd.print("Success");
  delay(940);
  lcd.print(" for");
  delay(450);
  lcd.print(" my");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("buddies");
  delay(450);

  lcd.clear();

  lcd.print("Success");
  delay(940);
  lcd.print(" for");
  delay(450);
  lcd.print(" my");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("friends");
  delay(650);

  lcd.clear();
  delay(730);

  lcd.print("Success");
  delay(800);
  lcd.print(" is");
  delay(450);
  lcd.print(" the");
  delay(470);
  lcd.setCursor(0, 1);
  lcd.print("only");
  delay(300);
  lcd.print(" thing");
  delay(350);
  lcd.print(" I");
  delay(510);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("      understand");
  delay(1500);

  lcd.clear();

  lcd.print("Head");
  delay(550);
  lcd.print(" back");
  delay(540);
  lcd.print(" home");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("to");
  delay(420);
  lcd.print(" the");
  delay(350);
  lcd.print(" place");
  delay(360);
  lcd.clear();\
  delay(50);
  lcd.print("I");
  delay(520);
   lcd.print(" grew");
  delay(400);
   lcd.print(" up");
  delay(750);

  lcd.clear();

  lcd.print("Give");
  delay(480);
  lcd.print(" my");
  delay(480);
  lcd.print(" medals");
  delay(480);
  lcd.setCursor(0, 1);
  lcd.print("to");
  delay(400);
  lcd.print(" the");
  delay(400);
  lcd.print(" ones");
  delay(450);
  lcd.clear();
  lcd.setCursor(0, 1);
  delay(90);
  lcd.print("that");
  delay(250);
  lcd.print(" I");
  delay(200);
  lcd.print(" love");
  delay(700);

  lcd.clear();

  lcd.print("I'll");
  delay(500);
  lcd.print(" chase");
  delay(590);
  lcd.setCursor(0, 1);
  lcd.print("Harvey");
  delay(670);
  lcd.print(" through");
  delay(500);

  lcd.clear();

  lcd.print("the");
  delay(400);
  lcd.print(" door");
  delay(600);
  lcd.print(" in");
  delay(480);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(390);
  lcd.print(" wall");
  delay(610);
  
  lcd.clear();


  lcd.print("He");
  delay(300);
  lcd.print(" says,");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("'Never");
  delay(400);
  lcd.print(" catch");
  delay(400);
  lcd.print(" me,");
  delay(700);
  lcd.clear();
  lcd.print("never");
  delay(400);
  lcd.print(" miss");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("me");
  delay(360);
  lcd.print(" at");
  delay(300);
  lcd.print(" all'");
  delay(520);

  lcd.clear();

  lcd.print("Drool");
  delay(590);
  lcd.print(" comes");
  delay(490);
  lcd.print(" down");
  delay(460);
  lcd.setCursor(0, 1);
  lcd.print("from");
  delay(380);
  lcd.print(" the");
  delay(450);
  lcd.print(" corner");
  delay(400);
  lcd.clear();
  lcd.print("of");
  delay(400);
  lcd.print(" his");
  delay(480);
  lcd.print(" mouth");
  delay(700);

  lcd.clear();


  lcd.print("I");
  delay(300);
  lcd.print(" say,");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(450);
  lcd.print(" love");
  delay(250);
  lcd.print(" you,");
  delay(1150);

  lcd.clear();
  lcd.print("Harvey,");
  delay(790);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(250);
  lcd.print(" cut");
  delay(350);
  lcd.print(" it");
  delay(360);
  lcd.print(" out");
  delay(950);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" love");
  delay(350);
  lcd.print(" winning,");
  delay(730);
  lcd.setCursor(0, 1);
  lcd.print("baby,");
  delay(600);
  lcd.print(" I");
  delay(500);
  lcd.print(" want");
  delay(550);

  lcd.clear();
  lcd.setCursor(10, 1);
  lcd.print("it");
  delay(300);
  lcd.print(" all");
  delay(990);

  lcd.clear();

  lcd.print("I");
  delay(600);
  lcd.print(" wanna");
  delay(600);
  lcd.print(" prove");
  delay(700);
  lcd.setCursor(0, 1);
  lcd.print("that");
  delay(500);
  lcd.print(" I");
  delay(550);
  lcd.print(" got");
  delay(300);

  lcd.clear();
  delay(150);
  lcd.setCursor(8, 1);

  lcd.print("the");
  delay(350);
  lcd.print(" ball");
  delay(1090);

  lcd.clear();

  lcd.print("Harvey");
  delay(500);
  lcd.print(" keeps");
  delay(500);
  lcd.print(" on");
  delay(500);
  lcd.setCursor(0, 1);  
  lcd.print("playing");
  delay(600);
  lcd.print(" with");
  delay(400);
  lcd.print(" his");
  delay(400);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("            food");
  delay(650);
  lcd.clear();

  lcd.print("He");
  delay(400);
  lcd.print(" doesn't");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("understand");
  delay(600);
  lcd.clear();
  lcd.print("what");
  delay(450);
  lcd.print(" big");
  delay(540);
  lcd.print(" boys");
  delay(540);
  lcd.setCursor(0, 1);
  lcd.print("do");
  delay(900);
  
  lcd.clear();

  lcd.print("He");
  delay(600);
  lcd.print(" wakes");
  delay(600);
  lcd.print(" up");
  delay(500);
  lcd.print(" in");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("the");
  delay(500);
  lcd.print(" middle");
  delay(400);
  lcd.print(" of");
  delay(500);
  lcd.clear();
  
  lcd.print("the");
  delay(400);
  lcd.print(" night");
  delay(400);

  lcd.clear();

  lcd.print("I");
  delay(700);
  lcd.print(" run");
  delay(500);
  lcd.print(" in");
  delay(550);
  lcd.print(" and");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("turn");
  delay(500);
  lcd.print(" on"); 
  delay(400);
  lcd.print(" the");
  delay(450);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("           light");
  delay(600);

  lcd.clear();

  lcd.print("Run");
  delay(670);
  lcd.print(" my");
  delay(550);
  lcd.print(" hands");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("through");
  delay(500);
  lcd.print(" his");
  delay(400);
  lcd.clear();

  lcd.print("short");
  delay(600);
  lcd.print(" black");
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("hair");
  delay(600);

  lcd.clear();

  lcd.print("I");
  delay(600);
  lcd.print(" love");
  delay(500);
  lcd.print(" you,");
  delay(750);
  lcd.setCursor(0, 1);
  lcd.print("Harvey,");
  delay(600);
  lcd.clear();

  lcd.print("I");
  delay(300);
  lcd.print(" don't");
  delay(600);
  lcd.print(" care");
  delay(600);
  lcd.print(".");
  delay(600);
  lcd.print(".");
  delay(600);
  lcd.print(".");

}

void loop() {
}