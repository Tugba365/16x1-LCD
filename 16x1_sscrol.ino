
#include <LiquidCrystal.h>

int yes = 8;
int no = 9;

int yesStatus;
int noStatus;


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
 pinMode(yes, INPUT_PULLUP);
 pinMode(no, INPUT_PULLUP);
 
  lcd.begin(8, 2);
  lcd.print("hello there");
  
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
      lcd.scrollDisplayLeft();
        delay(350);}
         lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Is this writing scrolling?");
  lcd.setCursor(0, 2);
  lcd.write("yes");
  lcd.setCursor(10, 2);
  lcd.write("no");
delay(5000);
lcd.clear();

    evetdeger = digitalRead(yes);
    hayirdeger = digitalRead(no);
  if(yesStatus == HIGH && noStatus == LOW)
  {
    lcd.clear();
    delay(500);
    lcd.print("okay!");
    delay(5000);
    }
    else
    {
      lcd.setCursor(10,0);
      lcd.print("okaay!");
      
      for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
      lcd.scrollDisplayLeft();
      delay(150);}
        for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
        lcd.scrollDisplayLeft();
        delay(150);}
          for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
           lcd.scrollDisplayRight();
            delay(150);}
         }
  }

void loop() {}
