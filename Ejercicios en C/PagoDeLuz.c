/*Programa para calcular lo que debera pagar una persona por el consumo de luz electrica el cual se mide en Kw
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C */

#include <stdio.h>

int main()
{
    float kw = 174, pagoXConsumo, kwUsuario, kwMedicion = 0.74;
    // Se inicializa las variables y se asignan los valores de medicion de los kw
    printf("Ingrese el consume que tuvo de energia electrica: ");
    scanf("%f", &kwUsuario);

    pagoXConsumo = kwUsuario / kw * kwMedicion; // Operacion para calcular el pago
    printf("El pago que debera realizar es de: %2.f mxn", pagoXConsumo);
}