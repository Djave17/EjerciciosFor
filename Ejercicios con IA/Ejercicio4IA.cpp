#include <iostream>
using namespace std;

int main() {
    int notas[10];
    int suma = 0;
    double promedio;

    cout << "Ingrese las notas de los 10 estudiantes:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Estudiante #" << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    promedio = (double)suma / 10;

    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}