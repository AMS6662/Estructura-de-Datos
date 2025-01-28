#include <iostream>
using namespace std;

/*Ejercicio 1 - Calcular la velocidad de un automóvil
Deberás de realizar lo siguiente: Calcular la velocidad de un móvil, a partir de la formula ya conocida v = d/t; indicando la distancia recorrida y el tiempo utilizado.
Podemos ver que para cumplir dicho objetivo la función main invoca a diferentes funciones con una tarea específica.
pedirDistancia - Solicitar al usuario que ingrese la distancia recorrida por el móvil en metros y retorna el valor.
pedirTiempo - Solicitar al usuario que ingrese los segundos que tardo el móvil en recorrer la distancia y retorna el valor.
CalcularVelocidad - Ejecutar la fórmula y retornar el valor obtenido.
MostrarVel. - Desplegar en pantalla el valor de la velocidad. */

//Variables globales y prototipo de funciones
void pedirDistancia();
void pedirTiempo();
void calcularVelocidad(float distancia, float tiempo);
float d1, t1;

int main()
{
	//Variables locales
	pedirDistancia();
	pedirTiempo();
	calcularVelocidad(d1, t1);
}

//Definición de funciones
void pedirDistancia()
{
	cout << "Ingrese la distancia recorrida en metros: ";
	cin >> d1;
	cout << d1;
	cout << endl;
}

void pedirTiempo()
{
	cout << "Ingrese el tiempo en segundos que tardo en recorrer la distancia: ";
	cin >> t1;
	cout << t1;
	cout << endl;
}

void calcularVelocidad(float distancia, float tiempo)
{
	float velocidad = d1 / t1;

	cout << "La velocidad final es " << velocidad << " m/s" << endl;
}
