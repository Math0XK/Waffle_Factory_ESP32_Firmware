#include "SPIFFSManager.hpp"

void spiffsBegin() {
	//----------------------------------------------------SPIFFS
	Serial.println("Initializing SPIFFS...");
	if (!SPIFFS.begin(true)) {
		Serial.println("Error SPIFFS...");
		while (true); // Halt execution if SPIFFS initialization fails
		return;
	}

	Serial.println("SPIFFS initialized successfully!");

	// List files in SPIFFS
	Serial.println("Listing files in SPIFFS:");
	// Open the root directory and list all files
	File root = SPIFFS.open("/");
	if (root && root.isDirectory()) {
		File file = root.openNextFile();
		while (file) {
			Serial.println(file.name()); // Print the name of each file
			file = root.openNextFile();
		}
	} else {
		Serial.println("Failed to open root directory or not a directory");
	}
}