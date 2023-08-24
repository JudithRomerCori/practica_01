// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 24/08/2023

// N�mero de ejericio: 67

// Problema planteado:. Leer un n�mero entero y determinar si la suma de sus d�gitos distintos de cero forman
//un n�mero primo, de ser as� imprima el mensaje respectivo.


#include <iostream>
#include <cmath>

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 y 1 no son primos
    }
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;  // Si es divisible por alg�n n�mero entre 2 y sqrt(numero), no es primo
        }
    }
    return true;  // Si no es divisible por ning�n n�mero menor que sqrt(numero), es primo
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

    // Verifica si la suma de los d�gitos distintos de cero es un n�mero primo
    if (esPrimo(sumaDigitos)) {
        cout << "La suma de los digitos distintos de cero (" << sumaDigitos << ") es un numero primo.\n";
    } else {
        cout << "La suma de los digitos distintos de cero (" << sumaDigitos << ") no es un numero primo.\n";
    }

    return 0;
}
