//Wifi
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include<ESP8266HTTPClient.h>
#include <WiFiClient.h>

WiFiClient wifiClient;

//NTP
#include <NTPClient.h>
#include <time.h>


//Initialise the time server
WiFiUDP ntpUDP;
//NTPClient timeClient(ntpUDP, utcOffsetInSeconds);
NTPClient timeClient(ntpUDP);

String sMsg = "";

void setup() {
  Serial.begin(115200);
  connectToWifiDHCP();
  
  timeClient.setTimeOffset(11 * (60 * 60)); //Need to get from sys settings
  timeClient.begin();
  delay(20);
    
}

void loop() {

  Serial.println(getDateTime());
  delay(1000);

}
