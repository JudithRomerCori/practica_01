
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 48

// Problema planteado:
#include <iostream>

int main(){
    int a,b,c=0;
    std::cout<<"Escribe el numero A: \n";
    std::cin>>a;
    std::cout<<"Escribe el numero B: \n";
    std::cin>>b;
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
    std::cout<<"Existen "<<c<<" pares entre A y B \n";
    system("pause");
    return 0;
}
