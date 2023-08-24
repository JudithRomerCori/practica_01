// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 12

// Problema planteado: Mostrar los primero 100 número primos.



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

    // comenzamos con el primer número primo
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
