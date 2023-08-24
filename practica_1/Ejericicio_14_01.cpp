// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 14

// Problema planteado: Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos.

#include <iostream>

int main()
{
    int valor;
    int suma = 0;
    int cantidadValores = 0;

    cout << "Ingrese valores numéricos (ingrese 0 para terminar):\n";

    do
    {
        // Leer el valor ingresado por el usuario
        cin >> valor;

        // Si el valor no es cero, agregarlo a la suma y aumentar el contador de valores
        if (valor != 0)
        {
            suma += valor;
            cantidadValores++;
        }

    // Repetir hasta que se ingrese el valor cero
    } while (valor != 0);

    if (cantidadValores > 0)
    {
        // Calcular el promedio utilizando la suma y la cantidad de valores
        double promedio = static_cast<double>(suma) / cantidadValores;

         // Mostrar la suma y el promedio de los valores ingresados
        cout << "La suma de los valores es: " << suma << endl;
        cout << "El promedio de los valores es: " << promedio << endl;
    }
    else
    {
        cout << "No se ingresaron valores válidos." << endl;
    }

    return 0;
}
