#define RGB_Ledbir 11
#define RGB_Lediki 10 
#define RGB_Leduc 9
#define pot A0


void setup() {
  pinMode(RGB_Ledbir, OUTPUT);
  pinMode(RGB_Lediki, OUTPUT);
  pinMode(RGB_Leduc, OUTPUT);
}

void loop() {
  int potValue = analogRead(pot);
  int mode = map(potValue, 0, 1023, 0, 6);


  switch (mode) {
    case 0:
      digitalWriteRGB(HIGH, LOW, LOW);


      break;
    case 1:
      digitalWriteRGB(LOW, HIGH, LOW);
      break;
    case 2:
      digitalWriteRGB(LOW, LOW, HIGH);
      break;
    case 3:
      digitalWriteRGB(HIGH, HIGH, LOW);
      break;
    case 4:
      digitalWriteRGB(HIGH, LOW, HIGH);
      break;
    case 5:
      digitalWriteRGB(LOW, HIGH, HIGH);
      break;
    case 6:
      digitalWriteRGB(HIGH, HIGH, HIGH);
      break;
    default:
      digitalWriteRGB(LOW, LOW, LOW);
      break;
  }
}
void digitalWriteRGB(int red, int blue, int green)
{
  digitalWrite(RGB_Ledbir, red);
  digitalWrite(RGB_Lediki, blue);
  digitalWrite(RGB_Leduc, green);
}