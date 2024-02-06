int comptar = 11;   // 
int i = 0;          // 

void setup() {      // 
  Serial.begin(9600);             // 
  Serial.print("Ara comptare de 0 a "); // 
  Serial.println(comptar);        // 
  
  while (i <= comptar) {          // 
    Serial.print(i);              // 
    Serial.print("-");            // 
    i++;                          // 
  }
}

void loop() {       // 
}
