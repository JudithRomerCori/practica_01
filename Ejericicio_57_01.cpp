
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 57

// Problema planteado:Encontrar cuadrados perfectos en el rango 1 a n
#include <iostream>

int main(){
    float n,d=0;
    cout<<"Introduzca el rango: \n";
    cin>>n;

    // Itera desde 1 hasta n para encontrar los n�meros cuyo cuadrado sea menor o igual a n.
    for(int i=1;i<=n;i++)
    {
        // Comprueba si el cuadrado de i es menor o igual a n.
        if(i*i<=n)
        {

            cout<<"Numero "<<i<<" \n";
            cout<<"Valor cuadrado "<<i*i<<" \n";
        }
    }
    system("pause");
    return 0;
}
