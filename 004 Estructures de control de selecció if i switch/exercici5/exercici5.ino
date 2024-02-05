 /**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float c02 = 23.5;

//********** Setup ****************************************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  delay(2000);
  if (c02 < 3.5)
  {
    Serial.println("A");
  } 
  else if (c02 < 6.5)
  {
    Serial.println("C");
  } 
  else if (c02 < 17.7)
  {
    Serial.println("D");
  } 
  else if (c02 < 38.2)
  {
    Serial.println("E");
  } 
  else if (c02 < 43.2)
  {
    Serial.println("F");
  } 
  else
  {
    Serial.println("G");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though it's empty
{
  // Your loop code here
}

//********** Funcions *************************************************************
