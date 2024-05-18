#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

//initialize receiver and transceiver pins
const int rxPin = 2; 
const int txPin = 3;

//creates DFRobotDFPlayerMini instance called player
DFRobotDFPlayerMini player;

void setup(){

  //creates SoftwareSerial object
  SoftwareSerial softwareSerial(rxPin, txPin); 

  //baud rate for laptop-arduino
  Serial.begin(9600);
  //baud rate for RX-TX pins
  softwareSerial.begin(9600);
  
  //return true if connection was success, false if not
  if (!player.begin(softwareSerial)){
    Serial.println('Connecting to DFPlayer Mini failed!');
  }

  player.volume(30);
  player.play(1);
  delay(5000);
  player.pause();
  delay(2000);
  player.start();

  //debugging
  //prints number of files on microSD
  Serial.println(player.readFileCounts());
  //prints current file number
  Serial.println(player.readCurrentFileNumber());

}

void loop(){

  //delay the next command by 5 seconds
  delay(5000);

  //skip to next song
  player.next();

}
