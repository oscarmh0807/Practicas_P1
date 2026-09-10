#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    double promedio;

public:
    Estudiante() {
        this->nombre = "Sin Nombre";
        this->matricula = "000000";
        this->promedio = 0.0;
    }

    Estudiante(string n, string m, double p) {
        this->nombre = n;
        this->matricula = m;
        this->promedio = p;
    }

    double getPromedio() {
        return promedio;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << "| Matricula: " << matricula << "|  Promedio: " << promedio << endl;
    }
};

class Grupo {
private:
    Estudiante estudiantes[5];
    int cantidadEstudiantes;

public:
    Grupo() {
        cantidadEstudiantes = 0;
    }

    bool agregarEstudiante(Estudiante est) {
        if (cantidadEstudiantes < 5) {
            estudiantes[cantidadEstudiantes] = est;
            cantidadEstudiantes++;
            return true;
        }
        return false;
    }

    double calcularPromedioGeneral() {
        if (cantidadEstudiantes == 0) return 0.0;
        double suma = 0.0;
        for (int i = 0; i < cantidadEstudiantes; i++) {
            suma += estudiantes[i].getPromedio();
        }
        return suma / cantidadEstudiantes;
    }

    void mostrarGrupo() {
        cout << "=== MIEMBROS DEL GRUPO ===" << endl;
        for (int i = 0; i < cantidadEstudiantes; i++) {
            estudiantes[i].mostrarInformacion();
        }
    }
};

int main() {
    Estudiante e1("Oscar Huitron", "A001", 99.0);
    Estudiante e2("Gerardo Avalos", "A002", 88.5);
    Estudiante e3("Alan Morales", "A003", 78.0);
    Estudiante e4("Michelle Juárez", "A004", 2.6);
    Estudiante e5("Nana Osaki", "A005", 98.3);

    Grupo grupoProgramacion;
    grupoProgramacion.agregarEstudiante(e1);
    grupoProgramacion.agregarEstudiante(e2);
    grupoProgramacion.agregarEstudiante(e3);
    grupoProgramacion.agregarEstudiante(e4);
    grupoProgramacion.agregarEstudiante(e5);


    grupoProgramacion.mostrarGrupo();

    cout << "\nPromedio general del grupo: " << grupoProgramacion.calcularPromedioGeneral() << endl;

    return 0;
}