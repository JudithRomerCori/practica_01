// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 28

// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.

#include <iostream>

int multiplicar(int num1, int num2)
{
    int resultado = 0;

    // Iterar num2 veces para sumar num1 a resultado en cada iteración
    for (int i = 0; i < num2; ++i)
{
        resultado += num1;
    }

    return resultado;
}

int main()
{
    int numero1, numero2;

    // Solicitar al usuario ingresar los dos números
    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    // Llamar a la función multiplicar para obtener el producto
    int producto = multiplicar(numero1, numero2);

    cout << "El producto de " << numero1 << " y " << numero2 << " es: " << producto << endl;

    return 0;
}
