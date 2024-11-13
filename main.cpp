#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"
using namespace std;

int main()
{
    srand(time(0));
    int opcion;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Un Jugador :(" << endl;
        cout << "2. Dos Jugadores :)" << endl;
        cout << "3. Estadisticas" << endl;
        cout << "4. Creditos" << endl;
        cout << "5. Salir" << endl;
        cout << "Elija una opci¢n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                partidaUnJugador();
                break;
            case 2:
                partidaMultiplayer();
                break;
            case 3:
                partidaMultiplayer();
                break;

            default:
                cout << "Elija una opcion valida:" << endl;
        }
    } while (opcion != 4);

     return 0;
}
