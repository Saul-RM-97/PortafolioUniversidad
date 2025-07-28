/*Programa para saber la edad de una persona entrevistada preguntandole solo su año de nacimiento
Realizado por: Saúl Rivera
Fecha: 27/07/25
Lenguaje de Programación C*/

#include <stdio.h>// Libreria que permite la entrada y salida de valores ingresados

int main () {
    int AnodeN = 0; //Se inicializa las variables a ocupar como año de nacimiento, año actual, edad actual
    int AnoActual = 2025;
    int edad;

    printf("Ingrese su nombre: "); //Se imprime en pantalla el mensaje
    char x[10]; //Se inicializa la variable x con 10 caracteres
    scanf ("%s", &x); //Se lee la entrada del usuario y se almacena en la variable x

    printf("Cual es su ano de nacimiento: "); //Se muestra en pantalla el mensaje
    scanf ("%d", &AnodeN); //Se lee la entrada del usuario y se almacena en la variable AnodeN
    edad = AnoActual - AnodeN; //Se hace una operación para calcular el año actual del entrevistado

    printf("La edad de %s, que se entrevisto es de: %d", x, edad); //Se muestra en pantalla el nombre y la edad del entrevistado

    printf("\nDesea entrevistar a otra persona: Digite S/Si o N/no: "); ///Se pregunta si desea realizar otra entrevista
    char respuesta; //Se crea la variable respuesta con char
    scanf (" %c", &respuesta); //Se lee la entrada y se almacena en la variable

    while (respuesta == 'S' || respuesta == 's') //Se inicializa el ciclo while mientras que la respuesta sea S o s el programa continua si no se cierra el programa
    {
        printf("Ingrese su nombre: "); // Se pide ingresar el nombre
        scanf("%s", x); // Se lee la entrada
        printf("Ingrese su ano de nacimiento: "); //Se pide su fecha de nacimiento
        scanf("%d", &AnodeN); //Se lee la entrada
        edad = AnoActual - AnodeN; //Operacion para calcular la edad
        printf("La edad de %s, que se entrevisto es de: %d", x, edad); //Se muestra en pantalla el nombre y la edad del otro entrevistado

        printf("\nDesea entrevistar a otra persona: Digite S/Si o N/no: "); //Se pregunta nuevamente si quiere seguir entrevistando
        scanf (" %c", &respuesta); //Se lee la entrada
    }
    return 0;

}