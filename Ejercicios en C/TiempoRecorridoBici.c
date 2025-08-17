/*Progrma para calcular el tiempo que tarda una persona en llegar de una ciudad a otra en bicicleta, considerando que va a una velocidad constante
Realizado por: Saúl Rivera
Fecha: 16/08/25
Programa realizado en C */

#include <stdio.h>

int main()
{
    // Se inicializan las variables
    float velocidad, distancia, tiempoXDistancia;

    printf("Programa para calcular el tiempo que tomara llegar de una ciudad a otra en bicicleta! \n");
    printf("Ingrese la distancia a recorrer en km:(Tomar en cuenta que la velocidad maxima en bicicleta es de 10km/h)\n");
    scanf("%f", &distancia);

    printf("Ingrese la velocidad: \n");
    scanf(" %f", &velocidad);
    // Operacion para calcular el tiempo que tardara
    tiempoXDistancia = distancia / velocidad;
    printf("El tiempo que tardara en recorrer es de: %2.2f h/min\n", tiempoXDistancia);
}