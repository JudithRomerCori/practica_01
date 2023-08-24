// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 22/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 68

// Problema planteado:Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y
//determine cuántos de estos elementos son números primos.

#include <iostream>
#include <ctime>  // Incluimos la librería ctime para generar semillas aleatorias
#include <cstdlib>  // Incluimos la librería cstdlib para usar la función rand

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 y 1 no son primos
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;  // Si es divisible por algún número entre 2 y sqrt(numero), no es primo
        }
    }
    return true;  // Si no es divisible por ningún número menor que sqrt(numero), es primo
}

int main() {
    srand(std::time(nullptr));  // Inicializa la semilla aleatoria con el tiempo actual

    int cantidadNumeros = 50;
    int cantidadPrimos = 0;

    cout << "Generando " << cantidadNumeros << " numeros al azar en el rango (1-99)...\n";

    for (int i = 0; i < cantidadNumeros; i++) {
        int numero = rand() % 99 + 1;  // Genera un número aleatorio en el rango (1-99)

        if (esPrimo(numero)) {
            cout << numero << " es un numero primo.\n";
            cantidadPrimos++;
        }
    }

    cout << "En total, hay " << cantidadPrimos << " numeros primos entre los numeros generados.\n";

    return 0;
}
