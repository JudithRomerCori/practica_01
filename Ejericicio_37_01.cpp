
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 37

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
