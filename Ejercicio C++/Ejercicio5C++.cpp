/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream> 

using namespace std; 


int nota; 
int suma; 
int aprobados; 
int reprobados; 

void Estudiantes(){
    int promedio;
    for(int i = 1; i <= 8; i++){
        cout<<"Ingrese la nota del estudiante: ";
        cin>> nota; 
        suma = suma + nota; 
        if(nota >= 70){
            cout<<"El estudiante #" << i << " ha aprobado"<<endl;
            aprobados += 1;
            

        }
        if (nota<=69)
        {
            cout<<"El estudiante #" << i << " ha reprobado"<<endl;
            reprobados += 1;
        }
        
        
    }
    promedio = suma / 8;

    cout<<"El numer de estudiantes reprobados es: "<< reprobados <<endl;
    cout<<"El numer de estudiantes aprobados es: "<< aprobados <<endl;
    cout<<"El promedio del grupo es: "<< promedio <<endl;

    
    

}
int main(int argc, char const *argv[])
{
    Estudiantes(); 
    return 0;
}


