/*Programa para determinar el costo que tendra el boleto de un viaje sencillo, esto basado en los km por recorrer y en el costo por cada kilometro recorrido.
Realizado por: Saúl Rivera
Fecha: 16/08/25
Lenguaje de programación C++ */

#include <iostream>
using namespace std;

int main()
{
    // Se asignan las variables y se le da un valor al costo por cada km a recorrer
    float costoBoleto, costoXKm = 2.50, kmXRecorrer;

    std::cout << "Programa para calcular el costo de un boleto por un viaje sencillo!!\n";
    std::cout << "Costo del boleto por cada km recorrido es de $2.50\n";
    std::cout << "Ingrese la distacia que piensa recorrer en km: ";
    std::cin >> kmXRecorrer;
    // Operacion para obtener el costo total del boleto
    costoBoleto = kmXRecorrer * costoXKm;
    std::cout << "El costo total de su boleto es de: $" << costoBoleto << "mxn" << endl;

    return 0;
}