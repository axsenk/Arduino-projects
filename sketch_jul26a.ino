int Buz =4;
int LedR=7;
void setup() {
  // put your setup code here, to run once:
pinMode (Buz,OUTPUT);
pinMode (LedR,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(Buz,500,500);
  delay(500);
  noTone;
  digitalWrite (LedR,HIGH);
  delay(500);
  digitalWrite (LedR,LOW);

}
