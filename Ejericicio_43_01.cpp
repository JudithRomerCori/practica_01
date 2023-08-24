
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 43

// Problema planteado:. Obtener el promedio de números enteros positivos introducidos por teclado, el
//algoritmo se detiene cuando se lea un número negativo o cero.
#include <iostream>

int main()
{
    // Inicializar la suma (a) en 0 y el número (n) en 1
    float a=0,n=1;
    // Inicializar el contador (b) en 0
    int b=0;
    while (n>0){
        cout<<"Escribe un numero: \n";
            cin>>n;
        if (n>0)
        {
            b++;
            a=a+n;
        }
    }
    cout<<"El promedio es: "<<a/b<<" \n";
    system("pause");
    return 0;
}
