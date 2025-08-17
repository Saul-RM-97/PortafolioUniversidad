/*Programa para calcular lo que debera pagar una persona por el consumo de luz electrica el cual se mide en Kw
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C++ */

#include <iostream>
using namespace std;

int main()
{
    // Se inicializan las variables y se le asigna valor a kw (Cuanto equivale un kw) y a la medicionKw (costo por kw)
    float kwUsuario, medicionKw = 0.75, kw = 174, costoTotal;

    std::cout << "Prgrama para calcular el total a pagar por el consumo de luz electrica!!\n";
    std::cout << "Ingrese el consumo en el trimestre: ";
    std::cin >> kwUsuario;
    // Operacion para calcular el costo que debera pagar el usuario
    costoTotal = kwUsuario / kw * medicionKw;
    std::cout << "El monto total a pagar es de: $" << costoTotal << "mxn" << endl;

    return 0;
}