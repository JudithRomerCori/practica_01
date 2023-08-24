// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 24

// Problema planteado: . Leer un numero entero y muestre la suma de sus dos primeros dígitos.


#include <iostream>

int main()
{
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Obtenemos el último dígito
    int primerDigito = numero % 10;
    // Obtenemos el último dígito
    int segundoDigito = (numero / 10) % 10;

    int sumaPrimerosDigitos = primerDigito + segundoDigito;

    cout << "La suma de los dos primeros dígitos es: " << sumaPrimerosDigitos << endl;

    return 0;
}
