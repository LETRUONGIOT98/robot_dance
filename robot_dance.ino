#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver srituhobby = Adafruit_PWMServoDriver();

#define cambien A0
///150
///600
int tocdo = 1; //số lớn chạy chậm
int donhay = 600;  //từ 0-1023
void setup() {
  Serial.begin(9600);
  srituhobby.begin();
  srituhobby.setPWMFreq(60);
}

void loop() {
  if(analogRead(cambien) > donhay){
  for (int val = 0; val <= 90; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(1, 0, goc);
    srituhobby.setPWM(3, 0, goc);
    delay(tocdo);
  }
  }
  if(analogRead(cambien) > donhay){
  for (int val = 0; val <= 90; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(2, 0, goc);
    srituhobby.setPWM(4, 0, goc);
    delay(tocdo);
  }
  }
  if(analogRead(cambien) > donhay){
  for (int val = 90; val >= 0; val-- ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(2, 0, goc);
    srituhobby.setPWM(4, 0, goc);
    delay(tocdo);
  }
}
  if(analogRead(cambien) > donhay){
  for (int val = 90; val >= 0; val-- ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(1, 0, goc);
    srituhobby.setPWM(3, 0, goc);
    delay(tocdo);
  }
}
  if(analogRead(cambien) > donhay){
  for (int val = 0; val <= 180; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(9, 0, goc);
    delay(tocdo);
  }
  }
  if(analogRead(cambien) > donhay){
  for (int val = 180; val >= 0; val-- ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(9, 0, goc);
    delay(tocdo);
  }
  }
  if(analogRead(cambien) > donhay){
  for (int val = 0; val <= 90; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(9, 0, goc);
    delay(tocdo);
  }
 }
  if(analogRead(cambien) > donhay){
  for (int val = 90; val <=180; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(6, 0, goc);
    srituhobby.setPWM(8, 0, goc);
    delay(tocdo);
  }
}
  if(analogRead(cambien) > donhay){
  for (int val = 180; val >= 90 ; val-- ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(6, 0, goc);
    srituhobby.setPWM(8, 0, goc);
    delay(tocdo);
  }
  }
  if(analogRead(cambien) > donhay){
  for (int val = 0; val <=90; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(6, 0, goc);
    srituhobby.setPWM(8, 0, goc);
    delay(tocdo);
  }
  }

  if(analogRead(cambien) > donhay){
  for (int val = 0; val <=90; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(5, 0, goc);
    srituhobby.setPWM(7, 0, goc);
    delay(tocdo);
  }
  }

  if(analogRead(cambien) > donhay){
  for (int val = 0; val <=90; val++ ) {
    int goc = map(val,0,180,150,600);
    srituhobby.setPWM(5, 0, goc);
    srituhobby.setPWM(7, 0, goc);
    delay(tocdo);
  }
  }

}
