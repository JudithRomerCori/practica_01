
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 58

// Problema planteado:
#include <iostream>

int main(){
    float n,d=0;
    std::cout<<"Introduzca un numero de filas a generar: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<j+1<<" ";
        }
        for(int j=i;j>=1;j--){
            std::cout<<j<<" ";
        }
        std::cout<<" \n";
    }
    system("pause");
    return 0;
}
