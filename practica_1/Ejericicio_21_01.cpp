// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 21

// Problema planteado: . Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).

#include <iostream>

int main()
{
    double n, a, b;

    cout << "Ingrese un número n: ";
    cin >> n;

    // Solicitar al usuario que ingrese el valor a del intervalo [a, b]
    cout << "Ingrese el valor a del intervalo [a, b]: ";
    cin >> a;

    // Solicitar al usuario que ingrese el valor a del intervalo [a, b]
    cout << "Ingrese el valor b del intervalo [a, b]: ";
    cin >> b;

    // Verificar si el número n está dentro del intervalo [a, b]
    if (n >= a && n <= b)
    {
        double cuadrado = n * n;
        cout << "El cuadrado del número " << n << " es " << cuadrado << endl;
    }
    // Verificar si el número n es menor que a
    else if (n < a)
    {
        double inverso = 1.0 / n;
        cout << "El inverso del número " << n << " es " << inverso << endl;
    }
    // Si no se cumplen las condiciones anteriores, el número n debe ser mayor que b
    else
    {
        double mitad = n / 2.0;
        cout << "La mitad del número " << n << " es " << mitad << endl;
    }

    return 0;
}
