#ifndef jugador_h
#define jugador_h

#include <string>
using namespace std;

class Enemigo;

class Jugador
{
public:
    int vida, ataque;
    string nombre;
    Jugador *atacadoPor;

    Jugador();
    Jugador(int vida, int attack, string nombre);

    void atacarJugador(Jugador &j2);
    void atacarEnemigo(Enemigo &E1);
};
#endif
