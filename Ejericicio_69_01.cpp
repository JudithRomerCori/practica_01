// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 22/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 69

// Problema planteado:Calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir


#include <iostream>


unsigned long long factorial(int num) {
    if (num <= 1) {
        return 1;  // El factorial de 0 y 1 es 1
    }
    unsigned long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

// Función para calcular el coeficiente binomial
unsigned long long coeficienteBinomial(int n, int m) {
    if (m < 0 || m > n) {
        return 0;  // Si m está fuera del rango válido, el coeficiente es 0
    }
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main() {
    int n, m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;

    unsigned long long coeficiente = coeficienteBinomial(n, m);
    cout << "El coeficiente binomial C(" << n << ", " << m << ") es: " << coeficiente << "\n";

    return 0;
}
