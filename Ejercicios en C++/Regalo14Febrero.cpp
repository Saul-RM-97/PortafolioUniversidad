/* Programa para determiar que regalo darle a un ser querido el 14 de febrero
Realizado por: Saul Rivera Martinez
Fecha: 11/12/25
Lenguaje de Programacion C++ */
#include <iostream>
using namespace std;

int main()
{
    float monto;

    cout << "Programa para decidir que regalo dar el 14 de febrero!" << endl;
    cout << "Ingrese el monto de dinero que tiene para decidir cual sera el regalo: " << endl;
    cin >> monto;

    if (monto >= 251.00)
    {
        cout << "El regalo que se comprara sera un !Anillo!" << endl;
    }
    else if (monto >= 101.00)
    {
        cout << "El regalo que se comprara seran unas hermosas !Flores!" << endl;
    }
    else if (monto >= 11.00)
    {
        cout << "El regalo que se comprara seran unos ricos !Chocolates!" << endl;
    }
    else
    {
        cout << "El regalo que se comprara sera una linda !Tarjeta!" << endl;
    }
    return 0;
}