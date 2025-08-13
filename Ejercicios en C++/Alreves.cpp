/*Programa para mostrar en pantalla un numero de 4 digitos al reves
Realizado por: Saúl Rivera
Fecha: 12/08/25
Lenguaje de Programación C++ */

#include <iostream>
using namespace std;

int main()
{
    int inverso = 0, residuo, numero; //Se inicializa las variables y a inverso se le asigna 0

    cout << "Programa para poner al reves un numero ingresado!!" << endl;
    cout << "Ingrese un numero de 4 digitos: " ;
    cin >> numero; //Se almacena el numero ingresado

    residuo = numero; //Se asigna el numero a la variable residuo

        while (residuo > 0) //Mientras el residuos sea mayor a 0 entonces
        {
            inverso = inverso * 10 + residuo % 10; //Se utiliza la operacion para separar por unidades

            residuo = residuo / 10; //Se separa el ultimo numero
        }

        cout << "El numero al reves es: " << inverso << endl;
        cout << "El numero que usted ingreso es: " << numero << endl;
        
}