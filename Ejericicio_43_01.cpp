
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 43

// Problema planteado:
#include <iostream>

int main(){
    float a=0,n=1;
    int b=0;
    while (n>0){
        std::cout<<"Escribe un numero: \n";
            std::cin>>n;
        if (n>0)
        {
            b++;
            a=a+n;
        }
    }
    std::cout<<"El promedio es: "<<a/b<<" \n";
    system("pause");
    return 0;
}
