//Librerias y macros
#include <iostream>
#include <locale>
#include <iomanip>
#include <limits>
using namespace std;

//-------------- * Encontrar el numero mayor y menor * ----------------------------------//
//Variables globales
//Prototipo de funciones
int maxBetweenTwoNumbers(int n1, int n2);
int minBetweenTwoNumbers(int n1, int n2);

int main()
{
    //Varibles locales
    int n1, n2;
    cout << "Digite el primer numero: ";
    cin >> n1;

    cout << "Digite el segundo numero: ";
    cin >> n2;
    
    cout << "El mayor es: " << maxBetweenTwoNumbers(n1, n2) << endl;

    cout << "El menor es: " << minBetweenTwoNumbers(n1, n2) << endl;
}

//Definición de funciones
int maxBetweenTwoNumbers(int n1, int n2)
{
    int max = 0;
        if(n1 > n2)
        {
            max = n1;
        }
        else
        {
            max = n2;
        }
    return max;
}

int minBetweenTwoNumbers(int n1, int n2)
{
    int min = 0;
    if (n1 < n2)
    {
        min = n1;
    }
    else
    {
        min = n1;
    }
    return min;
}

//-------------- * Multiplicación * ----------------------------------//
//Variables globales
//Prototipo de funciones
void pedirDatos();
void mult(float x, float y);
float n1, n2;

int main()
{
    //Varibles locales
    pedirDatos();
    mult(n1, n2);

    return 0;

}

//Definición de funciones
void pedirDatos()
{
    cout << "Digite dos numeros: ";
    cin >> n1 >> n2;
}

void mult(float x, float y)
{
    float multiplicacion = n1 * n2;
    cout << "La multilpicacion es: " << multiplicacion << endl;
}
