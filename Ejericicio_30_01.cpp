
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 30

// Problema planteado:Calcular la siguiente sucesi�n
#include <iostream>

int main()
{
    float c,n,res;
    c=1;
    cout<<"Introduce el numero de sucesiones: \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            res=res-((c+1)/c);
        }
        else{
            res=res+((c+1)/c);
        }
        c++;
        cout<<res<<"\n";
    }
    cout<<"El resultado es: \n";
    cout<<res<<"\n";
    system("pause");
    return 0;
}
