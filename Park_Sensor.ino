#define echoPin 9
#define trigPin 10
#define buzzerPin 8

int maxRange = 50;
int minRange = 0;



void setup() {

  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
  


}

void loop() {
  
  int olcum = mesafe(maxRange,minRange);
  melodi(olcum*10);
}

int mesafe(int maxrange,int minrange){
  long duration,distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);

  duration = pulseIn(echoPin,HIGH);
  distance = duration / 58.2;
  
  if(distance>=maxrange || distance <= minrange)
    return 0;
    return distance;
  

}
int melodi (int x) {
  tone(buzzerPin,440);
  delay(x);
  noTone(buzzerPin);
  delay(x);
}


