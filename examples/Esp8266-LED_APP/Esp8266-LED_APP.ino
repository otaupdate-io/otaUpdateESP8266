#include <ESP8266WiFi.h>
#include<otaUpdateESP8266.h>

float currentVersion = 1.0;
String Token = "YourToken";
otaUpdate devUpdt(true);

const char* ssid = "Wifiname";
const char* password = "Password";
int led = 13;


void setup() {

Serial.begin(115200);
pinMode(led, OUTPUT);
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

Serial.println("Current version: ");
Serial.print(currentVersion);
digitalWrite(led,HIGH);
delay(5000);
digitalWrite(led,LOW);


}else{
Serial.println("There is no network connection!..Retry.");
}

}
