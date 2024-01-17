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
    int solfeoToNumero(String solfeo);
    String numeroToSolfeo(int numero);

    // conversion between solfeo and letras
    int solfeoToLetra(String solfeo);
    String letraToSolfeo(int letra);

};

#endif