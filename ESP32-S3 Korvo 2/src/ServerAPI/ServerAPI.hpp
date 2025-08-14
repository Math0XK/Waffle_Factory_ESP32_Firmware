#ifndef SERVERAPI_HPP
#define SERVERAPI_HPP

#include <ArduinoJson.h>
#include <ESPAsyncWebServer.h>
#include "SPIFFSManager/SPIFFSManager.hpp"

extern AsyncWebServer waffleServer;
extern AsyncWebSocket ws;

extern void notifyClient();
extern void setupServer();

#endif
