#ifndef enemigo_h
#define enemigo_h

#include "jugador.h"

#include <string>

class Enemigo
{
public:
    int evida;
    int eataque;
    string enombre;
    Enemigo();
    Enemigo(int evida, int eataque, string enombre);

    void atacarJugador();
};

#endif