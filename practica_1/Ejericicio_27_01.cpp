// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 27

// Problema planteado: Crear un programa que indique si un n�mero es perfecto o no, se dice que un n�mero es perfecto si la suma de sus divisores es igual al n�mero. Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el n�mero 6 es perfecto, si el n�mero es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.

#include <iostream>

// Funci�n que verifica si un n�mero es perfecto
bool esNumeroPerfecto(int numero)
{
    int sumaDivisores = 0;

    for (int i = 1; i <= numero / 2; ++i)
    {
        // Verificar si i es divisor de numero

        if (numero % i == 0)
        {
            // Acumular los divisores en sumaDivisores
            sumaDivisores += i;
        }
    }

    return sumaDivisores == numero;
}

int main()
{
    int numero;

    std::cout << "Ingrese un n�mero: ";
    std::cin >> numero;

    // Llamar a la funci�n esNumeroPerfecto para verificar si el n�mero es perfecto
    if (esNumeroPerfecto(numero))
    {
        std::cout << "El n�mero " << numero << " es perfecto." << std::endl;
    } else

    {
        std::cout << "El n�mero " << numero << " no es perfecto." << std::endl;
    }

    return 0;
}
