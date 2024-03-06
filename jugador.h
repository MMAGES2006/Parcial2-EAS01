#ifndef jugador_h
#define jugador_h

#include <string>
using namespace std;

class Enemigo;

class Jugador
{
    /*
        Agrega propiedades para guardar la vida(número entero), ataque(número entero) y nombre del jugador.
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
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
