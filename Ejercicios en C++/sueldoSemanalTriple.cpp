/*Realice un algoritmo que permita determinar el sueldo semanal de un trabajador con base en las horas trabajadas y el pago por hora,
considerando que a partir de la hora número 41 y hasta la 45, cada hora se le paga el doble, de la hora 46 a la 50, el triple, y que trabajar más de 50 horas no está permitido.
Realizado por: Saul Rivera Martinez
Fecha: 23/12/25
Lenguaje de programación C++*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float horasT, pagoXhora, sueldoSemanal, horasDobles, horasTriples; // Se crean las variables a utilizar
    cout << "*****Programa para calcular el sueldo semanal de un trabajador*****\n"
         << endl;
    cout << "Ingrese las horas trabajadas: " << endl;
    cin >> horasT;     // Se almacenan las horas trabajadas
    pagoXhora = 30.00; // Se asigna un valor al pago por hora
    sueldoSemanal = 0; // Se inicia el sueldo semanal en 0;

    if (horasT <= 40)
    {                                       // Si las horas trabajadas son igual o menor a 40
        sueldoSemanal = pagoXhora * horasT; // El sueldo semanal es igual a pago por hora trabajada multiplicado por las horas trabajadas
    }
    else if (horasT <= 45)
    {                                                                   // Si no, Si esto es igual o menor a 45 horas trabajadas
        horasDobles = horasT - 40;                                      // Se asigna a esta variables restarle las primeras 40 horas
        sueldoSemanal = (40 * pagoXhora + horasDobles * pagoXhora * 2); /* El sueldo semanal es igual a las primeras 40 horas multiplicadas por el pago por hora + * - las horas Dobles *
        pago por hora por 2 (como la variable horas dobles tienen un valor negativo al multiiplicar los signos nos da -) */
    }
    else if (horasT <= 50)
    {                                                // Si horas dobles son menor a 50
        horasDobles = 45 - 40;                       // Se inicializa la variable horasDobles restando 40 horas de las primeras ingresadas
        horasTriples = horasT - 45;                  // Se inicializa la variable horastriples donde se restan las 45 horas ingresadas
        sueldoSemanal = (40 * pagoXhora + (horasDobles * pagoXhora * 2) + (horasTriples * pagoXhora * 3)); 
        /* Se multiplican las primeras 40 horas por el pago por hora, despues se le restan las primeras 40 horas quedando asi las horas restantes las cuales se multiplican por el pago por hora y se 
        multiplican por 2, para pagar esas horas al doble, despues se multiplica las horas triples el cual se le restan las 45 horas, por lo cual solo se va a multiplicar las horas restantes las cuales 
        se multiplicaran por el pago por hora por 3, estas pagandosde al triple.*/
    }
    else {
        cout << "Trabajar mas de 50 horas no esta permitido!!" << endl;
        return 0;
    }
    cout << "Las horas trabajadas fueron de: " << horasT << endl;
    cout << "El pago por hora es de: " << pagoXhora << endl;
    cout << "El sueldo semanal es de: " << sueldoSemanal << endl;

}
