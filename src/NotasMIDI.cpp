#include "NotasMIDI.h"

// constructor
NotasMIDI::NotasMIDI() {

}

// destructor
NotasMIDI::~NotasMIDI() {}

String NotasMIDI::numeroToSolfeo(int numero) {
  if (numero < NotasMIDI::minMIDINota) {
    return "outOfRange";
  } else if (numero > maxMIDINota) {
    return "outOfRange";
  } else {
    // numero no esta fuera de rango
    numero = numero % 12;
    return NotasMIDI::notasSolfeo[numero];
  }
}

int NotasMIDI::solfeoToNumero(String solfeo) {
  if (solfeo.equals("do")) {
    return 0;
  } else if (solfeo.equals("^do")) {
    return 1;
  } else if (solfeo.equals("re")) {
    return 2;
  } else if (solfeo.equals("^re")) {
    return 3;
  } else if (solfeo.equals("mi")) {
    return 4;
  } else if (solfeo.equals("fa")) {
    return 5;
  } else if (solfeo.equals("^fa")) {
    return 6;
  } else if (solfeo.equals("sol")) {
    return 7;
  } else if (solfeo.equals("^sol")) {
    return 8;
  } else if (solfeo.equals("la")) {
    return 9;
  } else if (solfeo.equals("^la")) {
    return 10;
  } else if (solfeo.equals("si")) {
    return 11;
  } else {
    return -1;
  }
}

String NotasMIDI::solfeoToLetra(String solfeo) {
  if (solfeo.equals("do")) {
    return "c";
  } else if (solfeo.equals("^do")) {
    return "^c";
  } else if (solfeo.equals("re")) {
    return "d";
  } else if (solfeo.equals("^re")) {
    return "^d";
  } else if (solfeo.equals("mi")) {
    return "e";
  } else if (solfeo.equals("fa")) {
    return "f";
  } else if (solfeo.equals("^fa")) {
    return "^f";
  } else if (solfeo.equals("sol")) {
    return "g";
  } else if (solfeo.equals("^sol")) {
    return "^g";
  } else if (solfeo.equals("la")) {
    return "a";
  } else if (solfeo.equals("^la")) {
    return "^a";
  } else if (solfeo.equals("si")) {
    return "b";
  } else {
    return "";
  }
}

String NotasMIDI::letraToSolfeo(String letra) {
  if (letra.equals("c")) {
    return "do";
  } else if (letra.equals("^c")) {
    return "^do";
  } else if (letra.equals("d")) {
    return "re";
  } else if (letra.equals("^d")) {
    return "^re";
  } else if (letra.equals("e")) {
    return "mi";
  } else if (letra.equals("f")) {
    return "fa";
  } else if (letra.equals("^f")) {
    return "^fa";
  } else if (letra.equals("g")) {
    return "sol";
  } else if (letra.equals("^g")) {
    return "^sol";
  } else if (letra.equals("a")) {
    return "la";
  } else if (letra.equals("^a")) {
    return "^la";
  } else if (letra.equals("b")) {
    return "si";
  } else {
    return "";
  }
}
  