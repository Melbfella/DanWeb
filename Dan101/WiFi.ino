bool connectToWifiDHCP(){

  // Connect to WiFi network  
  char ssidBuff[100];
  char ssidPassBuff[100];

  WiFi.begin("DodeUDM", "4Rcefis7");
  //WiFi.begin(wifiCreds[0].c_str(), wifiCreds[1].c_str());
    
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print(".");

  }
  
  dougPrint("",true); 
  dougPrint("WiFi connected",true); 

  
  sMsg = "IP Address " + WiFi.localIP().toString();
  dougPrint(sMsg,true); 

  sMsg = "Mac Address " + WiFi.macAddress();
  dougPrint(sMsg,true);
      
  return true;

}
