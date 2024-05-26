// ex01_note_numbers
// by montoyamoraga
// may 2024

// this example tests the note numbers

// import library
#include "NotasMIDI.h"

// declare instance
NotasMIDI notasMIDI;

int nota = 0;

void setup() {
  // open serial communication
  Serial.begin(9600);
}

void loop() {
  // print result
  Serial.println(notasMIDI.numeroToSolfeo(nota));
  // wait for one second
  delay(1000);
}
