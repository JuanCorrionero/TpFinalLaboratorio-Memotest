#ifndef DIFICULTAD_H_INCLUDED
#define DIFICULTAD_H_INCLUDED
#include "Funciones.h" //Libreria funciones incluida.

using namespace std;

int menuDificultad()
{

    int p=0;
    cout <<"***********************************************************"<<endl;
    cout <<"*               Elija la dificultad:                      *"<<endl;
    cout <<"*                                                         *"<<endl;
    cout <<"*                      Opciones                           *"<<endl;
    cout <<"*                                                         *"<<endl;
    cout <<"*                    1- Facil   (4x4)                     *"<<endl;
    cout <<"*                    2- Moderado(6x6)                     *"<<endl;
    cout <<"*                    3- Dificil (8x8)                     *"<<endl;
    cout <<"*                    0- Volver al menu.                   *"<<endl;
    cout <<"*                                                         *"<<endl;
    cout <<"*                                                         *"<<endl;
    cout <<"***********************************************************"<<endl;
    cout <<"Elija la dificultad: ";
    cin>>p;

    return p;

}


#endif // DIFICULTAD_H_INCLUDED
