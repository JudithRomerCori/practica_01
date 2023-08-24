
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 50

// Problema planteado:
#include <iostream>
#include <math.h>
int main(){
    int a,b;
    char c;
    float res;
    std::cout<<"Escribe un numero: \n";
    std::cin>>a;
    std::cout<<"Escribe otro numero: \n";
    std::cin>>b;
    std::cout<<"Ingresa una operacion: \n";
    std::cout<<"S = suma \n";
    std::cout<<"R = resta \n";
    std::cout<<"M = multiplicacion \n";
    std::cout<<"D = division \n";
    std::cin>>c;
    switch (c)
    {
    case 'S':
        res=a+b;
        break;
    case 'R':
        res=a-b;
        break;
    case 'M':
        res=a*b;
        break;
    case 'D':
        res=a/float(b);
        break;
    default:
        std::cout<<"opearracion no valida \n";
        break;
    }
    std::cout<<"el resultado es: "<<res<<" \n";
    system("pause");
    return 0;
}
