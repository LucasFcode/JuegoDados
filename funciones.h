#pragma once
#include <string>
#include <cstdio>
using namespace std;


void seleccion_Opcion ( int opcion );

void estadisticaGeneral();
void estadisticaunJugador();
void estadisticaMultiplayer();


void partidaUnJugador();
void modo_unjugador (string nombreJugador);



void partidaMultiplayer();
void multiplayer(string nombreJugador);
void saludar (string nombreJugador);
int tirarDados();
bool dadosIguales(int dados[], int cantidadDados);
void creditos();

