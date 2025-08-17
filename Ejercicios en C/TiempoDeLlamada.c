/*Programa para calcular el costo que dura una llamada telefonica con base a la duración y el costo por minuto
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C */

#include <stdio.h>

int main()
{
    float costoTotal, costoMinuto = 0.75, tiempoLlamada; // Se inicializan las variables y se le asigna un valor
                                                         // a la variable costo x minuto
    printf("Programa para calcular el costo de su llamada. El CostoxMinuto es de 0.75!");
    printf("Ingrese el tiempo que tardo en la llamada (mm) ");
    scanf("%f", &tiempoLlamada);

    costoTotal = costoMinuto * tiempoLlamada; // Operacion para calcular el costo total de la llamada
    printf("El costo total de su llamada es de: %.2f mxn", costoTotal);
}