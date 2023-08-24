
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 38

// Problema planteado:En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9
//millones. Las tasas de crecimiento de la población son de 2% y 3% respectivamente.
//Desarrollar un programa para saber en qué año la población del país B supera a la de
//A.
#include <iostream>

int main()
{
    // Año inicial
    // Población país A en el año inicial
    // Población país B en el año inicial
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
