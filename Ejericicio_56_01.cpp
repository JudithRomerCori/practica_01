
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 56

// Problema planteado:
#include <iostream>

int main(){
    float n,d=0;
    std::cout<<"Introduzca un numero inicial de la secuencia: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==1){
                std::cout<<"0 ";
            }else{
                std::cout<<"1 ";
            }
        }
        std::cout<<" \n";
    }
    system("pause");
    return 0;
}
