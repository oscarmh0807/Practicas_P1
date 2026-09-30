#include <iostream>

using namespace std;

int main()
{
    double num1, num2, resultado;
    char operador;

    cout << "===== CALCULADORA DE CONSOLA =====" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /):";
    cin >> operador;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(operador)
    {
        case '+':
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
        break;
        case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
        break;
        case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
        break;
        case '/':
        if(num2 == 0)
        {
            cout << "No se puede dividir entre 0.";
        }
        else
        {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;  
        }
        break;
        default:
            cout << "Escriba un operador valido (+, -, *, /)." << endl;
            break;
    }
    return 0;
}
