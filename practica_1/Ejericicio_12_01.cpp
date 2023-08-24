// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 18/08/2023

// N�mero de ejericio: 12

// Problema planteado: Mostrar los primero 100 n�mero primos.



#include <iostream>

bool esPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int contador = 0;

    // comenzamos con el primer n�mero primo
    int numero = 2;

    while (contador < 100)
    {
        if (esPrimo(numero))
        {
            cout << numero << " ";
            ++contador;
        }
        ++numero;
    }

    cout << endl;
    return 0;
}
