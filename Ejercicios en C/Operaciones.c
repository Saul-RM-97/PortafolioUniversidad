/*Programa para realizar diferentes operaciones suma, resta, multiplicacion, division
Realizado por: Saul Rivera
Fecha 27/07/25
Lenguaje de Programacion C*/

#include <stdio.h>

int main () 
{
    float a, b, resultado; //Se inicializa las variables a ocupar

    printf("Ingrese un numero: "); //Se pide ingresar un numero
    scanf("%f", &a); //Se lee la entrada y se almacena en la variable a

    printf("Ingrese otro numero: "); //Se pide ingresar otro numero
    scanf("%f", &b); //Se lee la entrada y se almacena en la variable b

    //SUMA
    resultado = a + b; //Operacion para la suma de los numeros
    printf("\nLa suma de sus numeros es: %2.f", resultado);

    //RESTA
    resultado = a - b; //Operacion para la resta de los numeros
    printf("\nLa resta de sus numeros es: %2.f", resultado);

    //Multiplicacion
    resultado = a * b; //Operacion para la multiplicacicon de los numeros
    printf("\nLa multiplicacion de sus numeros es: %2.f", resultado);

    //DIVISION
    resultado = a / b; //Operacion para la division de los numeros
    printf("\nLa division de sus numeros es: %2.f", resultado);
}