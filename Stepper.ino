#include <Stepper.h>

const int stepsPerRevolution = 2048;

Stepper myStepper(stepsPerRevolution,8,9,10,11);

void setup() {
 myStepper.setSpeed(10);
 Serial.begin(9600);
}

void loop() {
 Serial.println("clockwise");
 myStepper.step(stepsPerRevolution);
 
}
