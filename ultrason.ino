float distance;
int trig=4;
int echo=5;
long temps;

int LedR=9;
int LedV=10;
int buz=3;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(LedR,OUTPUT);
  pinMode(LedV,OUTPUT);
  pinMode(buz,OUTPUT);

}

void loop() {
  for(i=600;i<=3000;i++){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  temps=pulseIn(echo,HIGH);
  distance=(0.034*temps/2);
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);
  if(distance<20){
    digitalWrite(LedR,HIGH);
    tone(buz,i,500);
    noTone;
    digitalWrite(LedV,LOW);
    delay(100);
    digitalWrite(LedR,LOW);
    
  }
  else{
    digitalWrite(LedR,LOW);
    digitalWrite(LedV,HIGH);
    noTone;
  }
  }
  
}
