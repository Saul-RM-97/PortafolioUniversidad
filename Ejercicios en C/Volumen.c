/*Programa para calcular el volumen de un cuadrado
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C */

#include <stdio.h>

int main()
{
    int a, b, c, volumen; // Se incializan las variables
    printf("Programa para calcular el volumen de un cuadrado\n");
    printf("Ingresa el valor de a: ");
    scanf("%d", &a);

    printf("Ingresa el valor de b: ");
    scanf(" %d", &b);

    printf("Ingresa el valor de c: ");
    scanf(" %d", &c);

    volumen = a * b * c; // Se realiza la operacion para la obtencion del volumen
    printf("El volumen del cuadrado es: %d", volumen);
}
