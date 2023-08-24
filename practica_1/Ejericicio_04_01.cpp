// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 4

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin
#include <iostream>

double celsiusToKelvin(double celsius)
{
    // Fórmula de conversión
    return celsius + 273.15;
}

int main()
{
    double celsius;

    // Solicitar al usuario ingresar la temperatura en grados Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Llamar a la función celsiusToKelvin para realizar la conversión
    double kelvin = celsiusToKelvin(celsius);

    cout << "La temperatura en Kelvin es: " << kelvin << " K" << endl;

    return 0;
}
