
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 51

// Problema planteado:
#include <iostream>

int main(){
    int a,b,c=0;
    std::cout<<"El dividendo: \n";
    std::cin>>a;
    std::cout<<"El divisor: \n";
    std::cin>>b;
    while (a>=b){
        a=a-b;
        c++;
    }
    std::cout<<"El cociente es: "<<c<<" \n";
    std::cout<<"El resto es: "<<a<<" \n";
    system("pause");
    return 0;
}
