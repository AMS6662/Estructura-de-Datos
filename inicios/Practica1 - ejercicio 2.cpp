// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.

//librerias y macros
#include <iostream>
#include <locale>
#include <iomanip>
#include <limits>
using namespace std;

/*La fórmula para calcular el área de un polígono regular
es: a = (P x a) / 2; donde a= área; P = perímetro; a = apotema;
Realizar un programa que a través del llamado de diferentes funcione,
permita seleccionar 4 polígonos regulares (pentágono, hexágono, heptágono
y octágono), para posteriormente calcular su área.*/

//varibles globales
void informacion();
void calculoPerimetro();
void calculoArea();
float lado, perimetro, apotema, area;
int nLados;


int main()
{
	//variables locales
	char p1;
	
	informacion();

	cout << "Conoce el valor del perimetro? (Y/N): ";
	cin >> p1;

	if (p1 == 'Y' || p1 == 'y')
	{
		cout << endl; 
		cout << "Ingrese el valor del perimetro: ";
		cin >> perimetro;

		calculoArea();
	}

	else
	{
		calculoPerimetro();
		calculoArea();
	}

	return 0;
}

//definición de funciones
void informacion()
{
	cout << "Calculadora de area" << endl;
	cout << "Pentagono = 5" << endl;
	cout << "Hexagono = 6" << endl;
	cout << "Heptagono = 7" << endl;
	cout << "Octagono = 8" << endl;
}

void calculoPerimetro()
{
	cout << endl;

	cout << "Ingrese el tamaño del lado: ";
	cin >> lado;
	cout << endl;

	cout << "Ingrese el numero de lados: ";
	cin >> nLados;
	cout << endl;

	perimetro = nLados * lado;
	cout << "El tamaño del perimetro es: " << perimetro;
	cout << endl;
}

void calculoArea()
{
	cout << endl;
	cout << "Ingrese el valor del apotema: ";
	cin >> apotema;
	cout << endl;

	area = perimetro * apotema / 2;
	cout << "El area del poligono es: " << area << endl;
}
