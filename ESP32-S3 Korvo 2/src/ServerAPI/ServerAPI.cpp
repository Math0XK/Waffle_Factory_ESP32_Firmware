#include "ServerAPI.hpp"

AsyncWebServer waffleServer(80);
AsyncWebSocket ws("/ws");



void notifyClient(){
	JsonDocument doc;
	doc["temp"] = "2564°C";
	doc["warn"] = "c'est la gauffre";

	String message;
	serializeJson(doc, message);

	ws.textAll(message);
}

void setupServer(){
	ws.onEvent([](AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type, void *arg, uint8_t *data, size_t len) {
		if(type == WS_EVT_CONNECT) {
			notifyClient();
		}
	});
	waffleServer.addHandler(&ws);

	waffleServer.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
		request->send(SPIFFS, "/index.html", "text/html");
	});

	waffleServer.on("/styles.css", HTTP_GET, [](AsyncWebServerRequest *request) {
		request->send(SPIFFS, "/styles.css", "text/css");
	});

	waffleServer.on("/script.js", HTTP_GET, [](AsyncWebServerRequest *request) {
		request->send(SPIFFS, "/script.js", "application/javascript");
	});

	waffleServer.begin();
}
