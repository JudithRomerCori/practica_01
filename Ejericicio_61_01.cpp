// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 61

// Problema planteado:Sean los datos m y n enteros positivos, Elabore un diagrama de flujo para calcular el
//Máximo Común Divisor y el Mínimo Común Múltiplo de m y n. El Algoritmo de Euclides
//establece que, si m>=n, MCD(m,n) = MCD(n, m mod n).

#include <iostream>

int main()
{
    int a,b,c,d,e;
    cout<<"Introduzca el primer numero M: \n";
    cin>>a;
    cout<<"Introduzca el segundo numero N: \n";
    cin>>b;
    d=a;
    e=b;
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    c=b;
     // Calcula el MCD utilizando el algoritmo de Euclides.
    while(c>0){
        c=a%b;
        a=b;
        b=c;
    }

    cout<<"El MCD es: "<<a<<" \n";
    cout<<"El mcm es: "<<(d*e)/a<<" \n";
    system("pause");
    return 0;
}
