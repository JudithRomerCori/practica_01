// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 24/08/2023

// N�mero de ejericio: 68

// Problema planteado:Escribir un algoritmo que permita generar 50 n�meros al azar en el rango (1-99) y
//determine cu�ntos de estos elementos son n�meros primos.

#include <iostream>
#include <ctime>  // Incluimos la librer�a ctime para generar semillas aleatorias
#include <cstdlib>  // Incluimos la librer�a cstdlib para usar la funci�n rand

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 y 1 no son primos
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;  // Si es divisible por alg�n n�mero entre 2 y sqrt(numero), no es primo
        }
    }
    return true;  // Si no es divisible por ning�n n�mero menor que sqrt(numero), es primo
}

int main() {
    srand(std::time(nullptr));  // Inicializa la semilla aleatoria con el tiempo actual

    int cantidadNumeros = 50;
    int cantidadPrimos = 0;

    cout << "Generando " << cantidadNumeros << " numeros al azar en el rango (1-99)...\n";

    for (int i = 0; i < cantidadNumeros; i++) {
        int numero = rand() % 99 + 1;  // Genera un n�mero aleatorio en el rango (1-99)

        if (esPrimo(numero)) {
            cout << numero << " es un numero primo.\n";
            cantidadPrimos++;
        }
    }

    cout << "En total, hay " << cantidadPrimos << " numeros primos entre los numeros generados.\n";

    return 0;
}
