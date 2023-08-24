
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 39

// Problema planteado:Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que
//si el primer n�mero es mayor al segundo, genere una serie descendente, caso
//contrario muestre una serie ascendente, el factor de incremento o decremento es la
//unidad.

#include <iostream>

int main()
{
    int a,b;
    cout<<"Escribe el primer numero: \n";
    cin>>a;
    cout<<"Escribe el segundo numero: \n";
    cin>>b;
    cout<<" \n";
    if(a>b)
    {

    //Imprimir los n�meros en orden descendente si a > b
        for(int i=a;i>=b;i--)
        {
            cout<<i<<" \n";
        }
    }
    else
    {
        for(int i=a;i<=b;i++)
        {
            cout<<i<<" \n";
        }
    }
      // Pausar el programa (solo v�lido en sistemas Windows)
    system("pause");
    return 0;
}
