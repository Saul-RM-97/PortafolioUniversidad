/*Una compañía de seguros para autos ofrece dos tipos de póliza: cobertura amplia (A) y daños a terceros (B). Para el plan A, la cuota base es de $1,200, y para el B, de $950. A ambos planes se les carga 10% del costo si la persona que conduce tiene por hábito beber alco
hol, 5% si utiliza lentes, 5% si padece alguna enfermedad –como deficiencia cardiaca o diabetes–, y si tiene más de 40 años, se le carga 20%, de lo contrario sólo 10%. Todos estos cargos se realizan sobre el costo base. Realice diagrama de flujo y diagrama N/S que represente el algoritmo para determinar cuánto le cuesta a una persona contratar una póliza.
Realizado por: Saul Rivera Martinez
Fecha: 14/12/25
Lenguaje de Programacion C++*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alcohol, lentes, enfermedad, nombre, poliza;
    int edad, coberturaA = 1200, coberturaB = 950, costoTotalA, costoTotalB;
    float cargoTotal = 0;

    cout << "Cotizacion de seguros de Polizas de autos: A (Cobertura amplia), B (Cobertura daños a terceros)" << endl;
    cout << "Ingrese el nombre del cliente: " << endl;
    cin >> nombre;
    cout << "Ingrese la edad del cliente: " << endl;
    cin >> edad;

    cout << "¿La persona tiene por hábito beber alcohol? (s/n): ";
    cin >> alcohol;
    if (alcohol == "s" || alcohol == "S")
        cargoTotal += 0.10; // Si la respuesta es Si al cargo total se le suma un 10%

    cout << "¿La persona utiliza lentes? (s/n): ";
    cin >> lentes;
    if (lentes == "s" || lentes == "S")
        cargoTotal += 0.05; // Si la respuesta es Si se le suma un 5%

    cout << "¿La persona padece alguna enfermedad? (s/n): ";
    cin >> enfermedad;
    if (enfermedad == "s" || enfermedad == "S")
        cargoTotal += 0.05; // Si la respuesta es Si se le suma un 5%

    if (edad > 40)
        cargoTotal += 0.20; // Si le la persona es mayor de 40 años se le hace un cargo del 20%
    else
        cargoTotal += 0.10; // De lo contrario solo se le hace un cargo del 10%

    costoTotalA = coberturaA * (1 + cargoTotal);
    costoTotalB = coberturaB * (1 + cargoTotal);

    cout << "El costo de la poliza de tipo A para el cliente " << nombre << " de " << edad << " anios es de: $" << costoTotalA << endl;
    cout << "El costo de la poliza de tipo B para el cliente " << nombre << " de " << edad << " anios es de: $" << costoTotalB << endl;
}