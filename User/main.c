#include "stm32f4xx.h"
#include "Lcd_Driver.h"
#include "GUI.h"

int main() {
  Lcd_Init();
  LCD_LED_SET;
  Gui_DrawFont_GBK16(20,10,BLUE,GRAY0,"Color Test");
  while (1);
}
