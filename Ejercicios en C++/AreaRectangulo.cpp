/*Programa para calcular el area de un rectangulo
Realizado por: Saúl Rivera
Fecha: 08/08/2025
Lenguaje de Programación C++ */

#include <iostream>
using namespace std;

int main()
{
    float base, altura, area; // Se declaran las variables
    cout << "\nPrograma para calcular el Area de un rectangulo!! " << endl;
    cout << "\nIngrese la base del rectangulo: ";   // Se pide el valor de la base
    cin >> base;                                    // Se almacena en la variable
    cout << "\nIngrese la altura del rectangulo: "; // Se pide el valor de la altura
    cin >> altura;                                  // Se almacena en la variable

    area = base * altura / 2; // Operación para la obtención del área
    cout << "El area del rectangulo es: " << area << endl;
}