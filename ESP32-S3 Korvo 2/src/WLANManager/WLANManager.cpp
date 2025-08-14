#include "WLANManager.hpp"

String ssid = "Waffle_" + String(SSID_SUFFIX);
const char* password = "mde12345";

void startWiFiAP()
{
    WiFi.softAP(ssid, password);
}
