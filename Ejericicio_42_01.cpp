
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 42

// Problema planteado:En una granja se requiere determinar el promedio de calidad de las n gallinas que hay
//en la granja. La calidad de cada gallina se obtiene según la fórmula:
#include <iostream>

int main()
{
    float peso,altura,nhuevos,cal=0;
    int n;
    cout<<"Introduce el numero de gallinas: \n";
    cin>>n;

     // Iterar para cada gallina
    for(int i=1;i<=n;i++){
        cout<<"Introduce el peso de la gallina "<<i<<" :\n";
        cin>>peso;
        cout<<"Introduce la altura de la gallina "<<i<<" :\n";
        cin>>altura;
        cout<<"Introduce el numero de huevos que pone la gallina "<<i<<" :\n";
        cin>>nhuevos;
        cal=cal+((peso*altura)/nhuevos);
    }
    cout<<"El promedio de calidad de las "<<n<<" gallinas es: "<<cal/n<<" \n";
    system("pause");
    return 0;
}
