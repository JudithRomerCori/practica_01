
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 55

// Problema planteado:
#include <iostream>

int main(){
    float n,d=0;
    std::cout<<"Introduzca un numero inicial de la secuencia: \n";
    std::cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
        std::cout<<j<<" ";
        }
        std::cout<<" \n";
    }
    system("pause");
    return 0;
}
