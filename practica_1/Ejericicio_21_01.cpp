// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 21

// Problema planteado: . Leer un numero n y tambi�n un intervalo de cerrado de valores (a,b), si el numero est� dentro del intervalo obtenga su cuadrado (n*n), si es menor que el l�mite inferior, obtenga su valor inverso (1/n), si est� por encima del intervalo obtenga su mitad (n/2).

#include <iostream>

int main()
{
    double n, a, b;

    cout << "Ingrese un n�mero n: ";
    cin >> n;

    // Solicitar al usuario que ingrese el valor a del intervalo [a, b]
    cout << "Ingrese el valor a del intervalo [a, b]: ";
    cin >> a;

    // Solicitar al usuario que ingrese el valor a del intervalo [a, b]
    cout << "Ingrese el valor b del intervalo [a, b]: ";
    cin >> b;

    // Verificar si el n�mero n est� dentro del intervalo [a, b]
    if (n >= a && n <= b)
    {
        double cuadrado = n * n;
        cout << "El cuadrado del n�mero " << n << " es " << cuadrado << endl;
    }
    // Verificar si el n�mero n es menor que a
    else if (n < a)
    {
        double inverso = 1.0 / n;
        cout << "El inverso del n�mero " << n << " es " << inverso << endl;
    }
    // Si no se cumplen las condiciones anteriores, el n�mero n debe ser mayor que b
    else
    {
        double mitad = n / 2.0;
        cout << "La mitad del n�mero " << n << " es " << mitad << endl;
    }

    return 0;
}
