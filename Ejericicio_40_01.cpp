
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 40

// Problema planteado:
#include <iostream>

int main(){
    float a,b,c;
    int bs5=0,bs1=0,bs05=0,bs02=0,bs01=0,d;

    std::cout<<"Introduce el precio del articulo: \n";
    std::cin>>a;
    std::cout<<"Introduce la cantidad entregada por el consumidor: \n";
    std::cin>>b;
    c=10*(b-a);
    c=int(c);
    while(c>0){
        if(c>=50){
            bs5++;
            c=c-50;
        }
        else if(c>=10){
            bs1++;
            c=c-10;
        }
        else if(c>=5){
            bs05++;
            c=c-5;
        }
        else if(c>=2){
            bs02++;
            c=c-2;
        }
        else {
            bs01++;
            c=0;
        }
    }

    std::cout<<"El cambio sera de: \n";
    std::cout<<bs5<<" monedas de 5 bs \n";
    std::cout<<bs1<<" monedas de 1 bs \n";
    std::cout<<bs05<<" monedas de 0.5 bs \n";
    std::cout<<bs02<<" monedas de 0.2 bs \n";
    std::cout<<bs01<<" monedas de 0.1 bs \n";
    system("pause");
    return 0;
}
