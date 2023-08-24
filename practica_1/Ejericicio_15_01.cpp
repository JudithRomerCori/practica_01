// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 15

// Problema planteado: Escriba la sucesión de Fibonacci.


#include <iostream>

int fibonacci(int n)
{
    if (n <= 0)
    {
        // El primer término de Fibonacci es 0
        return 0;
    }
    else if (n == 1)
    {
        // El segundo término de Fibonacci es 1
        return 1;
    }
    else
    {
         // Los términos posteriores se calculan sumando los dos términos anteriores
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int numTerminos;

    cout << "Ingrese el número de términos de la sucesión de Fibonacci: ";
    cin >> numTerminos;

    cout << "Sucesión de Fibonacci con " << numTerminos << " términos:\n";

    for (int i = 0; i < numTerminos; ++i)
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}
