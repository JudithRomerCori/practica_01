
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 49

// Problema planteado:Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
//el capital (Cn) y los intereses ganados por un capital C0 depositado a un interés
//compuesto I durante N años. C0, I y N se deben leer por teclado. La fórmula a emplear
//es:
#include <iostream>

int main()
{
    float co,n,in,cn;
    cout<<"Introduce el Capital inicial: \n";
    cin>>co;
    cout<<"Introduce la cantidad de anos: \n";
    cin>>n;
    cout<<"Introduce el interes en porcentaje (%): \n";
    cin>>in;

    // Calcular el capital total y el interés ganado para cada año
    for(int i=1;i<=n;i++){
        cn=co*((1+in/100));
        cout<<"Capital total (Cn) ano "<<i<<": "<<cn<<"\n";
        cout<<"Interes ganado "<<cn-co<<" :\n";
        // Actualizar el capital inicial para el siguiente año
        co=cn;
    }

    system("pause");
    return 0;
}
