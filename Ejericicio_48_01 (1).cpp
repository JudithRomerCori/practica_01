
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 48

// Problema planteado:Dado un rango (A y B) de n�meros enteros, obtener la cantidad de n�meros pares que
//contiene dicho rango.
#include <iostream>

int main()
{
    int a,b,c=0;
    cout<<"Escribe el numero A: \n";
    cin>>a;
    cout<<"Escribe el numero B: \n";
    cin>>b;

    // Si el n�mero A es menor que B, se intercambian
    if (a<b)
        {
            c=b;
            b=a;
            a=c;
        }
    c=0;
    while (a>=b){
        if (b%2==0)
        {
            c++;
        }
        b++;
    }
    cout<<"Existen "<<c<<" pares entre A y B \n";
    system("pause");
    return 0;
}
