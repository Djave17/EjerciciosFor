/* Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream> 

using namespace std; 

void promedio();

int main(int argc, char const *argv[])
{
    promedio(); 
    return 0;
}

void promedio(){
    int suma, nota, promedio; 
    for(int i = 1; i <= 10; i++){
        cout<<"Ingrese una nota: ";
        cin>>nota;
        cout<<"Nota #"<< i<<endl;  
        suma = suma + nota;

    }  
    promedio = suma/10;
    cout<< "El promedio de la seccion es: "<< promedio<< endl; 
}


