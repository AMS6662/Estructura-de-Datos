#include <iostream>
using namespace std;

//--------------------------- * Ejercicio 1.1: Calculadora de Puntos de Experiencia (XP) * ---------------------------------------

/*Criterios de Evaluación:
- Definición de la función CalcularXP correctamente. (10%)
- Uso adecuado de parámetros y retorno de valores. (15%)
- Cálculo correcto de XP (multiplicación por 100). (20%)
- Uso adecuado de tipos de datos (int para la cantidad de enemigos y XP). (10%)
- Pruebas con diferentes valores y output correcto en consola. (25%)
- Código estructurado, legible y bien comentado. (20%)*/

int enemigo = 1;
int baseXP = 1;
int finalXP;

//Definicion de calcularXP
int calcularXP(int enemigo, int baseXP) //Parametros
{
    return enemigo * 100;
}

int main()
{
    cout << "Cuantos enemigos quieres atacar?: ";
    cin >> enemigo;
    finalXP = calcularXP(enemigo, baseXP);

    cout << "Ganaste " << finalXP << "HP!";
        return 0;
}
