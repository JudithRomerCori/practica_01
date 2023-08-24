// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 28

// Problema planteado: Multiplicar dos n�meros naturales, sin emplear el operador de la multiplicaci�n, empleando sumas sucesivas.

#include <iostream>

int multiplicar(int num1, int num2)
{
    int resultado = 0;

    // Iterar num2 veces para sumar num1 a resultado en cada iteraci�n
    for (int i = 0; i < num2; ++i)
{
        resultado += num1;
    }

    return resultado;
}

int main()
{
    int numero1, numero2;

    // Solicitar al usuario ingresar los dos n�meros
    cout << "Ingrese el primer n�mero: ";
    cin >> numero1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> numero2;

    // Llamar a la funci�n multiplicar para obtener el producto
    int producto = multiplicar(numero1, numero2);

    cout << "El producto de " << numero1 << " y " << numero2 << " es: " << producto << endl;

    return 0;
}
