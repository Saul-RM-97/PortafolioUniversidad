/*Se realiza un programa para determinar el promedio de cuatro calificaciones
Programa realizado por: Saúl Rivera
Fecha: 01/08/2025
Lenguaje de Programación C*/

#include <stdio.h>

int main ()
{
    float C1, C2, C3, C4, Suma, Promedio; //Se inicializan las variables para las calificaciones
    char Alumno [10];
        printf("Programa para calcular el promedio de 4 calificaciones!\n");

        //Se pide ingresar un nombre
        printf("Ingrese el nombre del alumno: ");
        scanf("%s", &Alumno);
        
        //Se pide ingresar las calificaciones de las materias
        printf("\nIngrese la calificacion de las siguientes materias!!\n");
        
        //Se pide que se ingresen las cuatro calificaciones a evaluar
        printf("Matematicas: ");
        scanf("%f", &C1);
        printf("Ingles: ");
        scanf(" %f", &C2);
        printf("Lenguajes de Programación: ");
        scanf(" %f", &C3);
        printf("Diseño de Sistemas: ");
        scanf(" %f", &C4);
        
        //Se realiza las operaciones correspondientes para obtener el promedio
        Suma = C1 + C2 + C3 + C4;
        Promedio = Suma / 4;
        
        //Se imprim en pantalla el promedio final
        printf("La calificacion de %s, es de: %2.f", Alumno, Promedio);        
}