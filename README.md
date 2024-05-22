# NotasMIDI

## About

This Arduino library is being developed by @piruetasxyz, the art studio by @montoyamoraga.

This is a work in progress, started in January 2024.

## Dependencies

None by design.

## Formatting

### Solfeo

- `do`
- `re`
- `mi`
- `fa`
- `so`
- `la`
- `si`

### Letras

- `a`
- `b`
- `c`
- `d`
- `e`
- `f`
- `g`

### Accidentals

- `^x`: x sharp
- `_x`: x flat
- `=x`: x natural

## Functions

| name           | input               | output              |
| :------------- | :------------------ | :------------------ |
| solfeoToNumero | note in solfeo      | note in MIDI number |
| numeroToSolfeo | note in MIDI number | note in solfeo      |
| solfeoToLetra  | note in solfeo      | note in letra       |
| letraToSolfeo  | note in letra       | note in solfeo      |

## Installation

Arduino Library Manager

## License

MIT
