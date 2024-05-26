#ifndef NOTAS_MIDI_H
#define NOTAS_MIDI_H

#include <Arduino.h>

class NotasMIDI {
  public:
    // constructor
    NotasMIDI();

    // destructor
    ~NotasMIDI();

    // conversion between solfeo and MIDI note
    String numeroToSolfeo(int numero);
    int solfeoToNumero(String solfeo);

    // conversion between solfeo and letras
    String solfeoToLetra(String solfeo);
    String letraToSolfeo(String letra);

  protected:

  int minMIDINota = 0;
  int maxMIDINota = 127;

  char *notasSolfeo[12] = {
  "do",
  "^do",
  "re",
  "^re",
  "mi",
  "fa",
  "^fa",
  "sol",
  "^sol",
  "la",
  "^la",
  "si"
};

  char *notasSolfeo[12] = {
  "c",
  "^c",
  "d",
  "^d",
  "e",
  "f",
  "^f",
  "g",
  "^g",
  "a",
  "^a",
  "a"
};

};

#endif