#include <iostream>
#include "funciones.h"
#include <fstream>
#include <time.h>
using namespace std;



///FUNCION PARA SALUDAR A CADA MULTIPLAYER
void multiplayer (string nombreJugador){
    saludar(nombreJugador);}


    int puntajeTotal2=0;
    int puntajeTotal1=0;
    int tiradatotal1=0;
    int tiradatotal2=0;




/// FUNCION PARA tiraR primer jugador
int tiradaPlayer1(int bloqueador1, int bloqueador2, string nombreJugador1){


        int mostrarbloquerador1=bloqueador1;
        int mostrarbloquerador1_1=bloqueador2;
        int i,respuesta,j;
        int sumarRondas;
        bool sigue=true;
        int dadosXJugar=5;
        int  dadospBloquear=0;
        int puntajeRonda=0;
        int tiradaRonda=0;


/// PARA MANEJAR LAS TIRADAS Y LOS DESCUENTOS DE DADOS


    while (dadosXJugar>0 && sigue==true) {


     int dadospBloquear=0;
     int puntajeTirada=0;

                      cout << "Tira el jugador " << nombreJugador1 << endl;
                      cout<<"TIRADA: "<<tiradaRonda+1<<endl<<endl<<endl;

                      cout<<" NO TE OLVIDES!!! TUS BLOQUEADORES SON :"<<endl;
                      cout<<mostrarbloquerador1<<" Y "<<mostrarbloquerador1_1<<endl<<endl;



/// HACEMOS EL FOR PARA CONTROLAR EL PUNTAJE DE LAS TIRADAS Y BLOQUEAR

                      int dados[5];

/// HACEMOS EL FOR PARA CONTROLAR EL PUNTAJE DE LAS TIRADAS Y BLOQUEAR

  for (j = 0; j < dadosXJugar; j++) {
        dados[j] = tirarDados();  // Almacenamos el valor del dado en el arreglo

        cout << "NUMERO DE DADO: " << dados[j] << endl;

        if (dados[j] == bloqueador1 || dados[j] == bloqueador2) {
            dadospBloquear++;
        } else {
            puntajeTirada += dados[j];
        }
    }

/// Verificamos si todos los dados son iguales

    if (dadosIguales(dados, dadosXJugar)) {
        cout << "¡Todos los dados son iguales! Tu puntaje se duplica." << endl;
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
                tiradatotal1++;
                system("cls");


     }
                    sumarRondas=puntajeRonda;
                    puntajeTotal1= puntajeTotal1+sumarRondas;
                    cout<<"PUNTAJE TOTAL ACUMULADO= "<<puntajeTotal1<<endl;

                   return puntajeTotal1;



     }







/// TIRA SEGUNDO JUGADOR


int tiradaPlayer2 (int bloqueador2_1, int bloqueador2_2,string nombreJugador2){



        int mostrarbloquerador2=bloqueador2_1;
        int mostrarbloquerador2_1=bloqueador2_2;
            int respuesta;

            int sumarRondas;


     bool sigue=true;
                 int dadosXJugar=5;
                  int  dadospBloquear=0;
                  int puntajeRonda2=0;

                   int tiradaRonda=0;


/// PARA MANEJAR LAS TIRADAS Y LOS DESCUENTOS DE DADOS



    while (dadosXJugar>0 && sigue==true) {


                      int puntajeTirada=0;
                      int dadospBloquear=0;


                      cout << "Tira el jugador " << nombreJugador2 << endl;

                      cout<<"TIRADA: "<<tiradaRonda+1<<endl<<endl<<endl;

                      cout<<" NO TE OLVIDES!!! TUS BLOQUEADORES SON :"<<endl<<endl;
                      cout<<mostrarbloquerador2<<" Y "<<mostrarbloquerador2_1<<endl;


/// HACEMOS EL FOR PARA CONTROLAR EL PUNTAJE DE LAS TIRADAS Y BLOQUEAR

                                 int dados[5];

         for ( int j = 0; j < dadosXJugar; j++) {
        dados[j] = tirarDados();  // Almacenamos el valor del dado en el arreglo

        cout << "NUMERO DE DADO: " << dados[j] << endl;

        if (dados[j] == bloqueador2_1 || dados[j] == bloqueador2_2) {
            dadospBloquear++;
        } else {
            puntajeTirada += dados[j];
        }
    }

                  dadosXJugar = dadosXJugar-dadospBloquear;
                  puntajeRonda2=puntajeRonda2+puntajeTirada;

                cout<<"DADOS QUE TE QUEDAN: " <<dadosXJugar<<endl;
                cout<<"EL PUNTAJE DE LA TIRADA ES :  "<<puntajeTirada<<endl;
                cout<<"EL PUNTAJE DE LA RONDA ES: "<<puntajeRonda2<<endl;


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
                tiradatotal2++;
                system("cls");


     }
                    sumarRondas=puntajeRonda2;
                    puntajeTotal2= puntajeTotal2+sumarRondas;
                    cout<<"PUNTAJE TOTAL ACUMULADO= "<<puntajeTotal2<<endl;


                 return puntajeTotal2;


    }






///-----------------------------------------------------------------------------


void partidaMultiplayer(){


    string nombreJugador1;
    string nombreJugador2;
    int puntosGanador1, puntosGanador2;



    cout <<"Indicanos tu nombre Player1: "<<endl;
    cin >> nombreJugador1;


multiplayer(nombreJugador1);


int rondas = 3;
int bloqueador1, bloqueador2, bloqueador2_1, bloqueador2_2;

        cout<< " LOS BLOQUEADORES DE "<<nombreJugador1<< " SON: "<<endl;

        bloqueador1=tirarDados();
        cout<< " EL 1° :  "<<bloqueador1<<endl;
         bloqueador2=tirarDados();
        cout<< " EL 2°:  "<< bloqueador2<<endl;

    cout <<"Indicanos tu nombre Player2: "<<endl;
    cin >>nombreJugador2;
    multiplayer(nombreJugador2);


    cout<< " LOS BLOQUEADORES DE "<<nombreJugador2<< " SON: "<<endl;

    bloqueador2_1=tirarDados();
        cout<< " EL 1° ES:  "<<bloqueador2_1<<endl;
    bloqueador2_2=tirarDados();
        cout<< " EL 2° ES:  "<<bloqueador2_2<<endl;


    for (int i = 0; i < rondas; i++) {


    cout << "\nRonda " << i + 1 << endl<<endl;
    cout << " -----------------------------------------------"<<endl;


    puntosGanador1=tiradaPlayer1 (bloqueador1, bloqueador2, nombreJugador1);




    cout<<endl<<endl;


    cout << "\nRonda " << i + 1 << endl<<endl;
    cout << " -----------------------------------------------"<<endl;


    puntosGanador2=tiradaPlayer2 (bloqueador2_1, bloqueador2_2, nombreJugador2);


    }


    cout << "*********************************************"<<endl;

    cout<<"Puntos de "<<nombreJugador1<<" : "<<puntosGanador1<<endl<<endl;
    cout<<"Puntos de "<<nombreJugador2<<" : "<<puntosGanador2<<endl<<endl;

     cout << "*********************************************"<<endl;


    if (puntosGanador1>puntosGanador2){
        cout<<endl<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout <<" Victoria de "<<nombreJugador1<<endl;
    }
    else {
        cout<<endl<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<" Victoria de "<<nombreJugador2<<endl;
    }


    system("pause");

    }


    void creditos (){

      cout<<endl;
      cout <<" Carla Joaquina Andrade LEG: 29676"<<endl;
      cout <<" Emmanuel Sansberro LEG: 31704 "<<endl;
      cout <<" Gustavo Ruiz LEG: 26112 "<<endl;
      cout <<" Lucas Flores LEG: 31626 "<<endl;
      system("pause");


    }


    void estadisticaMultiplayer (){
    cout<<"Jugador 1"<<endl;
     cout<<"Tus puntos fueron "<<puntajeTotal1<<" Felicitaciones!!!"<<endl;
     cout<<"En total de tiradas "<<tiradatotal1<<endl<<endl<<endl;


     cout<<"Jugador 2"<<endl;
     cout<<"Tus puntos fueron "<<puntajeTotal2<< " Felicitaciones!!!"<<endl;
     cout<<"En total de tiradas "<<tiradatotal2<<endl;
     system("pause");



}

