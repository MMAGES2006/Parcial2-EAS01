#ifndef base_h
#define base_h

#include "jugador.h"
#include "enemigo.h"

class Base
{
public:
    int vida;
    int ataque;
    string nombre;
    Base();
    Base(int vida, int ataque, string nombre);

    void atacarJugador();
};

#endif
