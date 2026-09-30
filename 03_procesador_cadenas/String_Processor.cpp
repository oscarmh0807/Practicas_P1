#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string frase;
     int vocales = 0;
    cout << "Escriba su frase: ";
    getline(cin, frase);

    for (size_t i = 0; i < frase.length(); i++) {
    char c = frase[i];
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        {
        vocales++;
        }
    }

    stringstream ss(frase);
    string palabra;
    int palabras = 0;
    while (ss >> palabra) {
        palabras++;
    }

    string fraseInvertida = frase;
    reverse(fraseInvertida.begin(), fraseInvertida.end());

    cout << "\nFrase: " << frase << endl;
    cout << "Numero de palabras: " << palabras << endl;
    cout << "Numero de vocales: " << vocales << endl;
    cout << "Frase invertida: " << fraseInvertida << endl;

    return 0;
}
