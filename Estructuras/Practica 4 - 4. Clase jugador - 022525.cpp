#include <iostream>
using namespace std;

/*-----------------------Práctica 4: Clase Jugador y Manipulación de Punteros------------------------
1. Definir una estructura Jugador con los miembros:
nombre (cadena de caracteres)
monedas (entero)*/
struct Jugador
{
	string nombre;
	int monedas;
};

//2. Crear una función AumentarMonedas que reciba un puntero a Jugador y un entero n, incrementando monedas.
int aumentarMonedas(int n, Jugador* ptrJugador)
{
	cout << "Hi";
}

//3. Crear una función MostrarJugador que reciba un puntero a Jugador y muestre los valores en pantalla.
void mostrarJugador(Jugador* ptrJugador)
{
	cout << "Nombre: " << jugador1.nombre << endl;
	cout << "Monedas: " << jugador1.monedas << endl;
}

//4. En el main, crear una variable Jugador con valores iniciales.
int main()
{
	Jugador jugador1 = { "JK", 234 };

}


//5. Usar un puntero que apunte a la variable creada.

//6. Mostrar monedas antes y después de llamar a AumentarMonedas.
