#include <iostream>
#include <cmath>
#include <math.h>
#define M_PI 3.141592653
using namespace std;

//Definir funcion recursiva
void TrajectoryCalculation(double* posX, double* posY, double time, int power, int angle, 
    double gravity, double *finalPosX, double *finalPosY, double& finalTime)
{
    double velocityX = power * cos(angle * M_PI / 180); //Se usan sin y cos pues estas son 
    double velocityY = power * sin(angle * M_PI / 180); // funciones trigonometricas

    //Actualiza la posición horizontal y vertical
    *posX = velocityX * time;
    *posY = velocityY * time - 0.5 * time * time;

    //Verificar si el balón ha llegado al suelo. Terminar la función
    if (*posY <= 0)
    {
        *finalPosX = *posX;
        *finalPosY = 0;
        finalTime = time;
        return;
    }
//Si el balón ha llegado al suelo, llamar recursivamente la función
//TrajectoryCalculation para calcular la trayectoria para el siguiente paso de tiempo
    TrajectoryCalculation(posX, posY, time + 0.1, power, angle, gravity, finalPosX,
        finalPosY, finalTime);

}

int main()
{//Definir las variables
    double posX = 0;
    double posY = 0;
    double time = 0.1;
    int power;
    int angle;
    double gravity = 9.81;
    double finalPosX = 0;
    double finalPosY = 0;
    double finalTime = 0;

   //Solicitar potencia del tiro
    cout << "Ingrese la potencia del tiro: ";
    cin >> power;
    cout << endl;
    //Validar que esté entre 0 y 100
    if (power >= 0 && power <= 100)
    {
       //Solicitar el ángulo del tiro
        cout << "Ingrese el angulo del tiro: ";
        cin >> angle;
        cout << endl;
        //Validar que esté entre 0 y 90
        if (angle >= 0 && angle <= 90)
        {
            //Llamar TrajectoryCalculation para calcular la trayectoria
            TrajectoryCalculation(&posX, &posY, time, power, angle, gravity, &finalPosX, 
                &finalPosY, finalTime);
            cout << "Tiempo:" << finalTime << "s -> " << "Posicion (x,y): (" 
                << finalPosX << "," << finalPosY << ")" << endl;
        }
        else
        {
            cout << "Angulo invalido";
        }
    }
    else
    {
        cout << "Potencia invalida";
    }
    return 0;
}
