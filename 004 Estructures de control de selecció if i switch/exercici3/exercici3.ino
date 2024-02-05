//********** Includes *************************************************************

// 

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // 
{
  Serial.begin(9600);     // 

  if (tempAigua > 100)   // 
  {
    Serial.print("Aigua bullint!");
  } 
  else if (tempAigua == 100)   // 
  {
    Serial.print("Aigua a 100ºC");
  }
  else if (tempAigua >= 90)   // 
  {
    Serial.print("Aigua apunt de bullir");
  }
  else                    // 
  {
    Serial.print("Aigua encara no bull");
  }
}

//********** Loop *****************************************************************
void loop()   // 
{
}

//********** Funcions *************************************************************
