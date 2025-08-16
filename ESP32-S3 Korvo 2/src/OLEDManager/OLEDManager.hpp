#ifndef OLEDMANAGER_HPP
#define OLEDMANAGER_HPP
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define i2c_Address 0x3c

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1   //   QT-PY / XIAO
#define SH110X_NO_SPLASH

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

#define LOGO16_GLCD_HEIGHT 16
#define LOGO16_GLCD_WIDTH  16

#define LOGO_HEIGHT 64
#define LOGO_WIDTH 128

extern const unsigned char PROGMEM logo16_glcd_bmp[];
extern const unsigned char PROGMEM pseBitmap [];
extern const unsigned char PROGMEM waffleFactoryBitmap [];

extern Adafruit_SH1106G display;

extern void testdrawbitmap(const uint8_t *bitmap, uint8_t w, uint8_t h);
extern void testdrawchar(void);
extern void testdrawcircle(void);
extern void testfillrect(void);
extern void testdrawtriangle(void);
extern void testfilltriangle(void);
extern void testdrawroundrect(void);
extern void testfillroundrect(void);
extern void testdrawrect(void);
extern void testdrawline();





#endif // OLEDMANAGER_HPP