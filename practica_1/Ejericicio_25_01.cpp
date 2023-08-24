
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 25

// Problema planteado: Escribir un programa que permita adivinar un n�mero que sea genere internamente al azar, el cual est� en el rango de 0 a 50. El usuario debe adivinar este n�mero en base a aproximaciones, para lo cual se dispone de 5 intentos. Veamos un ejemplo: Supongamos que el n�mero �pensado� por la computadora sea el 42. Salida del programa: Estoy pensando un n�mero entre 0 y 50 Intento 1
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
//Felicitaciones� Adivinaste el n�mero


#include <iostream>

// Incluir la biblioteca cstdlib para usar rand() y srand()
#include <cstdlib>

// Incluir la biblioteca ctime para usar time()
#include <ctime>

int main()
{
    // Inicializar la semilla para los n�meros aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));
    // Generar un n�mero aleatorio entre 0 y 50
    int numeroPensado = rand() % 51;

    cout << "Estoy pensando en un n�mero entre 0 y 50. Adivina cu�l es." << endl;

    // N�mero de intentos disponibles

    int intentos = 5;

    // Ciclo para realizar los intentos
    for (int i = 1; i <= intentos; ++i)
    {
        int intento;

        cout << "Intento " << i << "\n? ";
        cin >> intento;

        if (intento < numeroPensado)
        {
            cout << "El n�mero est� entre " << intento << " y 50." << endl;
        } else if (intento > numeroPensado)
        {
            cout << "El n�mero est� entre 0 y " << intento << "." << endl;
        } else
        {
            cout << "Felicitaciones... �Adivinaste el n�mero!" << endl;
            break;
        }
    }

    if (numeroPensado != numeroPensado)
    {
        cout << "Lo siento, no adivinaste el n�mero. Era " << numeroPensado << "." << endl;
    }

    return 0;
}
