
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 45

// Problema planteado:
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

    std::cout << "La suma de los cuadrados de los 100 primeros numeros compuestos es: " << c1 - 1 << std::endl;
    system("pause");
    return 0;
}
