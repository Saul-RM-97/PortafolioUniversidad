/*Programa para calcular el sueldo semanal de una trabajador en con base a las horas trabajadas y el pago por hora, considerando que despues de las 40 horas se considera como excedente y se paga al doble
Programa realizado por: Saul Rivera Martinez
Fecha: 11/12/25
Lenguaje de Programacion C++*/

#include <iostream>
using namespace std;

int main()
{
    float suledoSem, pagoHr = 38.50; // Variables a utilizar
    int horTra;

    cout << "Ingresar las horas trabajadas en total: " << endl; // Se pide ingresar las horas que se trabajaron
    cin >> horTra;                                              // Se almacena en la variable horTra

    if (horTra > 40)
    {                                                             // Si las horas trabajadas son mayor a 40
        suledoSem = (40 * pagoHr) + ((horTra - 40) * pagoHr * 2); // Se multiplican las horas por el pago de las primeras 40
    }
    else
    { // Despues se suman las horas excedentes por cada una de ellas valiendo el doble, restando las primeras horas trabajadas
        suledoSem = horTra * pagoHr;
    }
    cout << "El pago por hora trabajada es de: $" << pagoHr << " pesos" << endl;
    cout << "Las horas trabajadas fueron: " << horTra << " hrs" << endl;
    cout << "El pago por las horas trabajadas es de: $" << suledoSem << " pesos" << endl;
}