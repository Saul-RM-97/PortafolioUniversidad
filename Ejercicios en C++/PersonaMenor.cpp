/*Programa para determinar el menor de tres personas la cual tenemos el nombre y la edad
Programa realizado por: Saul Rivera Martinez
Fecha: 11/12/25
Lenguaje de programación C++ */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nom1, nom2, nom3, nomMenor;  // Variables para almacenar los nombres
    int edad1, edad2, edad3, edadMenor; // Variables para almacenar la edad

    cout << "Ingrese el nombre y la edad de la primera persona: " << endl;
    cin >> nom1;
    cin >> edad1;
    cout << "Ingrese el nombre y la edad de la segunda persona: " << endl;
    cin >> nom2;
    cin >> edad2;
    cout << "Ingrese el nombre y la edad de la tercera persona: " << endl;
    cin >> nom3;
    cin >> edad3;

    if (edad1 < edad2)
    { // Condicionales si la edad de la primera persona es menor Hacer
        nomMenor = nom1;
        edadMenor = edad1;
    }
    else if (edad2 < edad3)
    { // Si no, si la edad de la segunda persona es menor entonces Hacer
        nomMenor = nom2;
        edadMenor = edad2;
    }
    else
    { // Si no la edad de la tercera persona es menor
        nomMenor = nom3;
        edadMenor = edad3;
    }

    cout << "El nombre de la persona menor es: " << nomMenor << " y tiene " << edadMenor << " anios" << endl;
}