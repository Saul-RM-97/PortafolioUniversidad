/*Programa para saber si el numero ingresado es par o impar
Realizado por: Saúl Rivera
Fecha: 27/07/25
Lenguaje de Programación C*/

#include <stdio.h>

int main () 
{
    int numero = 0; //Se inicializa la variable numero
    
    for (int i = 0 ; i < 10; i++) //Se utiliza el ciclo for para repetir 10 vece el mismo codigo
    {
        //numero = numero++;
        printf("Ingrese un numero entero: "); //Se pide ingresar un numero
        scanf("%d", &numero); //Se lee el numero ingresado y se almacena en la variable numero

        if (numero % 2 == 0 ) //Se inicia el condicional if, si el residuo de numero dividido por 2 es igual a 0
        {
            numero / 2; //Operacion necesaria para el resultado
            printf ("Es par\n"); //Se muestra el resultado
        }
        else { //Si es diferente de 0 entonces
        printf("Es impar\n"); //Se muestra el resultado
        }
        
    }
    
}