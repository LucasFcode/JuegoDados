#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"
using namespace std;

int seleccionarOpcion();
void ejecutarOpcion(int opcion);

int main() {
    srand(time(0));
    int opcion;
    do {
        system("cls");

        opcion = seleccionarOpcion();
        ejecutarOpcion(opcion);

    } while (opcion != 5);
    return 0;
}
