#ifndef AYUDA_H_INCLUDED
#define AYUDA_H_INCLUDED

using namespace std;

void ayuda()

{
    sys::cls();
    cout <<"****************************************************************"<<endl;
    cout <<"*                        Ayuda                                 *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"*      Para iniciar a Jugar, se debe elejir una opcion que     *"<<endl;
    cout <<"*      este en las opciones mencionadas.                       *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"*      Dentro del juego, dependiendo la  dificultad:           *"<<endl;
    cout <<"*      Facil: Elejir entre las filas y columnas 0 y 3          *"<<endl;
    cout <<"*      Moderado: Elejir entre filas y columnas 0 y 5           *"<<endl;
    cout <<"*      Dificil: Elejir entre filas y columnas 0 y 7            *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"*      Cantidad de movimientos:                                *"<<endl;
    cout <<"*      Facil: 20 movimientos                                   *"<<endl;
    cout <<"*      Moderado: 40 movimientos                                *"<<endl;
    cout <<"*      Dificil: 60 movimientos                                 *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"*      Ayuda extra: Tecla 'flash' : Muestra el tablero unos    *"<<endl;
    cout <<"*      segundos por una sola vez dentro del juego.             *"<<endl;
    cout <<"*      Para el modo facil se debe tipear en fila el numero     *"<<endl;
    cout <<"*      9, en moderado 40, y en dificil 90.                     *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"*      Para salir al menu se debe tipear en fila -1 y en       *"<<endl;
    cout <<"*      columna tipear cualquier numero.                        *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"*                                                              *"<<endl;
    cout <<"****************************************************************"<<endl;

    cout<<" Presiona enter para volver al menu."<<endl;

    cin.get();
}

#endif // AYUDA_H_INCLUDED
