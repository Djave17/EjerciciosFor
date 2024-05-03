/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
#include <iostream> 

using namespace std; 

void sumacuadrados();
 
int main(int argc, char const *argv[])
{
    sumacuadrados(); 
    return 0;
}

void sumacuadrados(){
    int suma = 0; 
    for (int i = 1; i <= 100; i++)
    {
        suma = suma + (i*i);
    }
    cout<<"La suma de los cuadrados del 1 al 100 es: "<< suma<< endl;
}


