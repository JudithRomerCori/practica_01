

// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 36
// Problema planteado:
#include <iostream>

int main(){
    int n;
    float a[100],b[100],d,e,c1,c2;
    d=0;e=0;c1=0;c2=0;
    std::cout<<"Ingrese el numero de alumnos: \n";
    std::cin>>n;
    for(int i=0;i<=n-1;i++){
        std::cout<<"Edad del alumno "<<i+1<<" :\n";
        std::cin>>a[i];
        std::cout<<"Estatura del alumno "<<i+1<<" en metros:\n";
        std::cin>>b[i];
        d=d+a[i];
        e=e+b[i];
        if(a[i]>18){
            c1=c1+1;
        }
        if(b[i]>1.75){
            c2=c2+1;
        }
    }
    std::cout<<"El promedio de edad es: "<<d/n<<" \n";
    std::cout<<"El promedio de estatura es: "<<e/n<<" \n";
    std::cout<<"La cantidad de alumnos de mas de 18 es: "<<c1<<" \n";
    std::cout<<"La cantidad de alumnos con altura mayor a 1.75 es: "<<c2<<" \n";
    std::cout.precision(2);
    system("pause");
    return 0;
}
