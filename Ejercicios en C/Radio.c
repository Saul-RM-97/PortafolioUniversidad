/*Programa para saber el radio de un circulo
Realizado por: Saúl Rivera
Fecha: 27/07/25
Lenguaje de Programación C*/

#include <stdio.h>

int main()
{
    float a, r; //Se inicializa a variable a y r
    float Pi = 3.1416; //Se asigna a la variable Pi

    printf ("Introduzca el radio: "); //Se pide que se ingrese el radio 
    scanf("%f", &r); //Se lee la entrada y se asigna a la variable r
    a = Pi * r * r; //Se realiza la operacion para sacar el radio almacenandola en a

    printf("El area de la circunferencia es de: %f", a); //Se muestra el resultado en pantalla
}
