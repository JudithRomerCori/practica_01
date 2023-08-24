

// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 63

// Problema planteado:
#include <iostream>
#include <string>

std::string aromano(int n) {
    if (n <= 0 || n >= 4000) {
        return "Error";
    }

    const int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const std::string num[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    std::string res = "";
    int i = 0;

    while (n > 0) {
        while (n >= v[i]) {
            res += num[i];
            n -= v[i];
        }
        ++i;
    }

    return res;
}

int main() {
    int n;

    std::cout << "Introduzca un numero: ";
    std::cin >> n;

    std::string romano = aromano(n);
    if (romano == "Error") {
        std::cout << "Fuera del rango \n";
    } else {
        std::cout << "Representacion en romano: " << romano << "\n";
    }
    system("pause");
    return 0;
}
