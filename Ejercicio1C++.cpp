/* Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

void pedirnum(int& num){ 
    cout<< "Digite el numero hasta el que desea contar: \n"; 
    cin>> num; 
}

void ciclofor(int num){  
    cout<<"El numero que digito es: "<< num << endl;
    int suma = 0 ;
    for (int i = 1; i <= num; i++){
        suma+=i; 
    }
    cout<<"La suma de todos los numeros: "<< suma<< endl; 


}

int main(int argc, char const *argv[])
{
    cout<<"Bienvenido \n"; 
    int num; 
    pedirnum(num);
    ciclofor(num); 
    return 0;
}