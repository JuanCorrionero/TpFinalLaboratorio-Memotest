#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

struct fichas
{
    char valor;
    bool mostrar;
};



void initMat4x4(fichas mFacil [4][4])
{
    int f, c;

    for (f=0; f<4; f++)
    {
        for(c=0; c<4; c++)
        {
            mFacil[f][c].valor='n';
            mFacil[f][c].mostrar=false;
        }
    }

}

void initMat6x6(fichas mModerado [6][6])
{
    int f, c;

    for (f=0; f<6; f++)
    {
        for(c=0; c<6; c++)
        {
            mModerado[f][c].valor='n';
            mModerado[f][c].mostrar=false;
        }
    }

}

void initMat8x8(fichas mDificil [8][8])
{
    int f, c;

    for (f=0; f<8; f++)
    {
        for(c=0; c<8; c++)
        {
            mDificil[f][c].valor='n';
            mDificil[f][c].mostrar=false;
        }
    }

}


bool verificaMatrizFacil(fichas mFacil[4][4])
{
    for (int f=0; f<4; f++)
    {
        for(int c=0; c<4; c++)
        {
            if (mFacil[f][c].valor == 'n')
            {
                return true;
            }
        }
    }
    return false;
}

bool verificaMatrizModerado(fichas mModerado[6][6])
{
    for (int f=0; f<6; f++)
    {
        for(int c=0; c<6; c++)
        {
            if (mModerado[f][c].valor == 'n')
            {
                return true;
            }
        }
    }
    return false;
}

bool verificaMatrizDificil(fichas mDificil[8][8])
{
    for (int f=0; f<8; f++)
    {
        for(int c=0; c<8; c++)
        {
            if (mDificil[f][c].valor == 'n')
            {
                return true;
            }
        }
    }
    return false;
}


void cargarFichas4x4 (fichas mFacil[4][4])
{

    int f1,c1;
    char vFichas[9]="ABCDEFGH";


    for(int i =0; i<2; i++)
    {
        for(int j=0; j<8; j++)
        {
            do
            {
                f1=sys::random(4);
                c1=sys::random(4);
            }
            while  (mFacil[f1][c1].valor!='n');
            mFacil[f1][c1].valor=vFichas[j];

        }
    }
}
void cargarFichas6x6 (fichas mModerado[6][6])
{

    int f1,c1;
    char vFichas[19]="ABCDEFGHIJKLMNOPQR";


    for(int i =0; i<2; i++)
    {
        for(int j=0; j<18; j++)
        {
            do
            {
                f1=sys::random(6);
                c1=sys::random(6);
            }
            while  (mModerado[f1][c1].valor!='n');
            mModerado[f1][c1].valor=vFichas[j];

        }
    }
}

void cargarFichas8x8 (fichas mDificil[8][8])
{

    int f1,c1;
    char vFichas[33]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456";


    for(int i =0; i<2; i++)
    {
        for(int j=0; j<32; j++)
        {
            do
            {
                f1=sys::random(8);
                c1=sys::random(8);
            }
            while  (mDificil[f1][c1].valor!='n');
            mDificil[f1][c1].valor=vFichas[j];

        }
    }
}

void botonFlashF(fichas mFacil[4][4])
{

    cout<<"      0          1          2          3"<<endl;
    for(int f=0; f<4; f++)
    {

        cout<<"   |--------------------------------------|"<<endl;
        for(int c=0; c<4; c++)
        {

            cout<<"   "<<"| "<<" "<<mFacil[f][c].valor<<" "<<" | ";

        }
        cout<<endl;
        cout<<"   |--------------------------------------|"<<endl;
    }
}

void botonFlashM(fichas mModerado[6][6])
{

    cout<<"      0          1          2          3          4          5"<<endl;
    for(int f=0; f<6; f++)
    {

        cout<<"   |------------------------------------------------------------|"<<endl;
        for(int c=0; c<6; c++)
        {

            cout<<"   "<<"| "<<" "<<mModerado[f][c].valor<<" "<<" | ";

        }
        cout<<endl;

    }
            cout<<"   |------------------------------------------------------------|"<<endl;
}

void botonFlashD(fichas mDificil[8][8])
{

    cout<<"     0        1        2        3        4        5        6        7"<<endl;
    for(int f=0; f<8; f++)
    {

        cout<<"  |--------------------------------------------------------------------|"<<endl;
        for(int c=0; c<8; c++)
        {

            cout<<" "<<" | "<<" "<<mDificil[f][c].valor<<" "<<" |";

        }
        cout<<endl;
        cout<<"  |--------------------------------------------------------------------|"<<endl;
    }
}

void mostrarTablero4x4 (fichas mFacil[4][4])

