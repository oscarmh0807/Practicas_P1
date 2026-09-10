#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Spanish");

    double num1, num2;
    char operador;

    cout << "===== CALCULADORA DE CONSOLA =====" << endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /):";
    cin >> operador;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

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
