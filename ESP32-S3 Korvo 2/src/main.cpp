#include "main.hpp"


void setup() {
	Serial.begin(115200);
	Serial.println("Hello from Korvo !");
	spiffsBegin();
	startWiFiAP();
	setupServer();
	setupOLED();
	setSH1106Offset(64);
	drawText("Waffle ready!");

	// Wait for a moment to ensure everything is set up before proceeding
	delay(1000);
}

void loop() {

}
