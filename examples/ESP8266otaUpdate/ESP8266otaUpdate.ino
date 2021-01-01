#include <ESP8266WiFi.h>
#include"otaUpdateESP8266.h"


String currentVersion = "0.8";
String Token = "OH0kX8DBQIPpYuNCBBExINQ5p8Q";

const char* ssid = "Zed";
const char* password = "Wireless4U!";

otaUpdate devUpdt(true);

void setup() {

Serial.begin(115200);

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.println("Connecting to WiFi..");
}

Serial.println("Connected to the WiFi network");

}
void loop()
{
if (WiFi.status() == WL_CONNECTED)
{
delay(2000);
int FileBin = devUpdt.updates(currentVersion,Token);

}else{
Serial.println("There is no network connection!..Retry.");
}

}
