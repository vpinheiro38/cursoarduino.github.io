#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char hello[] = "Ola, meu nome e:";
char nome[] = "Victor          ";

void setup(){
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
}

void loop() {
  for(int i = 0; i < 16; i++) {
    lcd.print(hello[i]);
    delay(250);
  }
   
   lcd.setCursor(0, 1);
   
   for(int i = 0; i < 16; i++) {
     lcd.print(nome[i]);
     delay(250);
   }
   
   lcd.setCursor(0, 0);
   lcd.print("                ");
   lcd.setCursor(0, 1);
   lcd.print("                ");
   lcd.setCursor(0, 0);
}
