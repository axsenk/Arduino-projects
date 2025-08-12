#include <Servo.h>

const int servoPin= 9;
const int VRy = A1;
const int VRx = A2;

Servo monServo;

void setup() {
 Serial.begin(9600);
 monServo.attach(servoPin);
 

}

void loop() {
  int xVal = analogRead(VRx);
  int angle= map(xVal,0,1023,0,180);

  monServo.write(angle);
  Serial.println(angle);

  delay(15);

}
