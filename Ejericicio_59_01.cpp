
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 59

// Problema planteado:
#include <iostream>

bool capicua(int n) {
    int org = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return org == rev;
}

int main() {
    int a, b;

    std::cout << "Indruduzca el Numero inferior del rango N: ";
    std::cin >> a;

    std::cout << "Indruduzca el Numero superior del rango M: ";
    std::cin >> b;
    std::cout << "Los numeros capicuas son entre "<<a<<" y "<<b<<" son: \n";
    for (int n = a; n <= b; ++n) {
        if (capicua(n)) {
            std::cout << n << "\n";
        }
    }
    system("pause");
    return 0;
}
