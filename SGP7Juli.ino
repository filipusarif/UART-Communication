#include <SoftwareSerial.h>


SoftwareSerial mySerial(PA10, PA9); // RX, TX 
SoftwareSerial mySerial2(PA3, PA2); // RX, TX 
SoftwareSerial mySerial3(PB10, PB11); // RX, TX 

void setup() {
  // Inisialisasi mySerial 
  mySerial.begin(9600);
  mySerial2.begin(9600);
  mySerial3.begin(9600);
}

void loop() {
  
  mySerial.listen();
  if (mySerial.available() > 0 ) {
    String receivedChar = mySerial.readString();
    mySerial.print("Received: ");
    mySerial.println(receivedChar);
  }

  delay(10);

  mySerial2.listen();
  if (mySerial2.available() > 0 ) {
    String receivedChar = mySerial2.readString();
    mySerial2.print("Received: ");
    mySerial2.println(receivedChar);
  }

  delay(10);
  mySerial3.listen();
  if (mySerial3.available() > 0 ) {
    String receivedChar = mySerial3.readString();
    mySerial3.print("Received: ");
    mySerial3.println(receivedChar);
  }
  
  mySerial.println("heloSerial");
  mySerial2.println("heloSerial2");
  mySerial3.println("heloSerial3");
  delay(10);
}
