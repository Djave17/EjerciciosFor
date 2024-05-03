/*. Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/
#include <iostream> 

using namespace std; 

void sumapares(); 

int main(int argc, char const *argv[])
{
    sumapares(); 
    return 0;
}

void sumapares(){ 
    int suma1 = 0; 
    for(int i= 100; i <= 200; i++){
        if(i % 2 == 0){
            suma1 = suma1 + i;
            cout << "La suma de los numeros pares es: " << suma1 << endl;
            
        }
    }
}



