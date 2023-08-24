
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 6

// Problema planteado:Número primo
#include <iostream>

bool esPrimo(int numero)
{
    if (numero <= 1)
    {
        //Los números menores o iguales a 1 no son primos
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
    cout << "Ingrese un número: ";
    cin >> numero;

    if (esPrimo(numero))
    {
        cout << numero << " es un número primo." << endl;
    }

    else

    {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}
