#include "stm32f4xx.h"

#define RED  	0xf800
#define GREEN	0x07e0
#define BLUE 	0x001f
#define WHITE	0xffff
#define BLACK	0x0000
#define YELLOW  0xFFE0
#define GRAY0   0xEF7D   	//灰色0 3165 00110 001011 00101
#define GRAY1   0x8410      	//灰色1      00000 000000 00000
#define GRAY2   0x4208      	//灰色2  1111111111011111

#define	LCD_CS_SET  	GPIOC->BSRRL = GPIO_Pin_0
#define	LCD_RS_SET  	GPIOC->BSRRL = GPIO_Pin_1
#define	LCD_LED_SET  	GPIOC->BSRRL = GPIO_Pin_2
#define LCD_RST_SET     GPIOC->BSRRL = GPIO_Pin_3
#define	LCD_CS_CLR  	GPIOC->BSRRH = GPIO_Pin_0
#define	LCD_RS_CLR  	GPIOC->BSRRH = GPIO_Pin_1
#define	LCD_LED_CLR  	GPIOC->BSRRH = GPIO_Pin_2
#define LCD_RST_CLR     GPIOC->BSRRH = GPIO_Pin_3

void LCD_GPIO_Init(void);
void Lcd_WriteIndex(u8 Index);
void Lcd_WriteData(u8 Data);
void Lcd_WriteReg(u8 Index,u8 Data);
u16 Lcd_ReadReg(u8 LCD_Reg);
void Lcd_Reset(void);
void Lcd_Init(void);
void Lcd_Clear(u16 Color);
void Lcd_SetXY(u16 x,u16 y);
void Gui_DrawPoint(u16 x,u16 y,u16 Data);
void Lcd_SetRegion(u16 x_start,u16 y_start,u16 x_end,u16 y_end);
void LCD_WriteData_16Bit(u16 Data);

