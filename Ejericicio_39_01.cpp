
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 39

// Problema planteado:
#include <iostream>

int main(){
    int a,b;
    std::cout<<"Escribe el primer numero: \n";
    std::cin>>a;
    std::cout<<"Escribe el segundo numero: \n";
    std::cin>>b;
    std::cout<<" \n";
    if(a>b){

        for(int i=a;i>=b;i--){
            std::cout<<i<<" \n";
        }
    }
    else{
        for(int i=a;i<=b;i++){
            std::cout<<i<<" \n";
        }
    }
    system("pause");
    return 0;
}
