#include <iostream>
using namespace std;

int main() {
    int size;
    int vec1[100];
    int vec2[100];
    int producto = 0;

    cout << "Bienvenido al programa de producto de vectores" << endl;
    cout << "Ingrese el tamaño para el arreglo (hasta 100):  ";
    cin >> size;

    if (size > 100) {
        cout << "El tamaño del arreglo no puede ser mayor a 100!" << endl;
        return 1;
    }

    for (int i = 0; i < size; i++) {
        cout << "En la posicion [" << i << "] ingrese un numero: ";
        cin >> vec1[i];
    }

    cout << endl;
    cout << "Arreglo #2" << endl << endl;

    for (int i = 0; i < size; i++) {
        cout << "En la posicion [" << i << "] ingrese un numero: ";
        cin >> vec2[i];
    }

    for (int i = 0; i < size; i++) {
        producto += vec1[i] * vec2[i];
    }

    cout << "el producto de los dos vectores es: " << producto << endl;

    return 0;
}
