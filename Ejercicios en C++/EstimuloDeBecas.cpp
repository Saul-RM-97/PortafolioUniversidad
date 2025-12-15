/*Programa para determinar la asignacion de becas mensuales, de los cuales se tomaran los siguientes criterios. Alumnos mayores a 18 años con promedio mayor o igual a 9, la beca sera de $2000.00, con promedio mayor o igual a 7.5 de $1000.00, para menores de 7.5 pero mayores o iguales a 6.0 de $500.00. Ademas se les enviara una carta de invitacion incitandolos a que estudien mas en el proximo ciclo escolar. A los alumnos de 18 años o menores de edad, con promedios mayores a 9, se les dara $3000.00, con promedios menores a 9 pero mayores o iguales a 8 $2000.00, para alumnos con promedios menores a 8 pero mayores o iguales a 6, se les dara $100.00 y a los alumnos menores a 6 se les enviara carta de invitacion.
Programa realizado por: Saul Rivera Martinez
Fecha: 12/12/25
Lenguaje de programacion C++*/
#include <iostream>
#include <string>
using namespace std;

int main()
{ // Variables a utilizar
    float promedio, montoBeca = 0;
    int edad;
    string nombre;
    // Se pide el nombre, edad y promedio del alumno
    cout << "Ingrese el nombre, edad y promedio del alumno: " << endl;
    cout << "Nombre: " << endl;
    cin >> nombre;
    cout << "Edad: " << endl;
    cin >> edad;
    cout << "Promedio: " << endl;
    cin >> promedio;

    if (edad > 18) // Si la edad es mayor a 18 entonces
    {
        if (promedio >= 9.0) // Si el promedio es igual o mayor a 9
        {
            montoBeca = 2000.00; // Monto de la beca
        }
        else if (promedio >= 7.5) // Si no, si el promedio es mayor o igual a 7.5
        {
            montoBeca = 1000.00; // Monto de la beca
        }
        else if (promedio >= 6.0) // Si no, si el promedio es igual o mayor a 6
        {
            montoBeca = 500.00; // Monto de la beca
        }
        cout << "El alumno " << nombre << " con la edad de " << edad << " anios" << " y un promedio de " << promedio << ". Se le felicita por su gran desempeno con una beca de: $" << montoBeca << " pesos, por lo cual se le hace la cordial invitacion de que siga mejorando para el proximo ciclo escolar ¡Felicidades!" << endl;
        return 0; // CARTA DE INVITACION
    }
    else if (edad <= 18) // Si no, si la edad es igual o menor a 18
    {
        if (promedio >= 9) // Si el promedio es mayor o igual a 9
        {
            montoBeca = 3000.00;                                                                         // Monto de beca
            cout << "Felicidades el monto de su beca mensual es de: $" << montoBeca << " pesos" << endl; // Carta de felicitacion
        }
        else if (promedio >= 8) // Si no, si promedio es mayor o igual a 8
        {
            montoBeca = 2000.00;                                                                         // Monto de beca
            cout << "Felicidades el monto de su beca mensual es de: $" << montoBeca << " pesos" << endl; // Carta felicitacion
        }
        else if (promedio >= 6) // Si no, si el promedio es igual o mayor a 6
        {
            montoBeca = 100.00;                                                                          // Monto de Beca
            cout << "Felicidades el monto de su beca mensual es de: $" << montoBeca << " pesos" << endl; // Carta de felicitacion
        }
        else // Si no se cumple ninguna de las otras opciones
        {    /// CARTA DE INVITACION
            cout << "Se le hace la cordial invitacion de que siga mejorando para el proximo ciclo escolar y asi obtener una beca mensual !Suerte!" << endl;
        }
        return 0;
    }
}