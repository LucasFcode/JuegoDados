#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "funciones.h"

///// MENÚ //////
int seleccionarOpcion() {
    int opcion;

    do {
        cout << endl;
        cout << "**********************************" << endl;
         cout << endl;
        cout << "--- M E N U   P R I N C I P A L ---" << endl;
        cout << endl;
        cout << "**********************************" << endl;
        cout << endl;
        cout << "1. Un Jugador" << endl;
        cout << endl;
        cout << "2. Dos Jugadores" << endl;
        cout << endl;
        cout << "3. Estadisticas" << endl;
        cout << endl;
        cout << "4. Creditos" << endl;
        cout << endl;
        cout << "5. Salir" << endl;
        cout << endl;
        cout << "Elija una opcion: " << endl;
         cout << "------------------------" << endl;


        if (!(cin >> opcion)) {
            cout << "Entrada invalida. Por favor, ingrese un numero de la lista." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            return opcion;
        }

    } while (true);
}

void ejecutarOpcion(int opcion) {
    switch (opcion) {
        case 1:
            partidaUnJugador();
            break;
        case 2:
            partidaMultiplayer();
            break;
        case 3:
            cout << "Aca van las estadisticas" << endl;
            break;
        case 4:
            cout << "Aca van los creditos" << endl;
            break;
        case 5:
            cout << "Gracias por jugar!!!" << endl;
            break;
        default:
            cout << "Elija una opcion valida: " << endl;
            break;
    }
}

///// FINALIZA MENÚ //////
