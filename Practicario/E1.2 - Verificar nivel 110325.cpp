#include <iostream>
using namespace std;

//--------------------------- * Ejercicio 1.2: Verificar Nivel * ---------------------------------------

/*Criterios de Evaluación:
- Definición de la función VerificarNivel correctamente. (10%)
- Uso adecuado de parámetros (nivel actual y nivel objetivo). (15%)
- Condición implementada correctamente (nivelActual >= 2 * nivelObjetivo). (20%)
- Salida adecuada de mensaje según el resultado de la condición. (25%)
- Código organizado, indentado y comentado correctamente. (20%)
*/

//2. Uso adecuado de parámetros (nivel actual y nivel objetivo)
int nivelActual;
int nivelObjetivo = 0;

//1.Definición de la función verificarNivel
void verificarNivel(int nivelActual, int nivelObjetivo) //parametros de la función
{
    cout << "Ingrese el nivel de su personaje: ";
    cin >> nivelActual;
    cout << endl;
    nivelObjetivo++; //El nivel se incrementa 1

    //Verificar Nivel
    if (nivelActual >= 2 * nivelObjetivo) //Implementación de la condición
    {
        cout << "Ha alcanzado su nivel objetivo !" << endl;
    }
    else
    {
        cout << "Aun no ha alcanzado su nivel objetivo.";
    }
}

int main()
{
    verificarNivel(nivelActual, nivelObjetivo);
}
