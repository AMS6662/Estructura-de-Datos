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
