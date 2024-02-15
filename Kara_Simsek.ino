#define Buton 10

int buton_durumu = 0;
int ledler[] = {2,3,4,5,6,7,8,9};

void setup() {

  for(int i=0; i<8; i++){
    
  pinMode(ledler[i], OUTPUT);
  
  }
  pinMode(Buton, INPUT);

}

void loop() {

  buton_durumu = digitalRead(Buton);


  if(buton_durumu == 1)  {
      for(int i=0; i<8; i++){
    digitalWrite(ledler[i], HIGH);
    delay(80);
    digitalWrite(ledler[i], LOW);
    

  }

  for(int j=7; j>-1; j--){
    digitalWrite(ledler[j], HIGH);
    delay(80);
    digitalWrite(ledler[j], LOW);
    

  }
  }
  else {
    for(int i=0; i<8; i++){
    digitalWrite(ledler[i], LOW);
    delay(100);
    digitalWrite(ledler[i], LOW);
  }

  for(int j=7; j>-1; j--){
    digitalWrite(ledler[j], LOW);
    delay(100);
    digitalWrite(ledler[j], LOW);
  }
  }

}