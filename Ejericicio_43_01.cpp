
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 43

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
