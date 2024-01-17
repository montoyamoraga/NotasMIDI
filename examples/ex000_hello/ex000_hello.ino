// import library
// 
// by montoyamoraga
// january 2024

#include <NotasMIDI.h>

// declare instance
NotasMIDI notasMIDI;

String nota = "re";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(notasMIDI.solfeoToNumero(nota));

  delay(1000);
}
