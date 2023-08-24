
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 57

// Problema planteado:Encontrar cuadrados perfectos en el rango 1 a n
#include <iostream>

int main(){
    float n,d=0;
    cout<<"Introduzca el rango: \n";
    cin>>n;

    // Itera desde 1 hasta n para encontrar los números cuyo cuadrado sea menor o igual a n.
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
