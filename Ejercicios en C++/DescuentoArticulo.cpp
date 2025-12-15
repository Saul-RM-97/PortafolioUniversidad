/*Programa para determinar el costo y el descuento que tendra un articulo. Considerando que si su precio es mayor o igual a %200 se aplique un descuento del 15%, y si su precio es mayor a $100 pero menor a $200, el descuento es de 12% y si es menor a $100, solo el 10 %
Realizado por: Saul Rivera Martinez
Fecha: 12/12/25
Lenguaje de programacion C++*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float costo, descArticulo, precioFinal; // Variables para almacenar los precios del articulo
    string articulo;

    cout << "Ingrese el nombre del articulo: " << endl;
    cin >> articulo;
    cout << "Ingrese el valor del articulo: " << endl;
    cin >> costo;

    if (costo >= 200.00)
    {                               // Si el costo del articulo es igual o mayor a 200, entonces
        precioFinal = costo * 0.85; // Se aplicac el descuento por el 15%
    }
    else if (costo >= 100.00)
    {                               // Si no, si el costo es mayot o igual a 100, entonces
        precioFinal = costo * 0.88; // Se aplica el descuento por el 12%
    }
    else
    { // Si no solo se aplica el 10%
        precioFinal = costo * 0.90;
    }

    cout << "Su articulo " << articulo << " atiene un valor de $" << costo << " pesos" << endl;
    cout << "El precio final de " << articulo << " con descuento es de: $" << precioFinal << " pesos" << endl;
}