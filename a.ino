int R1 = 1;
int J1 = 2;
int V1 = 3;
int R2 = 4;
int J2 = 5;
int V2 = 6;
int Buz = 8;

void setup() {
pinMode(R1,OUTPUT);
pinMode(J1,OUTPUT);
pinMode(V1,OUTPUT);
pinMode(R2,OUTPUT);
pinMode(J2,OUTPUT);
pinMode(V2,OUTPUT);
pinMode(Buz,OUTPUT);
}

void loop() {
  tone(Buz,500,500);
 
     
  digitalWrite(R1,HIGH);
   digitalWrite(R2,LOW);
    digitalWrite(V2,HIGH);
     digitalWrite(V1,LOW);
 digitalWrite(J2,HIGH);
  delay(1000);
   digitalWrite(J2,LOW);
 delay(3000);
 
  digitalWrite(R1,LOW);
     digitalWrite(J1,HIGH);
     digitalWrite(V2,LOW);
    delay(1000);
     digitalWrite(J1,LOW);
     
   digitalWrite(R2,HIGH);
  digitalWrite(V1,HIGH);
     delay(3000);

 


}
