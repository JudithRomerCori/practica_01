
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 45

// Problema planteado:. Calcular la suma de los cuadrados de los primeros 100 primeros números compuestos.
#include <iostream>

int main() {
    int c1 = 0;

    for (int i = 0; i < 100; ++i) {
        int numero = i;
        int m = 2;
        bool band = true;

        while (band && m < numero) {
            if (numero % m == 0) {
                band = false;
            } else {
                ++m;
            }
        }

        if (!band) {
            c1 += i * i;
        }
    }
    // Corregir la resta de 1 en el resultado

    cout << "La suma de los cuadrados de los 100 primeros numeros compuestos es: " << c1 - 1 << endl;
    system("pause");
    return 0;
}
