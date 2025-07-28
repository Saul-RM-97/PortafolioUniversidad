/*Programa que determina si una persona es menor o mayor de edad
Realizado por: Saúl Rivera
Fecha 27/07/25
Lenguaje de programación C++*/

#include <iostream>
using namespace std;

int main() {
    int edad; //Se inicializa la variable edad
    cout << "Ingrese su edad: "; //Se pide al usuario ingresar su edad
    cin >> edad; //Se lee la entrada del usuario y se almacena en edad

    if (edad < 0) { //Condiocional, si la edad es 0 
        cout << "Edad no válida." << endl; //Edad no valida
    } else if (edad < 18) { //Si la edad es menor a 18
        cout << "Eres menor de edad." << endl; //Se muestra en pantalla el mensaje
    } else { //Si no
        cout << "Eres mayor de edad." << endl; //Se muestra en pantalla el siguiente mensaje
    }

    return 0;
}