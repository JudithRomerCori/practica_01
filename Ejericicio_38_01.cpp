
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 38

// Problema planteado:En el a�o 2009 el pa�s A tiene una poblaci�n de 25 millones y el pa�s B de 19.9
//millones. Las tasas de crecimiento de la poblaci�n son de 2% y 3% respectivamente.
//Desarrollar un programa para saber en qu� a�o la poblaci�n del pa�s B supera a la de
//A.
#include <iostream>

int main()
{
    // A�o inicial
    // Poblaci�n pa�s A en el a�o inicial
    // Poblaci�n pa�s B en el a�o inicial
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