{

    int f,c;
    sys::cls();


    cout<<"      0          1          2          3"<<endl;

    for(f=0; f<4; f++)
    {
        cout<<"   |--------------------------------------|"<<endl;
        for(c=0; c<4; c++)
        {
            if(mFacil[f][c].mostrar==true)
            {

                cout<<"   "<<"| "<<" "<<mFacil[f][c].valor<<" "<<" | ";
            }
            else
            {
                cout<<"   "<<"| "<<" * "<<" | ";
            }

        }

        cout<<endl;

    }

    cout<<"   |--------------------------------------|"<<endl;


}

void mostrarTablero6x6 (fichas mModerado[6][6])

{

    int f,c;
    sys::cls();


    cout<<"      0          1          2          3          4          5"<<endl;

    for(f=0; f<6; f++)
    {
        cout<<"   |------------------------------------------------------------|"<<endl;
        for(c=0; c<6; c++)
        {
            if(mModerado[f][c].mostrar==true)
            {

                cout<<"   "<<"| "<<" "<<mModerado[f][c].valor<<" "<<" | ";
            }
            else
            {
                cout<<"   "<<"| "<<" * "<<" | ";
            }

        }

        cout<<endl;

    }

        cout<<"   |------------------------------------------------------------|"<<endl;


}

void mostrarTablero8x8 (fichas mDificil[8][8])

{

    int f,c;
    sys::cls();


    cout<<"     0        1        2        3        4        5        6        7"<<endl;

    for(f=0; f<8; f++)
    {
        cout<<"  |--------------------------------------------------------------------|"<<endl;
        for(c=0; c<8; c++)
        {
            if(mDificil[f][c].mostrar==true)
            {

                cout<<" "<<" | "<<" "<<mDificil[f][c].valor<<" "<<" |";
            }
            else
            {
                cout<<" "<<" | "<<" * "<<" |";
            }

        }

        cout<<endl;

    }

        cout<<"  |--------------------------------------------------------------------|"<<endl;


}

