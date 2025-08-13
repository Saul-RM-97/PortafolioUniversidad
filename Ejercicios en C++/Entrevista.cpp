/*Programa para saber la edad de una persona entrevistada
Realizado por: Saúl Rivera
Fecha: 12/08/25
Lenguaje de programación C++ */

#include <iostream>
using namespace std;

int main()
{
    int edad, anioNaci, anioActual = 2025; // Se declaran las variables para la edad
    string entrevistado;                   // Se declara la variable para el nombre del entrevitado
    char entrevistar;                      // Se declara la variable para decidir si entrevistar o no

    cout << "Ingrese el nombre del entrevistado: ";
    getline(cin, entrevistado); // Se almacena el dato en la variable
    // cin.ignore(); //Se limpia el buffer

    cout << "Cual es su año de nacimiento: ";
    cin >> anioNaci; // Se almacena el año de nacimiento

    edad = anioActual - anioNaci; // Operación para la obtención de la edad
    cout << "La edad de " << entrevistado << " es: " << edad << " años." << endl;

    cout << "Desea entrevistar a otra persona? Ingrese 'S' o 's' para SI" << endl;
    cin >> entrevistar; // La respuesta se almacena

    while (entrevistar == 'S' || entrevistar == 's') // Mientras la respuesta sea igual a estos caracteres entonces
    {                                                //procede a entrevistar de nuevo
        cout << "Ingrese el nombre del entrevistado: ";
        cin.ignore();
        getline(cin, entrevistado);

        cout << "Cual es su año de nacimiento: ";
        cin >> anioNaci;

        edad = anioActual - anioNaci;
        cout << "La edad de " << entrevistado << "es: " << edad << endl;

        cout << "Desea entrevistar a otra persona? ";
        cin >> entrevistar;
    }
    // Si no
    cout << "Gracias por utilizar nuestro programa!!";
}