/*Programa para realizar diferentes operaciones basicas
Realizado por: Saúl Rivera
Fecha: 02/08/25
Lenguaje de programación C++ */

#include <iostream>
using namespace std;

int main () {

    cout <<"Bienvenido al programa para calcular operaciones basicas! \n" << endl; 

    float primerNumero, segundoNumero, resultado; //Se inicializan las variables a utilizar

    cout << "Ingrese el valor del primer numero: " ; //Se pide el primer numero y se almacena en la variable primerNumero
    cin >> primerNumero;

    cout << "Ingrese el valor del segundo numero: "; //Se pide el segundo numero y se almacena en la variable segundoNumero
    cin >> segundoNumero;

    //Suma
    resultado = primerNumero + segundoNumero; //Operacion para calcular la suma
    cout << "\nLa suma de sus numeros es: " << resultado << endl;

    //Resta
    resultado = primerNumero - segundoNumero; //Operacion para calcular la resta
    cout << "La resta de sus numeros es: " << resultado << endl;

    //Multiplicación
    resultado = primerNumero * segundoNumero; //Operacion para calcular la multiplicacion
    cout << "La multiplicacion de sus numeros es: " << resultado << endl;

    //División
    resultado = primerNumero / segundoNumero; //Operacion para calcular la division
    cout << "La division de sus numeros es: " << resultado << endl;

    cout << "\nGracias por utiliar el programa... \n" << endl;
}