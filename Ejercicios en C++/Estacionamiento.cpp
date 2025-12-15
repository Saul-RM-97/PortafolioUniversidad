/*Programa para determinar cuanto debe cobrar por el uso del estacionamiento a sus clientes. Las tarifas son: Las 2 primeras hrs $5.00, las sig 3 hrs $4.00, las sig 5 hrs $3.00, desp de 10 hrs el costo por cada una es de $2.00
Realizado por: Saul Rivera Martinez
Fecha: 11/12/25
Lenguaje de programación C++*/
#include <iostream>
using namespace std;
int main()
{
    int hr;
    float pagoHr;

    cout << "Ingrese las horas que estuvo estacionado el cliente: " << endl;
    cin >> hr;

    if (hr <= 2)
    {
        pagoHr = 5.00;
    }
    else if (hr <= 5)
    {
        pagoHr = (2 * 5.00) + ((hr - 2) * 4.00);
    }
    else if (hr <= 10)
    {
        pagoHr = (2 * 5.00) + (3 * 4.00) + ((hr - 5) * 3.00);
    }
    else if (hr >= 11)
    {
        pagoHr = (2 * 5.00) + (3 * 4.00) + (5 * 3.00) + ((hr - 10) * 2.00);
    }
    cout << "El pago que se debera realizar es de: $" << pagoHr << " pesos" << endl;
}