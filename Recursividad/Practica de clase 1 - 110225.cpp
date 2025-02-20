#include <iostream>
using namespace std;

/*---------------------------- Repaso de apuntadores --------------------------------*/
//PASO 1. Definir la estructura del personaje
// Crea una estructura que contenga: nombre (string), clase (string), fuerza (int),
// inteligencia (int), destreza (int)

struct Personaje
{
	string nombre;
	string clase;
	int fuerza;
	int inteligencia;
	int destreza;
};

//PASO 2. Inicializar el personaje
int main()
{
	Personaje personaje1;
	cout << "Ingrese el nombre de su personaje: ";
	cin >> personaje1.nombre;
	cout << endl;

	cout << "Ingrese la clase de su personaje (Guerero, Mago, Arquero): ";
	cin >> personaje1.clase;
	cout << endl;

	//PASO 3. Asignar puntos de atributo
	//El jugador empieza con 10 puntos de habilidad para distrubuir entra Fuerza, Inteligencia y Destreza
	// Solicita al jugador que asigne estos puntos
	//Verifica que no asigne más de 10 puntos en total
	int habilidad = 10;
	int habilidadTotal = personaje1.fuerza + personaje1.inteligencia + personaje1.destreza;

	cout << "Su personaje tiene un total de 10 puntos de habilidad." << endl;
	cout << "Puntos de Fuerza: ";
	cin >> personaje1.fuerza;

	cout << "Puntos de Inteligencia: ";
	cin >> personaje1.inteligencia;

	cout << "Puntos de Destreza: ";
	cin >> personaje1.destreza;

		if (habilidadTotal == habilidad)
		{
			cout << "Su personaje está listo";
		}
		else
		{
			cout << "Los valores ingresados son incorrectos";
			cout << "Puntos de Fuerza: ";
			cin >> personaje1.fuerza;

			cout << "Puntos de Inteligencia: ";
			cin >> personaje1.inteligencia;

			cout << "Puntos de Destreza: ";
			cin >> personaje1.destreza;
		}
}
