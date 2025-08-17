/*Programa para calcular el volumen de un cuadrado
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C++ */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, volumen; //Se inicializan las variables

    std::cout << "Programa para calcular el volumen de un cuadrado!\n";
    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;
    std::cout << "Ingrese el valor de c: ";
    std::cin >> c;

    volumen = a * b * c; //Operacion para calcular el volumen
    std::cout << "El volumen de su cuadrado es: " << volumen << endl;

    return 0;
}