bool validarCordenada4x4(fichas mFacil[4][4], int f, int c)
{




    if(f <= 3 && c <= 3)
    {

        if(mFacil[f][c].mostrar==false)
        {
            mFacil[f][c].mostrar=true;
            return true;
        }
        else
        {
            cout<<"Ficha ya en uso! elija otra!"<<endl;
            return false;
        }
    }
    else
    {
        if (f == 9 || c == 9)
        {
            return true;
        }
        else {}
        if (f == -1 || c == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

bool validarCordenada6x6(fichas mModerado[6][6], int f, int c)
{




    if(f <= 6 && c <= 6)
    {

        if(mModerado[f][c].mostrar==false)
        {
            mModerado[f][c].mostrar=true;
            return true;
        }
        else
        {
            cout<<"Ficha ya en uso! elija otra!"<<endl;
            return false;
        }
    }
    else
    {
        if (f == 40 || c == 40)
        {
            return true;
        }
        else {}
        if (f == -1 || c == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

bool validarCordenada8x8(fichas mDificil[8][8], int f, int c)
{




    if(f <= 8 && c <= 8)
    {

        if(mDificil[f][c].mostrar==false)
        {
            mDificil[f][c].mostrar=true;
            return true;
        }
        else
        {
            cout<<"Ficha ya en uso! elija otra!"<<endl;
            return false;
        }
    }
    else
    {
        if (f == 90 || c == 90)
        {
            return true;
        }
        else {}
        if (f == -1 || c == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}


bool validarCordenada4x4S(fichas mFacil[4][4], int f1, int c1)
{



    if(f1 <= 3 && c1 <= 3)
    {


        if(mFacil[f1][c1].mostrar==false)
        {
            mFacil[f1][c1].mostrar=true;
            return true;
        }
        else
        {
            cout<<"Ficha ya en uso! elija otra!"<<endl;
            return false;
        }
    }
    else
    {
        return false;
    }

}

bool validarCordenada6x6S(fichas mModerado[6][6], int f1, int c1)
{



    if(f1 <= 6 && c1 <= 6)
    {


        if(mModerado[f1][c1].mostrar==false)
        {
            mModerado[f1][c1].mostrar=true;
            return true;
        }
        else
        {
            cout<<"Ficha ya en uso! elija otra!"<<endl;
            return false;
        }
    }
    else
    {
        return false;
    }

}

bool validarCordenada8x8S(fichas mDificil[8][8], int f1, int c1)
{



    if(f1 <= 8 && c1 <= 8)
    {


        if(mDificil[f1][c1].mostrar==false)
        {
            mDificil[f1][c1].mostrar=true;
            return true;
        }
        else
        {
            cout<<"Ficha ya en uso! elija otra!"<<endl;
            return false;
        }
    }
    else
    {
        return false;
    }

}

bool compararFacil(fichas mFacil[4][4],int f,int c,int f1,int c1)
{
    if(mFacil[f][c].valor==mFacil[f1][c1].valor)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool compararModerado(fichas mModerado[6][6],int f,int c,int f1,int c1)
{
    if(mModerado[f][c].valor==mModerado[f1][c1].valor)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool compararDificil(fichas mDificil[8][8],int f,int c,int f1,int c1)
{
    if(mDificil[f][c].valor==mDificil[f1][c1].valor)
    {
        return true;
    }
    else
    {
        return false;
    }
}



bool gano4x4(fichas mFacil[4][4])
{
    int con=0;
    for (int f=0; f < 4; f++)
    {
        for (int c=0; c < 4; c++)
        {
            if (mFacil[f][c].mostrar==true)
            {
                con ++;
            }
        }
    }
    if (con==16)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool gano6x6(fichas mModerado[6][6])
{
    int con=0;
    for (int f=0; f < 6; f++)
    {
        for (int c=0; c < 6; c++)
        {
            if (mModerado[f][c].mostrar==true)
            {
                con ++;
            }
        }
    }
    if (con==36)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool gano8x8(fichas mDificil[8][8])
{
    int con=0;
    for (int f=0; f < 8; f++)
    {
        for (int c=0; c < 8; c++)
        {
            if (mDificil[f][c].mostrar==true)
            {
                con ++;
            }
        }
    }
    if (con==64)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void facil(fichas mFacil[4][4])
{
    sys::cls();
    int f,c,f1,c1;
    bool flash=false;
    initMat4x4(mFacil);
    cargarFichas4x4(mFacil);
    int movimientos=20;
    while (movimientos>0)
    {
        sys::cls();
        mostrarTablero4x4(mFacil);
        cout<<"Para usar la Tecla 'flash' ingrese en fila '9'"<<endl;
        cout<<"Para salir, ingrese -1"<<endl;
        cout<<"Te quedan "<<movimientos<<" movimientos."<<endl;
        do
        {
            cout <<"Ingrese la fila: ";
            cin>>f;
            cin.ignore();
            cout <<"Ingrese la columna: ";
            cin>>c;
            cin.ignore();
        }
        while(!validarCordenada4x4(mFacil,f,c));
        if (f == 9 || c == 9)
        {
            if (flash==false)
            {
                sys::cls();
                botonFlashF(mFacil);
                sys::msleep(5);
                flash=true;
                continue;
            }
            else
            {
                cout<<"Ya usaste la tecla flash!!"<<endl;
                sys::msleep(2);
               continue;
            }
        }
        else
        {
            if (f == -1 || c == -1)
            {
                cout <<"Gracias por jugar!!"<<endl;
                sys::msleep(2);
                movimientos=0;
                break;
                cin.ignore();
            }
        }
        sys::cls();
        mostrarTablero4x4(mFacil);
        do
        {
            cout <<"Ingrese la fila: ";
            cin>>f1;
            cin.ignore();
            cout <<"Ingrese la columna: ";
            cin>>c1;
            cin.ignore();
        }
        while (!validarCordenada4x4S(mFacil,f1,c1));
        sys::cls();
        mostrarTablero4x4(mFacil);
        if(compararFacil(mFacil,f,c,f1,c1))
        {
            cout<<"Bien, hubo una coincidencia!"<<endl;
            movimientos--;
            sys::msleep(2);
        }
        else
        {
            mFacil[f][c].mostrar=false;
            mFacil[f1][c1].mostrar=false;
            movimientos --;
            cout<<"Un movimiento menos.. intenta de nuevo!"<<endl;
            sys::msleep(2);
        }
        if (gano4x4(mFacil)==true)
    {
        cout<<"Ganaste!!!! Felicitaciones y Gracias por jugar!!!!"<<endl;
        sys::msleep(3);
        movimientos=0;
        break;
    }
    else
    {
    }
    if(movimientos==0)
    {
        cout <<"Has perdido.. mejor intentalo cuando desees jugar de nuevo! Gracias por jugar!!!"<<endl;
        sys::msleep(3);
    }
    }
}





void moderado(fichas mModerado[6][6])
{

    sys::cls();
    int f,c,f1,c1;
    bool flash=false;

    initMat6x6(mModerado);

    cargarFichas6x6(mModerado);

    int movimientos=40;

    while (movimientos>0)
    {


        sys::cls();
        mostrarTablero6x6(mModerado);

        cout<<"Para usar la Tecla 'flash' ingrese en fila '40'"<<endl;
        cout<<"Para salir, ingrese -1"<<endl;
        cout<<"Te quedan "<<movimientos<<" movimientos."<<endl;

        do
        {

            cout <<"Ingrese la fila: ";
            cin>>f;
            cin.ignore();
            cout <<"Ingrese la columna: ";
            cin>>c;
            cin.ignore();

        }
        while(!validarCordenada6x6(mModerado,f,c));

        if (f == 40 || c == 40)
        {
            if (flash==false)
            {
                sys::cls();
                botonFlashM(mModerado);
                sys::msleep(5);
                flash=true;
                continue;
            }
            else
            {
                cout<<"Ya usaste la tecla flash!!"<<endl;
                sys::msleep(2);
                continue;

            }


        }
        else
        {
            if (f == -1 || c == -1)
            {
                cout <<"Gracias por jugar!!"<<endl;
                sys::msleep(2);
                movimientos=0;
                break;
                cin.ignore();
            }
        }

        sys::cls();

        mostrarTablero6x6(mModerado);

        do
        {

            cout <<"Ingrese la fila: ";
            cin>>f1;
            cin.ignore();
            cout <<"Ingrese la columna: ";
            cin>>c1;
            cin.ignore();

        }

        while (!validarCordenada6x6S(mModerado,f1,c1));

        sys::cls();

        mostrarTablero6x6(mModerado);

        if(compararModerado(mModerado,f,c,f1,c1))
        {
            cout<<"Bien, hubo una coincidencia!"<<endl;
            movimientos--;
            sys::msleep(2);
        }
        else
        {
            mModerado[f][c].mostrar=false;
            mModerado[f1][c1].mostrar=false;
            movimientos --;
            cout<<"Un movimiento menos.. intenta de nuevo!"<<endl;
            sys::msleep(2);
        }

    if (gano6x6(mModerado)==true)
    {
        cout<<"Ganaste!!!! Felicitaciones y Gracias por jugar!!!!"<<endl;
        sys::msleep(3);
        movimientos=0;
        break;
    }
    else
    {    }

    if(movimientos==0)
    {
        cout <<"Has perdido.. mejor intentalo cuando desees jugar de nuevo! Gracias por jugar!!!"<<endl;
        sys::msleep(3);
    }

    }




}

void dificil (fichas mDificil[8][8])
{
sys::cls();
    int f,c,f1,c1;
    bool flash=false;

    initMat8x8(mDificil);

    cargarFichas8x8(mDificil);

    int movimientos=60;

    while (movimientos>0)
    {


        sys::cls();
        mostrarTablero8x8(mDificil);

        cout<<"Para usar la Tecla 'flash' ingrese en fila '90'"<<endl;
        cout<<"Para salir, ingrese -1"<<endl;
        cout<<"Te quedan "<<movimientos<<" movimientos."<<endl;

        do
        {

            cout <<"Ingrese la fila: ";
            cin>>f;
            cin.ignore();
            cout <<"Ingrese la columna: ";
            cin>>c;
            cin.ignore();

        }
        while(!validarCordenada8x8(mDificil,f,c));

        if (f == 90 || c == 90)
        {
            if (flash==false)
            {
                sys::cls();
                botonFlashD(mDificil);
                sys::msleep(5);
                flash=true;
                continue;
            }
            else
            {
                cout<<"Ya usaste la tecla flash!!"<<endl;
                sys::msleep(2);
                continue;

            }


        }
        else
        {
            if (f == -1 || c == -1)
            {
                cout <<"Gracias por jugar!!"<<endl;
                sys::msleep(2);
                movimientos=0;
                break;
                cin.ignore();
            }
        }

        sys::cls();

        mostrarTablero8x8(mDificil);

        do
        {

            cout <<"Ingrese la fila: ";
            cin>>f1;
            cin.ignore();
            cout <<"Ingrese la columna: ";
            cin>>c1;
            cin.ignore();

        }

        while (!validarCordenada8x8S(mDificil,f1,c1));

        sys::cls();

        mostrarTablero8x8(mDificil);

        if(compararDificil(mDificil,f,c,f1,c1))
        {
            cout<<"Bien, hubo una coincidencia!"<<endl;
            movimientos--;
            sys::msleep(2);
        }
        else
        {
            mDificil[f][c].mostrar=false;
            mDificil[f1][c1].mostrar=false;
            movimientos --;
            cout<<"Un movimiento menos.. intenta de nuevo!"<<endl;
            sys::msleep(2);
        }

    if (gano8x8(mDificil)==true)
    {
        cout<<"Ganaste!!!! Felicitaciones y Gracias por jugar!!!!"<<endl;
        sys::msleep(3);
        movimientos=0;
        break;
    }
    else
    {    }

    if(movimientos==0)
    {
        cout <<"Has perdido.. mejor intentalo cuando desees jugar de nuevo! Gracias por jugar!!!"<<endl;
        sys::msleep(3);
    }

    }

}

#endif // FUNCIONES_H_INCLUDED
