#include <Servo.h>

const int servoPin = 9;
Servo servo;
// variable to store the servo position
int angle = 0;

void setup() {
  servo.attach(servoPin);  
}

void loop() {
  
 angle +=1;
 servo.write(angle);
 delay(20);
}
