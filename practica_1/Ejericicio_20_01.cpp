// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 20

// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor.


#include <iostream>

int main()
{
    int num1, num2, num3;

    // Solicitar al usuario que ingrese tres números enteros
    cout << "Ingrese tres números enteros: ";
    cin >> num1 >> num2 >> num3;


     // Verificar si los números son diferentes entre sí
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

        cout << "El menor número es: " << menor << endl;
    } else
    {
        cout << "Los números son iguales o no se pueden comparar." << endl;
    }

    return 0;
}
