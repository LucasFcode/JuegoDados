#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rlutil.h"
using namespace std;
#include "funciones.h"
// funcion para tirar los dados



    int tirarDados(){
    return rand ()%6+1;
    }






    int puntajeTotalJugador=0;




/// tira primer jugador
int tiradaUnJugador(int bloqueador1, int bloqueador2){



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

                      /// HACEMOS EL FOR PARA CONTROLAR EL PUNTAJE DE LAS TIRADAS Y BLOQUEAR
                      for (j=0; j<dadosXJugar;j++) {
                      int dadosTirada1=0;
                      dadosTirada1=tirarDados();

                     cout<<"Nø DE DADO: "<<dadosTirada1<<endl;

                      if (dadosTirada1==bloqueador1||dadosTirada1==bloqueador2) {
                      dadospBloquear++; /// contamos los dados que vamos bloqueando
                       }
                       else {
                        puntajeTirada=puntajeTirada+dadosTirada1;
                       }

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

     }
                    sumarRondas=puntajeRonda;
                    puntajeTotalJugador= puntajeTotalJugador+sumarRondas;
                    cout<<"PUNTAJE TOTAL ACUMULADO= "<<puntajeTotalJugador<<endl;

                   return puntajeTotalJugador;


     }



////-----------------------------------------saludar


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

        cout<< " TUS BLOQUEADORES SON : "<<endl;

        bloqueador1=tirarDados();
        cout<< "   "<<bloqueador1<<endl;
         bloqueador2=tirarDados();
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


    }



