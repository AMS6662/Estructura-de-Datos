#include <iostream>
using namespace std;
/* ---------------- Serie de Fibonacci ------------- */
int fibonacci(int n); //Se establece la función de fibonacci

int main()
{
	int nElementos;

	//Pedimos un numero entero positivo
	do
	{
		cout << "Digite el numero de elementos: ";
		cin >> nElementos; //Recolecta cuántos elementos devolverá la función
	} while (nElementos <= 0); //Se asegura de que la cantidad de elementos sea maypur que cero y NO un numero negativo

	//Mandamos a llamar a la función pero de forma iterativa para imprimir todos los elementos
	cout << "Serie Fibonacci: ";
	for (int i = 0; i < nElementos; i++) //Cumplirá la función de fibonacci mientras los elementos impresos no sean mayores a los establecidos en nElementos
	{
		cout << fibonacci(i) << ", "; //i representa un numero cualquiera que incrementará con cada iteración, pero inicia en 0 pues así lo hace la secuencia
	}
}

//Definición de la función de la serie de fibonacci
int fibonacci(int n) //Utilizará n como un numero cualquiera que puede ser llamdado, en main() este numero es reemplazado por i
{
	if (n < 2) //Ya que la serie de fibpnacci empieza en 0, este if se asegura de que 0, 1, 1, siempre se impriman de esta forma
	{
		return n;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2); //Este else cumple la función de sumar los dos numeros de las dos posiciones anteriores al usar n-1 (1 posición antes) y n-2 (dos posiciones antes)
	}
}
