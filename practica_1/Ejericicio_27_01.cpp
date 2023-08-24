// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 27

// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores es igual al número. Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.

#include <iostream>

// Función que verifica si un número es perfecto
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

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Llamar a la función esNumeroPerfecto para verificar si el número es perfecto
    if (esNumeroPerfecto(numero))
    {
        std::cout << "El número " << numero << " es perfecto." << std::endl;
    } else

    {
        std::cout << "El número " << numero << " no es perfecto." << std::endl;
    }

    return 0;
}
