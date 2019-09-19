//#############################################################################
// ARCHIVO             : Memotest.cbp
// AUTOR/ES            : Corrionero Juan Ignacio.
// VERSION             : 16.01.
// FECHA DE CREACION   : 16/06/2017.
// ULTIMA ACTUALIZACION: 23/06/2017.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Windows 7.
// IDE                 : Code::Blocks - 16.01
// COMPILADOR          : MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
#ifndef _WIN32
# define _WIN32
#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
//#ifndef _LINUX
//  # define _LINUX
//#endif

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
// objetos cin, cout y endl.

#include <cstdlib>  // Libreria estandar que contiene la funcion exit().


//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "CSYSTEM/csystem.h" // Libreria para multiplataforma.
#include "presentacion.h" // Libreria de presentacion.
#include "Menu.h" //Libreria de Presentacion del juego.
#include "Dificultad.h" //Libreria de la Dificultad del juego.
#include "Funciones.h" // Librera logica del juego.
#include "ayuda.h" // Libreria de ayuda.
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
using namespace std;



int main()
{
    sys::randomize();
    fichas mat1[4][4];
    fichas mat2[6][6];
    fichas mat3[8][8];
    int op=0,a=0,p=0;

    bool salir=false;

    mostrarPresentacion();

    sys::msleep(3);


    while (!salir)
    {


        sys::cls();
        menuPrincipal();
        cout <<"Ingrese una opcion: ";
        cin>>op;
        cin.ignore();

        switch(op)
        {
        case 1:

            sys::cls();
            p= menuDificultad();
            switch(p)
            {
            case 1:
                facil(mat1);
                break;
            case 2:

                moderado(mat2);
                break;
            case 3:

                dificil(mat3);
                break;
            case 0:


                break;
            default:

                cout<<"Opcion incorrecta! intente de nuevo!"<<endl;
                sys::msleep(2);

            break;
            }



        break;
    case 2:

        ayuda();


        break;
    case 3:

        cout <<"Confirmas que queres salir? 1=Si 0=No. ";
        cin>> a;
        cin.ignore();
        if (a==1)
        {
            sys::cls();
            mostrarDespedida();
            sys::msleep(2);

            salir=true;
        }
        else
        {

        }
        if(a==0)
        {
            salir=false;
        }

        break;
    default:

        cout <<"Opcion incorrecta! Intente de nuevo! "<<endl;



        break;
    }


}


return 0;
}

//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################

