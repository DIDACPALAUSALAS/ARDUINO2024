//********** Includes *************************************************************
#include <Arduino.h>

//********** Variables ***********************************************************
// 

//********** Setup ***************************************************************
void setup() {
  Serial.begin(9600);   // 
  
  // 
  for (int taula = 2; taula <= 10; taula++) {
    Serial.print("Taula de multiplicar del ");
    Serial.println(taula);
    
    // 
    for (int i = 0; i <= 10; i++) {
      delay(100);   // 
      Serial.print(taula);    // 
      Serial.print(" x ");    // 
      Serial.print(i);    //
      Serial.print( " = ");   // 
      Serial.println(taula * i);    // 
    }
    Serial.println(); // 
  }
}

//********** Loop *****************************************************************
void loop() {
  // No hay acciones repetitivas en el loop.
}

