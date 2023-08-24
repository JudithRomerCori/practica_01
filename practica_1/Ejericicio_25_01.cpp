
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 25

// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a aproximaciones, para lo cual se dispone de 5 intentos. Veamos un ejemplo: Supongamos que el número “pensado” por la computadora sea el 42. Salida del programa: Estoy pensando un número entre 0 y 50 Intento 1
//? 25
//El numero esta entre 25 y 50
//Intento 2
//? 34
//El numero esta entre 34 y 50
//Intento 3
//? 45
//El numero esta entre 34 y 45
//Intento 4
//? 40
//El numero esta entre 40 y 45
//Intento 5
//? 42
//Felicitaciones… Adivinaste el número


#include <iostream>

// Incluir la biblioteca cstdlib para usar rand() y srand()
#include <cstdlib>

// Incluir la biblioteca ctime para usar time()
#include <ctime>

int main()
{
    // Inicializar la semilla para los números aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));
    // Generar un número aleatorio entre 0 y 50
    int numeroPensado = rand() % 51;

    cout << "Estoy pensando en un número entre 0 y 50. Adivina cuál es." << endl;

    // Número de intentos disponibles

    int intentos = 5;

    // Ciclo para realizar los intentos
    for (int i = 1; i <= intentos; ++i)
    {
        int intento;

        cout << "Intento " << i << "\n? ";
        cin >> intento;

        if (intento < numeroPensado)
        {
            cout << "El número está entre " << intento << " y 50." << endl;
        } else if (intento > numeroPensado)
        {
            cout << "El número está entre 0 y " << intento << "." << endl;
        } else
        {
            cout << "Felicitaciones... ¡Adivinaste el número!" << endl;
            break;
        }
    }

    if (numeroPensado != numeroPensado)
    {
        cout << "Lo siento, no adivinaste el número. Era " << numeroPensado << "." << endl;
    }

    return 0;
}
