/*Se les  dará un bono por antigüedad a los empleados de una tienda. Si tienen un año, se les dará $100; si tienen 2 años, $200, y así
sucesivamente hasta los 5 años. Para los que tengan más de 5, el bono será de $1000.
Realizado por: Saul Rivera Martinez
Fecha: 22/12/25
Lenguaje de Programación C++ */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float año, bono;
    int antiguedad;

    cout << "******Programa para calcular Bono Anual******\n" << endl;
    cout << "Ingrese la antiguedad del trabajador: " << endl;
    cin >> antiguedad;

    if (antiguedad == 1)
    {
        cout << "El bono que se le otorgara sera de $100 pesos." << endl;
    }
    else if (antiguedad == 2)
    {
        cout << "El bono que se le otorgara sera de $200 pesos." << endl;
    }
    else if (antiguedad == 3)
    {
        cout << "El bono que se le otorgara sera de $300 pesos." << endl;
    }
    else if (antiguedad == 4)
    {
        cout << "El bono que se le otrogara sera de $400 pesos." << endl;
    }
    else if (antiguedad == 5)
    {
        cout << "El bono que se le otorgara sera de $500 pesos." << endl;
    }
    else if (antiguedad > 5)
    {
        cout << "El bono que se le estara otrogando sera de $1000 pesos." << endl;
    }
    return 0;
}