#ifndef otaUpdateESP8266Lib
#define otaUpdateESP8266Lib

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class otaUpdate{

public:
// devUpdates(bool UpdateAvailable = false);
// int updates(String devUpdateApi);
// int autoUpdate(String devAutoapi);
otaUpdate(bool UpdateAvailable = false);
int updates(float currentVersion,String token);
void startUpdate(String url);

};

#endif
