// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 31

// Problema planteado:Leer dos n�meros y verificar si uno es m�ltiplo del otro o no lo es


#include <iostream>

int main()
{
    int a,b;
    // Solicitar al usuario ingresar el primer n�mero
    cout<<"Escribe el primer numero: \n";
    cin>>a;
    // Solicitar al usuario ingresar el segundo n�mero
    cout<<"Escribe el segundo numero: \n";
    cin>>b;
    if(a%b==0 || b%a==0){
       cout<<"Uno de los numeros es multiplo de otro \n";
    }
    else{
        cout<<"Los numeros no son multiplos\n";
    }
    system("pause");
    return 0;
}
