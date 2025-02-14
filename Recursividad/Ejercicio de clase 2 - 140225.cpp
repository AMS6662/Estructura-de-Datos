#include <iostream>
#include <cmath>
#include <math.h>
#define M_PI 3.141592653
using namespace std;

/*---------------------Ejercicio 2. Recursividad------------------
PASO 1. Variables y constantes necesarias
- Var para almacenar la potencia del tiro (entre 0 y 100)
- Var. que almacene el angulo (entre 0 y 90)
- Var de gravedad (9.81)
- Puntero que almacene la posición horizontal "x", del balón (inicialmente 0)
- Puntero que almacene la posición vertical "y", del balón (inicialmente 0)
- Var que almacene el tiempo transcurrido desde el lamzamiento del balón (incialmente 0.1)*/

//Funcion recursiva
void CalculoTrayectoria(double * posX, double* posY, double time, int power, int angle, double gravity)
    {
    double velocityX = power * cos(angle * M_PI / 180); //Se usan sin y cos pues estas son 
    double velocityY = power * sin(angle * M_PI / 180); // funciones trigonometricas
    //Actualiza la posición horizontal y vertical
    *posX = velocityX * time;
    *posY = velocityY * time - 0.5 * time * time; 
    cout << "Tiempo:" << time << "S -> " << "Posición (x,y): (" << *posX << "," << *posY << ")" << endl;
   //Verificar si el balón ha llegado al suelo. Terminar la función
    if (*posY <= 0)
    {
        cout << "El balon ha tocado el suelo. Fin del tiro." << endl;
        return;
    }
    }

//Si el balón ha llegado al suelo, llamar recursivamente la función
//TrajectoryCalculation para calcular la trayectoria para el siguiente paso de tiempo
int main(double* posX, double* posY, double time, int power, int angle, double gravity)
{
   //Solicitar potencia del tiro
    cout << "Ingrese la potencia del tiro: ";
    cin >> power;
    //Validar que esté entre 0 y 100
    if (power <= 100)
    {

    }
    
    if (*posY > 0)
    {
        CalculoTrayectoria(posX, posY, time, power, angle, gravity);
        time =+ 0.1;
    }
}
