/*. Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;
int main()
{

    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    /*Matriz 1, ingresar numero*/
    cout << "Matriz 1 " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Fila:  " << i + 1 << " , columna: "<< c + 1 << ", Ingresa un numero: ";
            cin >> matriz1[i][c];
        }
        cout << endl;
    }
    cout << endl<<endl;

    /*Matriz 2, ingresar numeros*/
    cout<< "Matriz 2 " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Para la fila " << i + 1 << " y la columna " << c + 1 << ", Ingresa un numero: ";
            cin >> matriz2[i][c];
        }
        cout << endl;
    }
    cout << endl;

    /*Mostrar las matrices*/
    cout << "Matriz 1: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz1[i][c];
            cout << "\t";
        }
        cout << endl <<endl;
    }

    cout << "Matriz 2: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz2[i][c];
            cout << "\t";
        }
        cout << endl << endl;
    }
    /*Multiplicacion de las matrices*/
    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            matriz3[i][c] = (matriz1[i][c]) * (matriz2[i][c]);
        }
    }

    cout << endl
         << "Multiplicacion de la matriz: " << endl;
         /*Imprimir matriz 3*/
    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz3[i][c];
            cout << "\t";
        }
        cout << endl <<endl;
    }
}

