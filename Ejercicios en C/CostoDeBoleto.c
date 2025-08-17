/*Programa para determinar el costo que tendra el boleto de un viaje sencillo, esto basado en los km por recorrer y en el costo por cada kilometro recorrido.
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C */

#include <stdio.h>

int main()
{
    // Se inicializan las variables y se define el costo por cada km recorrido
    float costoBoleto, costoPorKm = 2.50, kmRecorridos;

    printf("Programa para calcular el precio de un boleto sencillo por viaje!\n");
    printf("Costo por cada km es de $2.50\n ");
    printf("Ingrese la distancia a recorrer en km: ");
    scanf("%f", &kmRecorridos);
    // Operacion para calcular el costo del boleto
    costoBoleto = kmRecorridos * costoPorKm;
    printf("El costo de su boleto sera de: $%2.f mxn", costoBoleto);
}