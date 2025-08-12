#include <Servo.h>


const int servoPin = 9;
Servo servo;
// variable to store the servo position
int angle = 0;

void setup() {
  servo.attach(servoPin);  
}

void loop() {
  // goes from 0 degrees to 180 degrees  
  for(angle = 0; angle < 180; angle += 1) {                                        
    // in steps of 1 degree
    servo.write(angle);
    // 20ms delay between servo commands
    delay(20);
  }
  // goes from 180 degrees to 0 degrees
  for(angle = 180; angle >= 1; angle -= 1) {
    // move servo in opposite direction
    servo.write(angle);
    // 20ms delay between servo commands
    delay(20);
  }
}
