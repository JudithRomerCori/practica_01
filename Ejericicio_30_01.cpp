
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 30

// Problema planteado:
#include <iostream>

int main(){
    float c,n,res;
    c=1;
    std::cout<<"Introduce el numero de sucesiones: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            res=res-((c+1)/c);
        }
        else{
            res=res+((c+1)/c);
        }
        c++;
        std::cout<<res<<"\n";
    }
    std::cout<<"El resultado es: \n";
    std::cout<<res<<"\n";
    system("pause");
    return 0;
}
