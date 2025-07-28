/*Programa para saber el area de un rectangulo
Realizado por: Saul Rivera
Fecha: 27/07/25
Lenguaje de Programación C*/
#include <stdio.h>

int main () {
    int b = 0; //Se inicializan las variables
    int h = 0;
    int a = 0;

    printf("Ingrese la base del rectangulo: \n"); //Se pide ingrear la base
    scanf("%d", &b); //Se lee el valor de la base

    printf("Ingrese la altura del rectangulo: \n"); //Se pide ingresar la altura
    scanf("%d", &h); //Se lee el valor de la altura

    a = b * h; //Operacion para calcular el area del rectangulo
    printf("El area del rectangulo es: %d\n", a); //Se imprime el resultado del area
}