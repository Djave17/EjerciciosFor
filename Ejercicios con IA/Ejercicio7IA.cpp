#include <iostream>
using namespace std;

int main() {
    int size;
    int vec1[100];
    int vec2[100];
    int vec3[100];

    cout << "Bienvenido al programa de suma de vectores" << endl;
    cout << "Ingrese el tamaño para el arreglo (hasta 100):  ";
    cin >> size;

    if (size > 100) {
        cout << "El tamaño del arreglo no puede ser mayor a 100!" << endl;
        return 1;
    }

    for (int i = 0; i < size; i++) {
        cout << "En la posicion [" << i + 1 << "] ingrese un numero: ";
        cin >> vec1[i];
    }

    cout << endl;
    cout << "Arreglo #2" << endl << endl;

    for (int i = 0; i < size; i++) {
        cout << "En la posicion [" << i + 1 << "] ingrese un numero: ";
        cin >> vec2[i];
    }

    for (int i = 0; i < size; i++) {
        vec3[i] = vec1[i] + vec2[i];
        cout << "Vector: Posicion [ " << i + 1 << " ] = " << vec3[i] << endl;
    }

    return 0;
}