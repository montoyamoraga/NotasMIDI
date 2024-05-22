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
    int solfeoToLetra(String solfeo);
    String letraToSolfeo(int letra);

  protected:
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

};

#endif