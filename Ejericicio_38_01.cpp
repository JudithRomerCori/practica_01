
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 38

// Problema planteado:
#include <iostream>

int main(){
    int p=2009,a=25000000,b=19900000;
    while(b<a){
        p=p+1;
        a=a+a*0.02;
        b=b+b*0.03;
    }
    std::cout<<"El pais B superara al pais A en el ano: "<<p<<"\n";
    system("pause");
    return 0;
}
