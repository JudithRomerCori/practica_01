// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 18/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 16

// Problema planteado:Leer un n�mero entero que represente un valor en segundos y convierta en: horas, minutos y segundos.

#include <iostream>

int main()
{
    int segundos;

    cout << "Ingrese un valor en segundos: ";
    cin >> segundos;

// 1 hora tiene 3600 segundos
    int horas = segundos / 3600;

    // Calculamos los segundos restantes
    segundos %= 3600;

// 1 minuto tiene 60 segundos
    int minutos = segundos / 60;
    segundos %= 60;
    cout << "Equivalente a: " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;

    return 0;
}
