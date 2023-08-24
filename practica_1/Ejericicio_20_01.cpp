// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 20

// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el menor.


#include <iostream>

int main()
{
    int num1, num2, num3;

    // Solicitar al usuario que ingrese tres n�meros enteros
    cout << "Ingrese tres n�meros enteros: ";
    cin >> num1 >> num2 >> num3;


     // Verificar si los n�meros son diferentes entre s�
    if (num1 != num2 && num1 != num3 && num2 != num3)
    {
        // Suponemos que num1 es el menor inicialmente
        int menor = num1;

        // Comparar num2 y num3 con el valor actual de "menor"
        if (num2 < menor)
        {
            menor = num2;
        }

         // Si num3 es menor, actualizamos "menor"
        if (num3 < menor)
        {
            menor = num3;
        }

        cout << "El menor n�mero es: " << menor << endl;
    } else
    {
        cout << "Los n�meros son iguales o no se pueden comparar." << endl;
    }

    return 0;
}
