#include <iostream>
#include <string>
using namespace std;

// 1. Definir la estructura del personaje
struct Personaje
{
	string nombre;
	int nivel;
	int experiencia;
	float salud;
	int ataque;
};

// 2. Definir una función subirNivel que reciba un puntero a un Persnaje y modifique sus
// campos según la fórmula
void subirNivel(Personaje* ptrPersonaje)
{
	ptrPersonaje->nivel++; //El nivel se incrementa 1
	ptrPersonaje->experiencia = 0; //Exp inicia en 0 
	ptrPersonaje->salud *= 1.1; // La salud se multiplica por 1.1
	ptrPersonaje->ataque += 5; // El ataque se suma 5
}

// 3. Crear una vartiable tipo Personaje e inicializarla con algunos valores
int main()
{
	Personaje miPersonaje;
	miPersonaje.nombre = "Viktor";
	miPersonaje.experiencia = 100;
	miPersonaje.salud = 80.5;
	miPersonaje.ataque = 20;

	// 4. Mostrar en pantalla los datos del personaje antes de subir de nivel
	cout << "**Detalles**" << endl;
	cout << "Nombre: " << miPersonaje.nombre << endl;
	cout << "Experiencia: " << miPersonaje.experiencia << endl;
	cout << "Salud: " << miPersonaje.salud << endl;
	cout << "Ataque: " << miPersonaje.ataque << endl;

	// 5. Llamar a la función subirNivel pasando la dirección de la variable del personaje
	subirNivel(&miPersonaje);

	// 6. Mostrar en pantalla los datos del perosnaje después de subir de nivel
	cout << "Has subido de nivel !" << endl;
	cout << "Nombre: " << miPersonaje.nombre << endl;
	cout << "Experiencia: " << miPersonaje.experiencia << endl;
	cout << "Salud: " << miPersonaje.salud << endl;
	cout << "Ataque: " << miPersonaje.ataque << endl;

	return 0;
}
