#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    double promedio;

public:
    Estudiante(string n, string m, double p) {
        this->nombre = n;
        this->matricula = m;
        this->promedio = p;
    }

    void mostrarInformacion() const {
        cout << "Estudiante: " << nombre << " | Matricula: " << matricula << " | Promedio: " << promedio << endl;
    }

    bool riesgoAcademico() const {
        return promedio < 60.0;
    }

    void estadoAcademico() const {
        cout << "= Estado Academico =" <<endl;
        
        if (riesgoAcademico()) {
            cout << "Estado: EN RIESGO ACADEMICO" << endl;
            cout << "Promedio: " << promedio << " Minimo requerido: 60.0" << endl;
        } else {
            cout << "Estado: EN BUEN ESTADO ACADEMICO" << endl;
            cout << "Promedio: " << promedio << endl;
        }
    }
};

int main() {
    Estudiante est1("Oscar Huitron", "5190348", 85.5);
    Estudiante est2("Jin Yerel", "6767100925", 67.7);
    Estudiante est3("Sofia Watts", "89328902", 25.2);

    cout << "===== ESTUDIANTES =====" << endl;
    
    est1.mostrarInformacion();
    est1.estadoAcademico();
    est2.mostrarInformacion();
    est2.estadoAcademico();
    est3.mostrarInformacion();
    est3.estadoAcademico();

    return 0;
}