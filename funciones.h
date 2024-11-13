#pragma once
#include <string>
using namespace std;


void seleccion_Opcion ( int opcion );

//int seleccionarOpcion();
//void ejecutarOpcion (int opcion);

void partidaUnJugador();
void modo_unjugador(string nombreJugador);

void partidaMultiplayer();
void multiplayer(string nombreJugador);
void saludar(string nombreJugador);
int tirarDados();
void guardarEstadistica(string nombreJugador1, string nombreJugador2, int puntosGanador1, int puntosGanador2);
void mostrarEstadistica();
