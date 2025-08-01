/*Programa para determinar el cambio que recibira una persona al adquirir un producto
Realiazado por: Saúl Rivera
Fecha 01/08/25
Lenguaje de Programación C*/

#include <stdio.h>

int main () 
{
    int CP, CD; //Se inicializa la variable CostoProducto y CantidadDinero
    CP = 399; //Se asigna el costo del producto

    printf("El costo del producto que desea comprar es de $399"); //Se informa el costo del producto
    printf("\nIngrese el monto a pagar: "); //Se pide ingresar el monto del dinero
    scanf("%d", &CD); //Se almacena en la variable CD

         if (CD < CP) //Si la CD es menor que la CP 
         {
            printf("Fondos Insuficientes!"); //Imprimira en pantalla el siguiente msj
         }
         else if (CD > CP) //Pero si CD es mayor a CP 
         {
            int Cambio; //Se inicializa una variable local 
            Cambio = CD - CP; //Se realiza la operacion para darle el cambio al usuario
            printf("Su cambio es: %d", Cambio ); //Se imprime en pantalla el cambio del cliente
         }
         else if (CD = CP) //Pero si CD es igual a CP
           {
            printf("Gracias por su compra!");  //Solo nos arrojara un msj 
         }
         
         
}