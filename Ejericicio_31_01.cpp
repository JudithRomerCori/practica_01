// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 31

// Problema planteado:Leer dos números y verificar si uno es múltiplo del otro o no lo es


#include <iostream>

int main()
{
    int a,b;
    // Solicitar al usuario ingresar el primer número
    cout<<"Escribe el primer numero: \n";
    cin>>a;
    // Solicitar al usuario ingresar el segundo número
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
