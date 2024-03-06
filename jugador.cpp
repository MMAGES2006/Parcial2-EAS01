#include "jugador.h"
#include "enemigo.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Jugador::Jugador()
{
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
    this->vida = 100;
    this->ataque = 5;
    this->nombre = "No definido";
}

Jugador::Jugador(int vida, int attack, string nombre)
{
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
    this->vida = vida;
    if (vida > 200)
        this->vida = 200;
    if (vida <= 0)
        this->vida = 1;

    this->ataque = ataque;
    if (attack > 200)
        this->ataque = 200;
    if (attack <= 0)
        this->ataque = 1;

    this->nombre = nombre;
}

void Jugador::atacarJugador(Jugador &j2)
{
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << j2.nombre << " pero fallo, vida restante de " << j2.nombre << " = " << j2.vida << endl;
    }
    else
    {
        j2.vida -= this->ataque;
        cout << this->nombre << " ataco a " << j2.nombre << " e hizo " << this->ataque << " de danio, vida restante de " << j2.nombre << " = " << j2.vida << endl;
    }

    j2.atacadoPor = this;
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}