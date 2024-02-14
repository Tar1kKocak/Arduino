//Ortak Anot RGB LED için Arduino Kodu

//RGB LED'imizin bacaklarını Arduino'da bağladığımız pinlere göre global değişken olarak atadık.
int kirmiziPin = 11; //Kırmızı bacak 11 numaralı pine
int yesilPin = 10; //yeşil bacak 10 numaralı pine
int maviPin = 9; //mavi bacak 9 numaralı pine 

void setup(){ 
  pinMode(kirmiziPin, OUTPUT); //kirmiziPin(9) çıkış pini olarak atadık
  pinMode(yesilPin, OUTPUT); //yesilPin(10) çıkış pini olarak atadık
  pinMode(maviPin, OUTPUT);} //mavi(11) çıkış pini olarak atadık
  
  void loop(){ 

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

    }
    
  void RGB_renk( int red_value, int green_value, int blue_value){
    analogWrite (kirmiziPin, red_value);
    analogWrite (yesilPin, green_value);
    analogWrite (maviPin, blue_value);

  }