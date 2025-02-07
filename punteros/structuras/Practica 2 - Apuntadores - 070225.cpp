
#include <iostream>
using namespace std;

//Paso 1: Definir la estructura Arma
struct Arma
{
    string nombre;
    int precio;
    int damage;
};

int main()
{
    int opcion;

    //Paso 2: Definir las armas disponibles
    Arma armas[3] = /*[3] es para definir que habrá 3 elementos dentro del array, si tuvieramos 5 tipos de armas, el array sería armas[5]*/
    {
        {"Espada oxidada", 25, 13}, {"Escudo magico", 20, 15}, {"Arco elfico", 50, 22}
    };
    int cantidadArmas = sizeof(armas) / sizeof(Arma);
    
    //Paso 3: Definir el oro inicial del jugador
    int oroJugador = 49;
    int* oroActual = &oroJugador; //*oroActual accede al valor almacenado
    // &oroJugador accede a y devuelve la dirección de memoria

    //Paso 4: Implementar el bucle inicial del juego
    //Crear un ciclo while para representar el ciclo principal del juego
    int x = 1;
    while (x < 2)
    {
        //Mostrar un mensaje de bienvenida y el oro actual del jugador
        cout << "Has llegado a la tienda de armas ^^!" << endl;
        cout << "Cantidad de oro disponible: " << oroJugador << endl;
        x++;
    }

    //Paso 5: Mostrar las armas disponibles
    Arma *armasEnVenta = armas; // Almacenar el arreglo de armas en un puntero

    //Recorrer el array armasEnVenta utilizando un bucle for
    cout << endl; 
    cout << "Las armas en venta son:" << endl;
    for (int i = 0; i < cantidadArmas; i++)
    {
        cout << "Arma " << (i + 1) << ": " <<  armasEnVenta[i].nombre << endl;
        cout << "Precio: " << armasEnVenta[i].precio << endl;
        cout << "Damage: " << armasEnVenta[i].damage << endl;
        cout << endl;
    }

    //Paso 6: Mostrar el menú de opciones
    cout << "Que deseas hacer ?" << endl;
    cout << "1 - Comprar un arma" << endl;
    cout << "2 - Salir de la tienda" << endl;
    cout << "=> ";
    cin >> opcion;

    //Paso 7: Procesar la opcion seleccionada
    //Utiliza la instruccion switch para procesar la opcion seleccionada
    switch (opcion)
    {
    case 1:
    //Menu de armas
        cout << "Armas disponibles: " << endl;
        for (int i = 0; i < cantidadArmas; i++)
        {
            cout << "Arma " << (i + 1) << ": " << armasEnVenta[i].nombre << endl;
        }
        cout << endl;
        //Ingresar numero de arma
        int nArma;
        cout << "Que numero de arma deseas comprar ?" << endl;
        cout << "=> ";
        cin >> nArma;
        //Validar que este en el rango

    case 2:
     //Mensaje de despedida
        cout << endl;
        cout << "Gracias por visitar la tienda de armas." << endl;
        cout << "Vuelve pronto !" << endl;

    default:
        cout << endl;
        cout << "La opcion ingresada es invalida ):" << endl;
    }


    return 0;
}
