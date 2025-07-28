/*Programa para saber el cambio de un tipo de moneda
Realizado por: Saúl Rivera
Fecha: 27/07/2025
Lenguaje de Programación C*/
#include <stdio.h>

int main () {
    float D = 19.20; //Se inicia el valor del dolar
    float Mxn = 0; 
    float x;

    printf("Ingrese la cantidad en pesos que desea cambiar por Dolares: ");
    printf("\nEl tipo de cambio actualmente es de $19.20 \n");
    scanf ("%f", &Mxn);
    printf("$ %.2f Pesos Mexicanos\n", Mxn);
    x = Mxn / D;
    printf("\nLa cantidad que se te dara en Dolares es de: $%.2f Dolares\n", x);

}