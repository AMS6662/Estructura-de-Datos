#include <iostream>
using namespace std;

/* 1. Declara la variable SALUD para almacenar la salud del jugador
    2. Usa un puntero para manipular y acceder a la variable
    3. Se determinará si la salud es CRITICA, NORMAL, o ALTA
    4. Se mostrará la dirección de memoria de la variable de salud*/

int main()
{
    int SALUD,
        * dir_salud; //Asterisco accede al valor de la direccion de memoria

    cout << "Ingrese la salud del jugador: ";
    cin >> SALUD;

    //Guardando la posicion de memoria
    dir_salud = &SALUD;

    if (*dir_salud >= 70)
    {
        cout << "La salud es ALTA" << endl;
        cout << "Posicion: " << dir_salud << endl;
    }

    if (*dir_salud < 70 && *dir_salud >= 30)
    {
        cout << "La salud es NORMAL" << endl;
        cout << "Posicion: " << dir_salud << endl;
    }

    if (*dir_salud < 30)
    {
        cout << "La salud es CRITICA" << endl;
        cout << "Posicion: " << dir_salud << endl;
    }
}
