#include <Stepper.h>

Stepper motor1(2048, 8, 10, 9, 11);

void setup() {
motor1.setSpeed(2);
Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
 int pasos = Serial.parseInt();
  Serial.println(pasos);
  motor1.step(pasos);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
  } 
}
