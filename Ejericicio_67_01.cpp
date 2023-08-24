// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 22/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 67

// Problema planteado:. Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman
//un número primo, de ser así imprima el mensaje respectivo.


#include <iostream>
#include <cmath>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 y 1 no son primos
    }
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;  // Si es divisible por algún número entre 2 y sqrt(numero), no es primo
        }
    }
    return true;  // Si no es divisible por ningún número menor que sqrt(numero), es primo
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int sumaDigitos = 0;
    int numOriginal = numero;

    while (numero > 0) {
        int digito = numero % 10;
        if (digito != 0) {
            sumaDigitos += digito;
        }
        numero /= 10;
    }

    // Verifica si la suma de los dígitos distintos de cero es un número primo
    if (esPrimo(sumaDigitos)) {
        cout << "La suma de los digitos distintos de cero (" << sumaDigitos << ") es un numero primo.\n";
    } else {
        cout << "La suma de los digitos distintos de cero (" << sumaDigitos << ") no es un numero primo.\n";
    }

    return 0;
}
