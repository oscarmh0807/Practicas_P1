#include <iostream>

using namespace std;

int main()
{
    double calificacion;

    cout << "Ingrese una calificación de 0 a 100: ";
    cin >> calificacion;

    if (calificacion < 0 || calificacion > 100)
    {
        cout << "La calificación debe estar entre 0 y 100" << endl;
    }
    else if(calificacion >= 95)
    {
        cout << "Su calificación es: Excelente (E)" << endl;
    }
    else if(calificacion >= 90)
    {
        cout << "Su calificación es: Muy buena (MB)" << endl;
    }
    else if(calificacion >= 80)
    {
        cout << "Su calificación es: Buena (B)" << endl;
    }
    else if(calificacion >= 70)
    {
        cout << "Su calificación es: Suficiente (S)" << endl;
    }
    else if(calificacion >= 60)
    {
        cout << "Su calificación es: Regular (R)" << endl;
    }
    else if(calificacion < 60)
    {
        cout << "Su calificación es: Mala (M)" << endl;
    }
    else
    {
        cout << "No entregó o no acreditó (NA)" << endl;
    }

    return 0;
}
