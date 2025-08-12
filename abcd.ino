int LedR = 5;
int EtatButton ;
int button = 7;
int Buz =10;

void setup() {
 pinMode(LedR,OUTPUT); 
 pinMode( button,INPUT);
 pinMode(Buz,OUTPUT);
}

void loop() {
 EtatButton = digitalRead(button);
 delay(500);
 if (EtatButton ==1){
  digitalWrite(LedR,1);
  delay(500);
  digitalWrite(LedR,0);
  tone(Buz,1000,500);
 
 }
 else{
  digitalWrite(LedR,0);
  noTone;
 }
}
