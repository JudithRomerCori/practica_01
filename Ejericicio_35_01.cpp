
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 35

// Problema planteado:
#include <iostream>

int main(){
    int n;
    float a[100],b[100],c[100],d,e,f;
    d=0;e=0;f=0;
    std::cout<<"Ingrese el numero de clientes: \n";
    std::cin>>n;
    for(int i=0;i<=n-1;i++){
        std::cout<<"Compras del cliente "<<i+1<<" :\n";
        std::cin>>a[i];
        if(a[i]>=500){
            b[i]=a[i]*0.92;
            c[i]=a[i]*0.08;
        }
        else if(a[i]>=100){
            b[i]=a[i]*0.95;
            c[i]=a[i]*0.05;
        }
        else {
            b[i]=a[i];
            c[i]=0;
        }
        d=d+a[i];
        e=e+b[i];
        f=f+c[i];
    }
    std::cout<<"El total de compras efectuadas es: "<<d<<" \n";
    std::cout<<"El total de ventas con descuento es: "<<e<<" \n";
    std::cout<<"El total de los descuentoos es: "<<f<<" \n";
    std::cout.precision(2);
    system("pause");
    return 0;
}
