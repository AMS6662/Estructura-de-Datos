#include <iostream>
using namespace std;

//--------------------Pracica 3.-----------------
// 1. Cear una estructura que represente un objeto de un videojuego, con los atributos necesarios
struct comida {
	string nombre;
	int nutricion;
	char calidad;
};
// 2. Usar Typedef para crear un alias para la estructura
typedef comida food;

// 3. Crear una función que reciba dos objetos y que devuelva el objeto más valioso
food masValioso(const food& a, const food& b, const food& c)
{
	//Add switch cases tobe able  compare 3 elemnts 
}

int main()
{
	food cake = { "Cake", 25, 'S'};
	food fries = { "Fries", 15, 'C' };
	food tacos = { "Tacos", 50, 'A' };

	food mejor = masValioso(cake, fries, tacos);

	cout << "El objeto más valioso es: " << mejor.nombre << " -> Nutricion: " << mejor.nutricion << endl;

}
