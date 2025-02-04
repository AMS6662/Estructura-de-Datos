#include <iostream>
using namespace std;

int main()
{
    int numero = 5; // crear variable
    //crear puntero que apunta a la variable
    int* puntero_a_numero = &numero;
    cout << "El valor del numero es: " << numero << endl;
    cout << "La direccion de memoria del numero es: " << &numero << endl;
    cout << "El valor al que apunta el puntero es: " << *puntero_a_numero << endl;

    return 0;
}

 //**Comprobar si un numero es par o impar, y señalar la posición de memoria donde se guarda el numero**
int main()
{
    int numero, * dir_numero;

    //Pedir numero al usuario
    cout << "Digitel el numero: ";
    cin >> numero;

    //Guardando la posicio de memoria
    dir_numero = &numero;
    //Operador Ampersand (&) devuelve la dirección de memoria donde se almacena el valor de esa variable 

    if (*dir_numero % 2 == 0)
    {
        cout << "El numero " << *dir_numero << " es par" << endl;
        // El operador asterisco (*) accede al valor almacenado en la dirección de memoria que apunta a ese puntero
        cout << "Poicion: " << dir_numero << endl;
    }

    else {
        cout << "El numero " << *dir_numero << " es impar" << endl;
        cout << "Posición: " << dir_numero << endl;
    }
    return 0;
}
