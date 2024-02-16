#include <IRremote.h>

int RECV_PIN = 2;

IRrecv IR(2);

decode_results results;

void setup(){
    IR.enableIRIn();
    Serial.begin(9600);
}

void loop () {

  if(IR.decode()){
    Serial.println(IR.decodedIRData.decodedRawData, HEX);
    delay(1500);
    IR.resume();
  }
}