
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 49

// Problema planteado:
#include <iostream>

int main(){
    float co,n,in,cn;
    std::cout<<"Introduce el Capital inicial: \n";
    std::cin>>co;
    std::cout<<"Introduce la cantidad de anos: \n";
    std::cin>>n;
    std::cout<<"Introduce el interes en porcentaje (%): \n";
    std::cin>>in;
    for(int i=1;i<=n;i++){
        cn=co*((1+in/100));
        std::cout<<"Capital total (Cn) ano "<<i<<": "<<cn<<"\n";
        std::cout<<"Interes ganado "<<cn-co<<" :\n";
        co=cn;
    }

    system("pause");
    return 0;
}
