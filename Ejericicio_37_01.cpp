
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 37

// Problema planteado:Obtenga el factorial de un n�mero entero sin emplear el producto
#include <iostream>

int main()
{
    int n,c=1;
    cout<<"Escribe un numero: \n";
    cin>>n;

    // Calcular el factorial utilizando un bucle for
    for(int i=1;i<=n;i++){
        c=c*i;
    }
    // Mostrar el resultado del factorial
    cout<<"El factorial es: "<<c<<"\n";
    system("pause");
    return 0;
}
