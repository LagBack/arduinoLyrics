#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  //press play on the song when the second dot shows up

  lcd.print(".");
  delay(900);

  lcd.print(".");
  delay(850);

  lcd.print(".");
  delay(850);

  lcd.clear();

  lcd.print("Nothing");
  delay(400);
  lcd.print(" but");
  delay(300);;
  lcd.print(" a");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("heartbreak");
  delay(400);

  lcd.clear();

  lcd.print("Causes");
  delay(300);
  lcd.print(" some");
  delay(220);
  lcd.setCursor(0, 1);
  lcd.print("real");
  delay(200);
  lcd.print(" change");
  delay(400);

  lcd.clear();

  lcd.print("When");
  delay(300);
  lcd.print(" you");
  delay(300);
  lcd.print(" feel");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("down,");
  delay(250);
  lcd.print(" you'll");
  delay(200);
  lcd.print(" be");
  delay(300);

  lcd.clear();

  lcd.print("stuck");
  delay(200);
  lcd.print(" in");
  delay(150);
  lcd.print(" them");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("dark");
  delay(100);
  lcd.print(" days");
  delay(400);

  lcd.clear();

  lcd.print("But");
  delay(200);
  lcd.print(" it'll");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("turn");
  delay(200);
  lcd.print(" around");
  delay(500);

  lcd.clear();

  lcd.print("I");
  delay(300);
  lcd.print(" remember");
  delay(200);
  lcd.print(" on");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(200);
  lcd.print(" worst");
  delay(200);
  lcd.print(" days");
  delay(480);

  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("       birthdays");
  delay(440);

  lcd.clear();

  lcd.print("Sitting");
  delay(500);
  lcd.print(" inside");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(300);
  lcd.print(" room");
  delay(1300);
  
  lcd.clear();

  lcd.print("Suddenly,");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("a");
  delay(300);
  lcd.print(" limousine");
  delay(690);

  lcd.clear();

  lcd.print("crashes");
  delay(300);
  lcd.print(" fucking");
  delay(400);
  lcd.setCursor(0 ,1);
  lcd.print("into");
  delay(300);
  lcd.print(" me");
  delay(650);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" can't");
  delay(300);
  lcd.print(" feel");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("less");
  delay(300);
  lcd.print(" dead");
  delay(300);
  lcd.print(" than");
  delay(200);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" do");
  delay(300);
  lcd.print(" now");
  delay(520);

  lcd.clear();

  lcd.print("I");
  delay(300);
  lcd.print(" can't");
  delay(200);
  lcd.print(" fall");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("in");
  delay(200);
  lcd.print(" love");
  delay(200);
  lcd.print(" with");
  delay(300);
  lcd.print(" you");
  delay(550);

  lcd.clear();

  lcd.print("I");
  delay(300);
  lcd.print(" don't");
  delay(200);
  lcd.print(" know");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("what");
  delay(200);
  lcd.print(" you");
  delay(200);
  lcd.print(" will");
  delay(300);
  lcd.print(" do");
  delay(350);

  lcd.clear();

  lcd.print("to");
  delay(450);
  lcd.print(" me...");
  delay(800);

  lcd.clear();

  lcd.print("I'ma");
  delay(300);
  lcd.print(" hang");
  delay(300);
  lcd.print(" from");
  delay(400);
  lcd.print(" a");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("mothafuckin");
  delay(400);
  lcd.print(" tree");
  delay(800);

  lcd.clear();

  lcd.print("I'ma");
  delay(300);
  lcd.print(" aim");
  delay(300);
  lcd.print(" at");
  delay(200);
  lcd.print(" my");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("mothafckin");
  delay(340);
  lcd.print(" brain");
  delay(100);

  lcd.clear();

  lcd.print("Nothing");
  delay(400);
  lcd.print(" but");
  delay(300);;
  lcd.print(" a");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("heartbreak");
  delay(400);

  lcd.clear();

  lcd.print("Causes");
  delay(300);
  lcd.print(" some");
  delay(220);
  lcd.setCursor(0, 1);
  lcd.print("real");
  delay(200);
  lcd.print(" change");
  delay(400);

  lcd.clear();

  lcd.print("When");
  delay(300);
  lcd.print(" you");
  delay(300);
  lcd.print(" feel");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("down,");
  delay(250);
  lcd.print(" you'll");
  delay(200);
  lcd.print(" be");
  delay(300);

  lcd.clear();

  lcd.print("stuck");
  delay(200);
  lcd.print(" in");
  delay(150);
  lcd.print(" them");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("dark");
  delay(100);
  lcd.print(" days");
  delay(400);

  lcd.clear();

  lcd.print("But");
  delay(200);
  lcd.print(" it'll");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("turn");
  delay(200);
  lcd.print(" around");
  delay(500);

  lcd.clear();

  lcd.print("I");
  delay(300);
  lcd.print(" remember");
  delay(200);
  lcd.print(" on");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(200);
  lcd.print(" worst");
  delay(200);
  lcd.print(" days");
  delay(480);

  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("       birthdays");
  delay(440);

  lcd.clear();

  lcd.print("Sitting");
  delay(500);
  lcd.print(" inside");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(300);
  lcd.print(" room");
  delay(1300);
  
  lcd.clear();

  lcd.print("Suddenly,");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("a");
  delay(300);
  lcd.print(" limousine");
  delay(690);

  lcd.clear();

  lcd.print("crashes");
  delay(300);
  lcd.print(" fucking");
  delay(400);
  lcd.setCursor(0 ,1);
  lcd.print("into");
  delay(300);
  lcd.print(" me");
  delay(650);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" can't");
  delay(300);
  lcd.print(" feel");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("less");
  delay(300);
  lcd.print(" dead");
  delay(300);
  lcd.print(" than");
  delay(200);

  lcd.clear();

  lcd.print("I");
  delay(200);
  lcd.print(" do");
  delay(300);
  lcd.print(" now");
  delay(420);

  lcd.clear();

  lcd.print("Woke");
  delay(100);
  lcd.print(" up");
  delay(300);
  lcd.print(" this");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("morning");
  delay(100);
  lcd.print(" to");
  delay(100);
  lcd.print(" a");
  delay(200);
  
  lcd.clear();

  lcd.print("text");
  delay(200);
  lcd.print(" on");
  delay(200);
  lcd.print(" my");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("phone");
  delay(450);

  lcd.clear();

  lcd.print("And");
  delay(200);
  lcd.print(" it's");
  delay(200);
  lcd.print(" saying");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("that");
  delay(100);
  lcd.print(" she");
  delay(100);
  lcd.print(" hates");
  delay(200);

  lcd.clear();

  lcd.print("me");
  delay(200);
  lcd.print(" and");
  delay(200);
  lcd.print(" i'm");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("all");
  delay(100);
  lcd.print(" on");
  delay(200);
  lcd.print(" my");
  delay(200);
  lcd.print(" own");
  delay(300);

  lcd.clear();

  lcd.print("I");
  delay(150);
  lcd.print(" guess");
  delay(200);
  lcd.print(" I'm");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("lonely");
  delay(400);

  lcd.clear();

  lcd.print("I'm");
  delay(200);
  lcd.print(" not");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("scared");
  delay(300);

  lcd.clear();

  lcd.print("Spent");
  delay(200);
  lcd.print(" my");
  delay(300);
  lcd.print(" whole");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("life");
  delay(300);
  lcd.print(" fucking");
  delay(300);

  lcd.clear();

  lcd.print("lonely,");
  delay(500);
  lcd.print(" so");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("I");
  delay(200);
  lcd.print(" don't");
  delay(300);
  lcd.print(" care");
  delay(450);

  lcd.clear();

  lcd.print("Nothing");
  delay(400);
  lcd.print(" but");
  delay(300);
  lcd.print(" a");
  delay(300);
  lcd.setCursor(0, 1);
  lcd.print("heartbreak");
  delay(400);

  lcd.clear();

  lcd.print("Causes");
  delay(300);
  lcd.print(" some");
  delay(220);
  lcd.setCursor(0, 1);
  lcd.print("real");
  delay(200);
  lcd.print(" change");
  delay(400);

  lcd.clear();

  lcd.print("When");
  delay(300);
  lcd.print(" you");
  delay(300);
  lcd.print(" feel");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("down,");
  delay(250);
  lcd.print(" you'll");
  delay(200);
  lcd.print(" be");
  delay(300);

  lcd.clear();

  lcd.print("stuck");
  delay(200);
  lcd.print(" in");
  delay(150);
  lcd.print(" them");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("dark");
  delay(100);
  lcd.print(" days");
  delay(400);

  lcd.clear();

  lcd.print("But");
  delay(200);
  lcd.print(" it'll");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("turn");
  delay(200);
  lcd.print(" around");
  delay(500);

  lcd.clear();

  lcd.print("I");
  delay(300);
  lcd.print(" remember");
  delay(200);
  lcd.print(" on");
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(200);
  lcd.print(" worst");
  delay(200);
  lcd.print(" days");
  delay(480);

  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("       birthdays");
  delay(440);

  lcd.clear();

  lcd.print("Sitting");
  delay(500);
  lcd.print(" inside");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("my");
  delay(300);
  lcd.print(" room");
  delay(1300);
  lcd.clear();
}

void loop() {
}