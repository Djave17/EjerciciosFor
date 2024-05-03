#include <iostream> 

using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    int producto = 0;
    int vec1[size]; 
    int vec2[size]; 
    cout << "Bienvenido al programa de suma de vectores" << endl;
    cout << "Ingrese el tamaño para el arreglo:  ";
    cin >> size;

    for(int i= 0; i < size; i++){
        cout<<"En la posicion ["<< i << "] ingrese un numero: "; 
        cin>> vec1[i];
        
    }
    cout <<endl;
    cout << "Arreglo #2"<<endl<<endl;
    for(int i= 0; i < size; i++){
        cout<<"En la posicion ["<< i  << "] ingrese un numero: "; 
        cin>> vec2[i];
    }
    for (int i = 0; i < size; i++)
    {
        producto += vec1[i]*vec2[i];
    }
    cout << "el producto de los dos vectores es: "<<producto;


    return 0;
}