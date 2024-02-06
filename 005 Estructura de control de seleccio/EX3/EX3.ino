//********** Includes *************************************************************

// No se incluyen bibliotecas adicionales en este programa.

//********** Variables ************************************************************
int num = 10;   // 

//********** Setup ****************************************************************
void setup() {    //
  Serial.begin(9600);     // 
  Serial.println("Ara faré el compte enrere per l'explosió:");   // 

  // 
  for (int i = 0; i <= 10; i++) {
    delay(1000);   // 
    Serial.println(num);   // 
    num = num - 1;   // 
  }
  
  Serial.println(" B  O  O  O  M !!! ");   // 
}

//********** Loop *****************************************************************
void loop() {   // 
}

//********** Funcions *************************************************************
