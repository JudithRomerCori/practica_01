
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 44

// Problema planteado:
#include <iostream>

int main(){
    int n;
    float p,c1=0;
    std::cout<<"COMERCIAL ESTRELLA DEL SUR \n";
    std::cout<<"Introduce la cantidad de productos vendidos en el dia: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cout<<"Monto venta "<<i<<": \n";
        std::cin>>p;
        if(p>2500){
            p=p*0.95;
            c1=c1+p;
            std::cout<<"Descuento del 5% ! => "<<p<<": \n";
        }
        else{
            c1=c1+p;
        }
    }
    std::cout<<"La suma total de las ventas realizadas es: "<<c1<<"\n";
    std::cout<<"Monto a pagar por IVA a impuestos nacionales: "<<c1*0.13<<"\n";
    system("pause");
    return 0;
}
