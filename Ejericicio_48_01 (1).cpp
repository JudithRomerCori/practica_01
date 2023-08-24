
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 48

// Problema planteado:Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que
//contiene dicho rango.
#include <iostream>

int main()
{
    int a,b,c=0;
    cout<<"Escribe el numero A: \n";
    cin>>a;
    cout<<"Escribe el numero B: \n";
    cin>>b;

    // Si el número A es menor que B, se intercambian
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
