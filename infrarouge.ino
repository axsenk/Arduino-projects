#include <Servo.h>

const int servoPin = 11;
Servo servo;

int angle = 0;

int capteur = 6;
int LedR = 9;
int buz = 3;

void setup() {
 Serial.begin(9600);
 pinMode(LedR,OUTPUT);
 pinMode(capteur,INPUT);
 servo.attach(servoPin);
 pinMode(buz,OUTPUT);
}

void loop() {
 int detection = digitalRead(capteur);
 Serial.print("Detection: ");
 Serial.println(detection);
 delay(1000);
 if (detection == 0){
  angle = 90;
  digitalWrite(LedR,HIGH);
  tone (buz,500,1000);
  servo.write(angle);
  delay(500);
  digitalWrite(LedR,LOW);
 }
 else{
  angle = 0;
  servo.write(angle);
  digitalWrite(LedR,LOW);
  noTone;
 }
}
