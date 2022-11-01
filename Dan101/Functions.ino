String dougPrint(String textToPrint, bool includeLineBreak){
  Serial.flush();
  if(includeLineBreak)
  {
    Serial.println(textToPrint);
  }
  else
  {
    Serial.print(textToPrint);     
  }

  return "";
}
