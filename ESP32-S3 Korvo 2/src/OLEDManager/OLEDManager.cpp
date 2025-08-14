#include "OLEDManager.hpp"

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setupOLED() {
    Wire.begin(11, 12);
    u8g2.begin();
    u8g2.clearBuffer();
}

void setSH1106Offset(uint8_t offset) {
    u8g2.sendF("c", 0x40 | (offset & 0x3F));
}

void drawText(const char* text) {
    u8g2.clearBuffer();
    // 
    for (int y = 0; y < 64; y ++) {
        u8g2.drawLine(0, y, 127, y);
    }
    u8g2.sendBuffer();
}

