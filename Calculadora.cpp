#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    double num1, num2;
    char operador;

    cout << "===== CALCULADORA DE CONSOLA =====" << endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el operador (+, -, *, /):";
    cin >> operador;

    switch(operador)
    {
        case '+':
        cout << "Resultado: " << num1+ num2 << endl;
        break;
        case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;
        case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
        case '/':
        if(num2 == 0)
        {
            cout << "No se puede dividir entre 0.";
        }
        else
        {
          cout << "Resultado: " << num1 / num2 << endl;  
        }
        break;
        default:
            cout << "Escriba un operador válido (+, -, *, /)." << endl;
            break;
    }
    return 0;
}
