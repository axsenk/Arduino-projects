int LDR = A0;
int calculphoto = 0;
int R = 4;
int V = 5;
int B = 6;
int EtatBouton;
int bouton = 9;
int Buz1 = 7;
int LedR = 11;
int Buz2 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(R,OUTPUT);
  pinMode(V,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(LedR,OUTPUT);
  pinMode(Buz1,OUTPUT);
  pinMode(bouton,INPUT);
  pinMode(LDR,INPUT);
 pinMode(Buz2,OUTPUT);
}

void loop() {
  calculphoto=analogRead(LDR);
  Serial.println(calculphoto);
  EtatBouton=digitalRead(bouton);
  delay(1000);
  if (calculphoto < 150){
    setColor(0,0,255);
    delay(500);
    setColor(150,0,150);
    delay(500);
    digitalWrite(LedR,HIGH);
    tone(Buz1,500,500);
    tone(Buz2,1000,1000);
  }
 else {
  setColor(0,0,0);
  digitalWrite(LedR,LOW);
  noTone;
 }
 if (EtatBouton==HIGH){
  setColor(255,0,0);
    delay(500);
    setColor(0,255,0);
    delay(500);
    digitalWrite(LedR,HIGH);
    tone(Buz1,1000,500);
    tone(Buz2,500,1000);
 }
 else {
  setColor(0,0,0);
  digitalWrite(LedR,LOW);
  noTone;
 }
}
void setColor(int r, int g, int b){
  analogWrite(R,r);
  analogWrite(V,g);
  analogWrite(B,b);
}
