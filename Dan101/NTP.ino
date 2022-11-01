String getDate(bool includeMinutes){
  timeClient.update();

  String date = timeClient.getFormattedDate();
  
  date.replace("T"," ");

  if(!includeMinutes)
  {
    int endChar = date.indexOf(" ");
    date = date.substring(0, endChar);
  }

  return date;
}

String getNow(){
  timeClient.update();
  return timeClient.getFormattedTime();
}

//long getNowUnixTime(){
//
//  DateTime now = getDate(true);
//  uint32_t timestamp = now.unixtime();
//
//  // Serial.print("nowUnixTimestamp : ");
//  // Serial.println(timestamp);
//
//  // Serial.print("systemSettings.utcOffsetInMinutes : ");
//  // Serial.println(systemSettings.utcOffsetInMinutes);
//
//  timestamp = timestamp - (utcOffsetInMinutes * 60);
//
//  return timestamp;
//
//}


String getShortNow(){
  timeClient.update();
  String sLong = timeClient.getFormattedTime();
  int len = sLong.length();
  
  String sShort = sLong.substring(0,len-3);
  
  return sShort;
}

long getNowUnixTime(){
  timeClient.update();
  //Serial.println(timeClient.getFormattedTime());
  return timeClient.getEpochTime();
  
}

String getDateTime(){
  timeClient.update();
  
  String datetime = timeClient.getFormattedDate();
  
  datetime.replace("T"," ");
  datetime.replace("Z","");
    
  return datetime;
}
