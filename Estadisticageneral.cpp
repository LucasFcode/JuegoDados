#include <iostream>
#include "funciones.h"
using namespace std;


////// MENU ESTADISTICA ////////
void estadisticaGeneral() {
    int opcionEstadistica;

    do {
        cout << endl;
        cout << "************" << endl;
        cout << endl;
        cout << "--- M E N U   E S T A D I S T I C A S ---" << endl;
        cout << endl;
        cout << "************" << endl;
        cout << "1. Estadistica general singleplayer" << endl;
        cout << endl;
        cout << "2. Estadistica multiplayer" << endl;
        cout << endl;
        cout << "3. Volver al menu principal" << endl;
        cout << endl;
        cout << "Elija una opcion: " << endl;


        if (!(cin >> opcionEstadistica)) {
            cout << "Entrada invalida. Por favor, ingrese un numero de la lista." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            switch (opcionEstadistica) {
                case 1:
                    estadisticaunJugador();
                    break;
                case 2:
                    estadisticaMultiplayer();
                    break;
                case 3:
                    return;
                default:
                    cout << "Elija una opcion valida: " << endl;
                    break;
            }
        }

    } while (true);
}







