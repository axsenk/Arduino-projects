#include <Servo.h>

int EtatBoutton;
int boutton = 9;
int led = 4;
int Buz = 5;
void setup() {
 Serial.begin(9600);
 pinMode(Buz,OUTPUT);
 pinMode(boutton,INPUT);
 pinMode(led,OUTPUT);

}

void loop() {
EtatBoutton = digitalRead(boutton);
delay(500);
if (EtatBoutton == HIGH){
  digitalWrite(led,HIGH);
  delay(100);
   digitalWrite(led,LOW);
  tone(Buz,1000,500);
  
 
}
else {
  digitalWrite(led,LOW);
  
}
}
