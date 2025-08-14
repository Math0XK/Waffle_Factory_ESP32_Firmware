#ifndef OLEDMANAGER_HPP
#define OLEDMANAGER_HPP

#include <U8g2lib.h>
#include <Wire.h>

extern U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2;



extern void setupOLED();
extern void setSH1106Offset(uint8_t offset);
extern void drawText(const char* text);


#endif // OLEDMANAGER_HPP