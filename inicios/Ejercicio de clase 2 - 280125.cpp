//Macros y librerias
#include <iostream>
#include <iomanip>
#include < limits>
#include <locale>
using namespace std;
/*------------- Ejercicio 2 ------------------------
Crear un programa que permita al usuario calcular el daño total que un personaje puede causar en un ataque.
El daño total se calcula *multiplicando* el ataque base por un multiplicador critico
- Pedir al usuario el ataque base del personaje
- Pedir el multiplicador critico (ej. 1.5 para un critico del 50%)
- Calcular el daño total con la formula: daño total = ataque base * multiplicador critico
- Mostrar el resultado del daño final */
 
//Funciones globales
void pedirAtaqueBase();
void pedirMultCritico();
void calcularDaño();
void mostarResultado();
float ataqueDaño;
float multCritico;
float dañoTotal;


int main()
{
    //Funciones locales
    pedirAtaqueBase();
    pedirMultCritico();
    calcularDaño();
    mostarResultado();
}

// Definicion de funciones

void pedirAtaqueBase()
{
    cout << "Ingrese el valor del ataque base de su personaje: ";
    cin >> ataqueDaño;
    cout << endl;
}

void pedirMultCritico()
{
    cout << "Ingrese el valor del multiplicador critico: ";
    cin >> multCritico;
    cout << endl;
}

void calcularDaño()
{
    dañoTotal = ataqueDaño * multCritico;
}

void mostarResultado()
{
    cout << "El daño total es: " << dañoTotal << endl;
}
