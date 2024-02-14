int Pin_bir = 8;
int Pin_iki = 9;
int Pin_uc = 10; 
int buton=3;
 
void setup() {
pinMode(Pin_bir, OUTPUT);
pinMode(Pin_iki, OUTPUT);
pinMode(Pin_uc, OUTPUT);
pinMode(buton, INPUT);   
}
 
void loop() {
  if(digitalRead(buton)==1){  //Buton değeri 1' eşitse....
    RGB_renk (255,0,0);
    delay(500);
    RGB_renk(0,255,0);
    delay(500);
    RGB_renk(0,0,255);
    delay(500);
    RGB_renk(255,0,255);
    delay(500);
    RGB_renk(0,255,255);
    delay(500);
    RGB_renk(255,255,255);
    delay(500);
  
  }else{
  digitalWrite(Pin_bir, LOW);
  digitalWrite(Pin_iki, LOW);
  digitalWrite(Pin_uc, LOW);
  }
 
}
void RGB_renk(int kirmizi, int yesil, int mavi){ 
  kirmizi = 255-kirmizi; 
  yesil = 255-yesil; 
  mavi = 255-mavi; 
  analogWrite(Pin_bir, kirmizi); 
  analogWrite(Pin_iki, yesil); 
  analogWrite(Pin_uc, mavi);
  }