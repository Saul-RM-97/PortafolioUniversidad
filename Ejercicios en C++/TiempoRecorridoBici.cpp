/*Progrma para calcular el tiempo que tarda una persona en llegar de una ciudad a otra en bicicleta, considerando que va a una velocidad constante
Realizado por: Saúl Rivera
Fecha: 16/08/25
Programa realizado en C++ */

#include <iostream>
using namespace std;

int main()
{
    // Se inicializan las variables a utilizar
    float velocidad, distancia, tiempo;

    std::cout << "Programa para calcular el tiempo que tardara un persona en llegar de un lugar a otro en bicicleta!\n";
    std::cout << "Considere que la velocidad maxima en bicicleta es de 15 km/h!\n";
    std::cout << "Ingrese la distancia a recorrer: ";
    std::cin >> distancia;
    std::cout << "Ingrese la velocidad constante a la piensa ir: ";
    std::cin >> velocidad;

    // Se agrega una condicional en caso de que el usuario ingrese un valor igual a 0
    if (velocidad <= 0)
    {
        std::cout << "La velocidad no puede ser menor a 0" << std::endl;
        return 1;
    }

    // Operacion para calcular el tiempo que tardara en llegar
    tiempo = distancia / velocidad;
    std::cout << "El tiempo que tardara en llegar de una ciudad a otra es de: " << tiempo << " horas/minutos" << std::endl;
}