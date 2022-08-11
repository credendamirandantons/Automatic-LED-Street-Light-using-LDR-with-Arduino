// 7/1/2022
//LAMPU JALAN

int ledA = 3;
int ledB = 4;
int ledC = 5;
int ledD = 6;
int ledE = 7;
int ledF = 8;
int ledG = 9;
int ledH = 10;


void setup(){
 Serial.begin(9600);
 pinMode(ledA, OUTPUT);
 pinMode(ledB, OUTPUT);
 pinMode(ledC, OUTPUT);
 pinMode(ledD, OUTPUT);
 pinMode(ledE, OUTPUT);
 pinMode(ledF, OUTPUT);
 pinMode(ledG, OUTPUT);
 pinMode(ledH, OUTPUT);
 }

void loop(){
  int nilai = analogRead(A0); //LDR tehubung dengan pin analog 0 Arduino
  Serial.println("Nilai LDR Terbaca = ");
  delay(300);
  Serial.println(nilai);
  delay(300);

  if (nilai<100){ //Cahaya
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    digitalWrite(ledE, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledH, LOW);
    }
    else{ //non Cahaya
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledH, HIGH);
      }
}
