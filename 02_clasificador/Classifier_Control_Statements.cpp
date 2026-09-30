#include <iostream>

using namespace std;

int main()
{
    double calificacion;

    cout << "Ingrese una calificacion de 0 a 100: ";
    cin >> calificacion;

    if (calificacion < 0 || calificacion > 100)
    {
        cout << "La calificacion debe estar entre 0 y 100" << endl;
    }
    else if(calificacion >= 95)
    {
        cout << "Su calificacion es: Excelente (E)" << endl;
    }
    else if(calificacion >= 90)
    {
        cout << "Su calificacion es: Muy buena (MB)" << endl;
    }
    else if(calificacion >= 80)
    {
        cout << "Su calificacion es: Buena (B)" << endl;
    }
    else if(calificacion >= 70)
    {
        cout << "Su calificacion es: Suficiente (S)" << endl;
    }
    else if(calificacion >= 60)
    {
        cout << "Su calificacion es: Regular (R)" << endl;
    }
    else if(calificacion < 60 && calificacion > 0)
    {
        cout << "Su calificacion es: Mala (M)" << endl;
    }
    else if (calificacion == 0)
    {
        cout << "No entregó o no acreditó (NA)" << endl;
    }

    return 0;
}
