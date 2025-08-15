#include "main.hpp"

void setup() {
	Serial.begin(115200);
	Serial.println("Hello from Korvo !");
    Wire.begin(11, 12);
	spiffsBegin();
	startWiFiAP();
	setupServer();
	delay(250); // wait for the OLED to power up
  	display.begin(i2c_Address, true); 
	display.display();
	delay(2000);
	display.drawPixel(10, 10, SH110X_WHITE);
	// Show the display buffer on the hardware.
	// NOTE: You _must_ call display after making any drawing commands
	// to make them visible on the display hardware!
	display.display();
	delay(2000);
	display.clearDisplay();

	// draw many lines
	testdrawline();
	display.display();
	delay(2000);
	display.clearDisplay();

	// draw rectangles
	testdrawrect();
	display.display();
	delay(2000);
	display.clearDisplay();

	// draw multiple rectangles
	testfillrect();
	display.display();
	delay(2000);
	display.clearDisplay();

	// draw mulitple circles
	testdrawcircle();
	display.display();
	delay(2000);
	display.clearDisplay();

	// draw a SH110X_WHITE circle, 10 pixel radius
	display.fillCircle(display.width() / 2, display.height() / 2, 10, SH110X_WHITE);
	display.display();
	delay(2000);
	display.clearDisplay();

	testdrawroundrect();
	delay(2000);
	display.clearDisplay();

	testfillroundrect();
	delay(2000);
	display.clearDisplay();

	testdrawtriangle();
	delay(2000);
	display.clearDisplay();

	testfilltriangle();
	delay(2000);
	display.clearDisplay();

	// draw the first ~12 characters in the font
	testdrawchar();
	display.display();
	delay(2000);
	display.clearDisplay();



	// text display tests
	display.setTextSize(1);
	display.setTextColor(SH110X_WHITE);
	display.setCursor(0, 0);
	display.println("Failure is always an option");
	display.setTextColor(SH110X_BLACK, SH110X_WHITE); // 'inverted' text
	display.println(3.141592);
	display.setTextSize(2);
	display.setTextColor(SH110X_WHITE);
	display.print("0x"); display.println(0xDEADBEEF, HEX);
	display.display();
	delay(2000);
	display.clearDisplay();

	// miniature bitmap display
	// display.drawBitmap(30, 16,  logo16_glcd_bmp, 16, 16, 1);
	display.drawBitmap(0, 0, myBitmap, 128, 64, 1);
	display.display();
	delay(10000);

	// invert the display
	display.invertDisplay(true);
	delay(1000);
	display.invertDisplay(false);
	delay(1000);
	display.clearDisplay();

	// draw a bitmap icon and 'animate' movement
	testdrawbitmap(logo16_glcd_bmp, LOGO16_GLCD_HEIGHT, LOGO16_GLCD_WIDTH);

}

void loop() {

}

