#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

//initialize receiver and transceiver pins
const int rxPin = 2; 
const int txPin = 3;

//creates player object
DFRobotDFPlayerMini player;

void setup(){
  //creates SoftwareSerial object called mySerial
  SoftwareSerial mySerial(rxPin, txPin); 

  //baud rate for laptop-arduino
  Serial.begin(9600);
  //baud rate for RX-TX pins
  softwareSerial.begin(9600);
  
}
void loop(){

  //checks if there's any data to read
  if (Serial.available() > 0){
    byte incomingByte = Serial.read();
    Serial.write(incomingByte);
  }
}
