#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz1[2][2];

    cout << "Matriz" << endl;
    /*Ingresar datos*/
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           
            cout << "Ingresa un numero, fila " << i+1 << ", columna " << j+1 << ":"<< endl;
            cin >> matriz1[i][j];
        }

    }

    /*Mostrar matriz*/
for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[i][j];
        }
        cout << endl;
    }
    cout << endl;
    /*Mostrar matriz transpuesta*/ 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[j][i];
        }
        cout << endl;
    }
return 0;
}