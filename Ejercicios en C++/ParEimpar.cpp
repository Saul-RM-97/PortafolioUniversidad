/*Programa para calcular si un numero es par o impar
Realizado por: Saúl Rivera
Fecha: 08/08/2025
Lenguaje de Programación C++ */

#include <iostream>
using namespace std;

int main() {
    int numero; //Se declara variable

    for (int i = 0; i < 10; i++) //Ciclo for para iterar 10 veces el código
    {
        cout << "\nIngrese un numero entero: "; //Se pide que se ingrese el número
        cin >> numero; //Se almacena en numero
            if (numero % 2 == 0) //Operación para obetener el residuo de la división y determinar si es par o impar
            {
                cout << "\nEl numuero ingresado es par!\n";
            }
            else {
                cout << "\nEl numero ingresado es impar!\n";
            }
    }
}