#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
int lcdColumns = 16;
int lcdRows = 4;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);
void setCursor(int x, int y)
{
  if (y >= 2)
  {
    x -= 4;
  }
  lcd.setCursor(x, y);
}
void lcdPrint(int x, int y, const char message[])
{
  setCursor(x, y);
  lcd.print(message);
}
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcdPrint(4, 0, "Hi ABIN");
  lcdPrint(3, 1, "Welcome To");
  lcdPrint(3, 2, "Hack Club");
  lcdPrint(6, 3, "KMEA");
}

void loop()
{
}