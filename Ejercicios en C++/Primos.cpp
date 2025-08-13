/*Programa para calcular si un numero es primo o no
Realizado por: Saúl Rivera
Fecha: 12/08/2025
Lenguaje de programación C++ */

#include <iostream>
using namespace std;

int main()
{
    int numero, contador; // Variables donde se almacena el numero ingresado y el contador
    float residuo;        // Variable donde se almacena el residuo

    cout << "Programa para saber si un numero es primo!!" << endl;
    cout << "Ingrese un numero: ";
    cin >> numero; // Se almacena el numero ingresado

    while (contador <= numero) // Mientras el contador se igual o menor al numero ingresado entonces
    {
        if (numero % contador == 0) // Si el residuo del contador es igual a 0
        {
            residuo = residuo++; // La variable residuos se le va sumando mientras alla un residuo
        }
        contador = contador++; // El contador empieza a iterar
    } // Fin del ciclo while
    if (residuo == 2) // Si el residuos es igual a 2
    {
        cout << "El numero que ingresate es un numero primo!! " << endl;
    }
    else
    { // Si no
        cout << "El numero que ingresaste No es primo!! " << endl;
    }

    cout << "Gracias por utilizar nuestro programa!! " ;
}