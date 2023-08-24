
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 54

// Problema planteado:
#include <iostream>

int main(){
    float h,b,x,d=0;
    std::cout<<"Introduzca un numero: \n";
    std::cin>>x;
    b=x;
    for(int i=0;i<=200;i++){
        h=0.5*((x/b)+b);
        b=h;
    }
    std::cout<<"El resultado es: "<<b<<" \n";
    system("pause");
    return 0;
}
