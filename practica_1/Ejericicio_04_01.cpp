// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 4

// Problema planteado: Conversi�n de temperatura de grados cent�grado a Kelvin
#include <iostream>

double celsiusToKelvin(double celsius)
{
    // F�rmula de conversi�n
    return celsius + 273.15;
}

int main()
{
    double celsius;

    // Solicitar al usuario ingresar la temperatura en grados Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Llamar a la funci�n celsiusToKelvin para realizar la conversi�n
    double kelvin = celsiusToKelvin(celsius);

    cout << "La temperatura en Kelvin es: " << kelvin << " K" << endl;

    return 0;
}
