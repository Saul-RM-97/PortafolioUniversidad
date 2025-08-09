/*Programa para calcular el area de una circulo
Realizado por: Saúl Rivera
Fecha: 08/08/2025
Lenguaje de Programación C++ */

#include <iostream>
using namespace std;
const int Pi = 3.1416; // Se define el valor de PI

int main()
{
    float area, radio; // Se declara las variables
    cout << "\nPrograma para calcular el area de un circulo! " << endl;
    cout << "\nIngrese el radio: ";
    cin >> radio; // Se asgina a la variable

    area = Pi * radio * radio; // Operación para el calculo del área
    cout << "El area de la circunferencia es: " << area << endl;
}