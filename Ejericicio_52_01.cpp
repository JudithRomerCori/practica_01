
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 52

// Problema planteado:
#include <iostream>

int main(){
    int a,b,c=0,d=0;
    std::cout<<"Introduzca un numero: \n";
    std::cin>>a;
    std::cout<<"Introduzca el multiplicador: \n";
    std::cin>>b;
    if (b<0 && a<0){
        d=1;
        b=b*(-1);
        }

    if (a>b)
        {
            c=a;
            a=b;
            b=c;

        }
    c=0;
    for(int i=1;i<=b;i++){
        c=c+a;
    }
    if (d==1){
        c=c*(-1);
    }
    std::cout<<"El resultado es: "<<c<<" \n";
    system("pause");
    return 0;
}
