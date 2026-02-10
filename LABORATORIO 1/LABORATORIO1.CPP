void setup(){
  pinMode(11, OUTPUT);      //pin 13 como salida
}

void loop(){
  digitalWrite(11, HIGH);    //pin 13 a nivel alto (1)
  delay(100);               // demora de 1 segundo 
  digitalWrite(11, LOW);     //pin 13 a nivel bajo (0)
  delay(100);                // demora de 1 segundo
}