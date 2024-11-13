#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "funciones.h"


using namespace std;


// funcion para tirar los dados



bool dadosIguales(int valorDados[], int numDados) { // FUNCI├ôN PARA LOS DADOS IGUALES

    int dadoRef = valorDados[0]; // dadoRef guarda el valor del 1er dado
    int contadorIguales = 0;

        if (numDados == 1) {
        return false;  //  Caso por si hay un solo dado
    }

    for (int i = 0; i < numDados; i++) {
        if (dadoRef == valorDados[i]) {
            contadorIguales++;
        }
    }

    // Si todos los dados son iguales
    return contadorIguales == numDados;
}


    int tirarDados(){
    return rand ()%6+1;
    }



    int puntajeTotalJugador=0;
    int tiradatotal=0;




/// tira primer jugador


int tiradaUnJugador(int bloqueador1, int bloqueador2){



        int mostrarbloqueradores=bloqueador1;
        int mostrarbloqueradores22=bloqueador2;
        int i,respuesta,j;
        int sumarRondas;
        bool sigue=true;
        int dadosXJugar=5;
        int  dadospBloquear=0;
        int puntajeRonda=0;
        int tiradaRonda=0;



                  //// PARA MANEJAR LAS TIRADAS Y LOS DESCUENTOS DE DADOS


    while (dadosXJugar>0 && sigue==true) {





     int dadospBloquear=0;
     int puntajeTirada=0;



                      cout<<"TIRADA: "<<tiradaRonda+1<<endl<<endl<<endl;

                      cout<<" NO TE OLVIDES!!! TUS BLOQUEADORES SON :"<<endl;
                      cout<<mostrarbloqueradores<<" Y "<<mostrarbloqueradores22<<endl<<endl;

                      /// HACEMOS EL FOR PARA CONTROLAR EL PUNTAJE DE LAS TIRADAS Y BLOQUEAR


                      int dados[5];
                      // HACEMOS EL FOR PARA CONTROLAR EL PUNTAJE DE LAS TIRADAS Y BLOQUEAR
           for (j = 0; j < dadosXJugar; j++) {
           dados[j] = tirarDados();  // Almacenamos el valor del dado en el arreglo

         cout << "NUMERO DE DADO: " << dados[j] << endl;

         if (dados[j] == bloqueador1 || dados[j] == bloqueador2) {
            dadospBloquear++;
         } else {
            puntajeTirada += dados[j];
        }
    }

    // Verificamos si todos los dados son iguales
    if (dadosIguales(dados, dadosXJugar)) {
        cout << "┬íTodos los dados son iguales! Tu puntaje se duplica." << endl;
        puntajeTirada *= 2;
        cout << "Nuevo puntaje de la tirada: " << puntajeTirada << endl;
        sigue = true;
    }

                  dadosXJugar = dadosXJugar-dadospBloquear;
                  puntajeRonda=puntajeRonda+puntajeTirada;

                cout<<"DADOS QUE TE QUEDAN: " <<dadosXJugar<<endl;
                cout<<"EL PUNTAJE DE LA TIRADA ES :  "<<puntajeTirada<<endl;
                cout<<"EL PUNTAJE DE LA RONDA ES: "<<puntajeRonda<<endl;


                 if (dadosXJugar>0) {
                    cout<<" QUERES SERGUIR JUGANDO, digita 1? "<<endl;
                    cin>>respuesta;
                    }

                   if (respuesta==1) {
                  sigue=true;
                    }
                   else {
                  sigue=false;
                  }

                if (dadosXJugar<=0 ) {
                    cout<<"TE QUEDASTE SIN DADOS!"<<endl;
                    dadosXJugar=0;



                    }

                tiradaRonda++;
                tiradatotal++;
                system("cls");

     }
                    sumarRondas=puntajeRonda;
                    puntajeTotalJugador= puntajeTotalJugador+sumarRondas;
                    cout<<"PUNTAJE TOTAL ACUMULADO DE RONDAS= "<<puntajeTotalJugador<<endl;

                   return puntajeTotalJugador;



     }

///GUARDAR PUNTOS PARA ESTADISTICA


     void estadisticaunJugador (){


     cout<<"Tus puntos fueron "<<puntajeTotalJugador<<"  Felicitaciones!!!"<<endl;
     cout<<"En total de tiradas "<<tiradatotal<<endl;
     system("pause");


}



///saludar


void saludar(string nombreJugador){
      cout<<endl;
      cout <<" Hola "<< nombreJugador <<" que tengas buena suerte "<<endl;

      cout <<"---------------------------------------"<<endl;
}


void modo_unjugador (string nombreJugador){
    saludar(nombreJugador);}



 ///----------------------------------------- funcion

    void partidaUnJugador(){

    string nombreJugador;

    int puntosJugador;


    cout <<"Indicanos tu nombre Player1: "<<endl;
    cin >> nombreJugador;


    modo_unjugador(nombreJugador);

int rondas = 3;
int bloqueador1, bloqueador2;


        bloqueador1=tirarDados();

        bloqueador2=tirarDados();
        cout<< " TUS BLOQUEADORES SON : "<<endl;
        cout<< "   "<<bloqueador1<<endl;
        cout<< "   "<< bloqueador2<<endl;
    cout << " ----------------------------------------"<<endl;



for (int i = 0; i < rondas; i++) {



    cout << "\nRonda " << i + 1 << endl<<endl;
    cout << " ------------------------------------------"<<endl;


    puntosJugador=tiradaUnJugador (bloqueador1, bloqueador2);




    cout<<endl<<endl;


    }


    cout << "*********************************************"<<endl;

    cout<<"BUEN JUEGO  "<<nombreJugador<< "!!!!"<<" TUS PUNTOS SON :: "<<puntosJugador<<endl<<endl;

     cout << "*********************************************"<<endl;

system("pause");
    }




