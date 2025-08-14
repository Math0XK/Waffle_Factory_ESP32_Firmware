#ifndef WLANMANAGER_HPP
#define WLANMANAGER_HPP

#ifndef SSID_SUFFIX
#define SSID_SUFFIX "Default"
#endif // SSID_SUFFIX

#include <WiFi.h>

extern String ssid;
extern const char* password;

extern void startWiFiAP();



#endif // WLANMANAGER_HPP