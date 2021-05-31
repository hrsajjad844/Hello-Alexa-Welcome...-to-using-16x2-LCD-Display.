#include <LiquidCrystal.h>
int Contrast = 60;
const int rs= 12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){

  analogWrite(6, Contrast);
  Serial.begin(9600);
  lcd.begin(16,2);
  
}

void loop(){

  lcd.setCursor(0,0);
  lcd.print("Hello Alexa!");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("Welcome...");
  delay(3000);
}
