#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>
const int rxPin = 2;
const int txPin = 3;

DFRobotDFPlayerMini player;

void setup(){
  SoftwareSerial mySerial(rxPin, txPin);
  Serial.begin(9600);
  softwareSerial.begin(9600);
  
}
void loop(){
  if (Serial.available() > 0){
  byte incomingByte = Serial.read();
  Serial.write(incomingByte);
  }
}