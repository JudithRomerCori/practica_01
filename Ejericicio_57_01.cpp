
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 57

// Problema planteado:
#include <iostream>

int main(){
    float n,d=0;
    std::cout<<"Introduzca el rango: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i*i<=n){
            std::cout<<"Numero "<<i<<" \n";
            std::cout<<"Valor cuadrado "<<i*i<<" \n";
        }
    }
    system("pause");
    return 0;
}
