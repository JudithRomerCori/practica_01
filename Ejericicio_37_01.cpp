
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 37

// Problema planteado:
#include <iostream>

int main(){
    int n,c=1;
    std::cout<<"Escribe un numero: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        c=c*i;
    }
    std::cout<<"El factorial es: "<<c<<"\n";
    system("pause");
    return 0;
}
