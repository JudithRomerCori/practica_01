
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 6

// Problema planteado:N�mero primo
#include <iostream>

bool esPrimo(int numero)
{
    if (numero <= 1)
    {
        //Los n�meros menores o iguales a 1 no son primos
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
    int numero;
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    if (esPrimo(numero))
    {
        cout << numero << " es un n�mero primo." << endl;
    }

    else

    {
        cout << numero << " no es un n�mero primo." << endl;
    }

    return 0;
}
