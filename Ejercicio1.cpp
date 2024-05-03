#include <iostream>

using namespace std; 

#define MAX 3000
/*leer edad de x cantidad de personas, promedio de edades*/

int main()
{
    int edades[MAX];
    int npersonas;
    int suma = 0; 
    int promedio; 
    cout<<"Ingrese la cantidad de personas: "; 
    cin>>npersonas; 
    if (npersonas<=MAX && npersonas > 0)
    {
    
        for (int i = 0; i < npersonas; i++)
        {
            cout<<"Ingrese la edad de la persona #"<<i + 1<<": ";
            cin>>edades[i]; 
            
        }
        for (int i = 0; i < npersonas; i++)
        {
            suma += edades[i]; 
        }
        
        
        promedio = suma / npersonas; 
        cout<<"El promedio de edades es: "<<promedio<<endl;
    }
    else{
        cout<<"La cantidad de personas no puede ser mayor a "<<MAX<< ", ni menor o igual a 0"<<endl;
        main(); 

    }
    return 0;
}
