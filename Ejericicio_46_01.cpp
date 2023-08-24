
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 46

// Problema planteado:
#include <iostream>

int main(){
    float n,c;
    std::cout<<"EMPRESA LIMBO S.A. \n";
    std::cout<<"Introduce la cantidad de vendedores: \n";
    std::cin>>n;
    std::cout<<"Introduce el sueldo base de los vendedores: \n";
    std::cin>>c;

    std::cout<<"Monto obtenido por comisiones de cada vendedor: "<<c*0.3<<"\n";
    std::cout<<"Sueldo base mas comisiones obtenidas por cada vendedor: "<<c*1.3<<"\n";
    /*Se considera que las comisiones de cada venta son del 10%, en total 30%
    Si en realidad el monto total de las tres ventas fueran el 10%, cambiar:
    el 0.3 por 0.1 y el 1.3 por 1.1*/
    system("pause");
    return 0;
}
