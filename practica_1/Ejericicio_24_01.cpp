// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 24

// Problema planteado: . Leer un numero entero y muestre la suma de sus dos primeros d�gitos.


#include <iostream>

int main()
{
    int numero;

    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

    // Obtenemos el �ltimo d�gito
    int primerDigito = numero % 10;
    // Obtenemos el �ltimo d�gito
    int segundoDigito = (numero / 10) % 10;

    int sumaPrimerosDigitos = primerDigito + segundoDigito;

    cout << "La suma de los dos primeros d�gitos es: " << sumaPrimerosDigitos << endl;

    return 0;
}
