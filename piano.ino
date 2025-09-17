int buz = 2;
int buze = 3;
int LedR = 8;
int LedJ = 9;
int LedV = 10;

int bou = 4;
int bout = 5;
int bouto = 6;
int bouton = 7;

int e;
int et;
int eta;
int etat;

void setup (){
   Serial.begin(9600);
    pinMode(bou,INPUT);
    pinMode(bout,INPUT);
    pinMode(bouto,INPUT);
    pinMode(bouton,INPUT);
    pinMode(buz,OUTPUT);
    pinMode(buze,OUTPUT);
    pinMode(LedR,OUTPUT); 
    pinMode(LedJ,OUTPUT);
    pinMode(LedV,OUTPUT);  
}

void loop(){
    e=digitalRead(bou);
    et=digitalRead(bout);
    eta=digitalRead(bouto);
    etat=digitalRead(bouton);
    if (e==1){
        tone(buz,500,500);
        tone(buze,300,500);
        digitalWrite(LedR,HIGH);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,LOW);
    }
    else{
        noTone;
        digitalWrite(LedR,LOW);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,LOW);
    }
    if (et==1){
        tone(buz,700,500);
        tone(buze,500,500);
        digitalWrite(LedR,LOW);
        digitalWrite(LedJ,HIGH);
        digitalWrite(LedV,LOW);
    }
    else{
        noTone;
        digitalWrite(LedR,LOW);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,LOW);
    }
    if (eta==1){
        tone(buz,1050,500);
        tone(buze,750,500);
        digitalWrite(LedR,LOW);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,HIGH);
    }
    else{
        noTone;
        digitalWrite(LedR,LOW);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,LOW);
    }
    if (etat==1){
        tone(buz,1200,500);
        tone(buze,1000,500);
        digitalWrite(LedR,HIGH);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,HIGH);
    }
    else{
        noTone;
        digitalWrite(LedR,LOW);
        digitalWrite(LedJ,LOW);
        digitalWrite(LedV,LOW);
    }
    
}