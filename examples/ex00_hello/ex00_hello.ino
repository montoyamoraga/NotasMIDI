// import library
// ex00_hello
// by montoyamoraga
// january 2024

// this example tests if the library is working

// import library
#include "NotasMIDI.h"

// declare instance
NotasMIDI notasMIDI;

String nota = "re";

void setup() {
  // open serial communication
  Serial.begin(9600);
}

void loop() {
  // print result
  Serial.println(notasMIDI.solfeoToNumero(nota));
  // wait for one second
  delay(1000);
}
