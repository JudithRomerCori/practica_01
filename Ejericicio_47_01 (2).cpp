
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 47

// Problema planteado:
#include <iostream>

int main(){
    float n,c,a[100];
    std::cout<<"Introduce la cantidad de vendedoras: \n";
    std::cin>>n;
    std::cout<<"Introduce el sueldo base de las vendedoras: \n";
    std::cin>>c;
    for(int i=0;i<=n-1;i++){
        std::cout<<"Cuanto vendio la vendedora "<<i+1<<" ?:\n";
        std::cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        std::cout<<"Vendedora "<<i+1<<" :\n";
        std::cout<<"Pago total: "<<c+a[i]*0.1<<"\n";
            std::cout<<"Pago recibido como extra: "<<a[i]*0.1<<"\n";
    }
    system("pause");
    return 0;
}
