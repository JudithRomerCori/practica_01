
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 34

// Problema planteado:

#include <iostream>

int main(){
    int c,n,c1,sum;

    std::cout<<"Introduce el numero n de terminos a mostrar: \n";
    std::cin>>n;
    c=1;
    c1=0;
    std::cout<<"La sucesion es: \n";
    for(int i=1;i<=n;i++){
        if(i==1){
            std::cout<<c<<" ";
        }else{
            if(i==2){
                std::cout<<", "<<c;
            }else{
                sum=c;
                while(sum>0){
                    c1=c1+sum%10;
                    sum=sum/10;
                }
                c=c+c1;
                c1=0;
                std::cout<<", "<<c;
            }
        }
    }
    std::cout<<"\n";
    system("pause");
    return 0;
}
