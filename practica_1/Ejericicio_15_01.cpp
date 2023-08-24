// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 18/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 15

// Problema planteado: Escriba la sucesi�n de Fibonacci.


#include <iostream>

int fibonacci(int n)
{
    if (n <= 0)
    {
        // El primer t�rmino de Fibonacci es 0
        return 0;
    }
    else if (n == 1)
    {
        // El segundo t�rmino de Fibonacci es 1
        return 1;
    }
    else
    {
         // Los t�rminos posteriores se calculan sumando los dos t�rminos anteriores
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int numTerminos;

    cout << "Ingrese el n�mero de t�rminos de la sucesi�n de Fibonacci: ";
    cin >> numTerminos;

    cout << "Sucesi�n de Fibonacci con " << numTerminos << " t�rminos:\n";

    for (int i = 0; i < numTerminos; ++i)
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}
