
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 43

// Problema planteado:. Obtener el promedio de n�meros enteros positivos introducidos por teclado, el
//algoritmo se detiene cuando se lea un n�mero negativo o cero.
#include <iostream>

int main()
{
    // Inicializar la suma (a) en 0 y el n�mero (n) en 1
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
