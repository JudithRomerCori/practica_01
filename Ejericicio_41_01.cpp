
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 41

// Problema planteado:
#include <iostream>

int main(){
    int n,h,a[100];
    float bruh, net;
    std::cout<<"Introduce la cantidad de obreros: \n";
    std::cin>>n;
    std::cout<<"Introduce cuanto ganaran los obreros por hora: \n";
    std::cin>>h;
    for(int i=0;i<=n-1;i++){
        std::cout<<"Cuantas horas trabajo el obrero "<<i+1<<" ?:\n";
        std::cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        std::cout<<"Obrero "<<i+1<<" :\n";
        if(a[i]<40){
            std::cout<<"Pago total: "<<a[i]*h<<"\n";
            std::cout<<"Pago neto: "<<a[i]*h*0.95<<"\n";
            bruh=bruh+a[i]*h;
            net=net+a[i]*h*0.05;
        }
        else{
            std::cout<<"Pago total: "<<(40+(a[i]-40)*2)*h<<"\n";
            std::cout<<"Pago neto: "<<(40+(a[i]-40)*2)*h*0.95<<"\n";
            bruh=bruh+(40+(a[i]-40)*2)*h;
            net=net+(40+(a[i]-40)*2)*h*0.05;
        }
    }
    std::cout<<"El pago total a todos los obreros sera: "<<bruh<<"\n";
    std::cout<<"El pago neto a todos los obreros sera: "<<bruh*0.95<<"\n";
    std::cout<<"El total retenido por la prima sera: "<<net<<"\n";
    system("pause");
    return 0;
}
