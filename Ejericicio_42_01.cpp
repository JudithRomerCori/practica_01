
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 42

// Problema planteado:
#include <iostream>

int main(){
    float peso,altura,nhuevos,cal=0;
    int n;
    std::cout<<"Introduce el numero de gallinas: \n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cout<<"Introduce el peso de la gallina "<<i<<" :\n";
        std::cin>>peso;
        std::cout<<"Introduce la altura de la gallina "<<i<<" :\n";
        std::cin>>altura;
        std::cout<<"Introduce el numero de huevos que pone la gallina "<<i<<" :\n";
        std::cin>>nhuevos;
        cal=cal+((peso*altura)/nhuevos);
    }
    std::cout<<"El promedio de calidad de las "<<n<<" gallinas es: "<<cal/n<<" \n";
    system("pause");
    return 0;
}
