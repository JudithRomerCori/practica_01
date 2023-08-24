
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 7

// Problema planteado: N�mero amigo

#include <iostream>

int sumaDivisoresPropios(int numero)
{
    int suma = 1; // Iniciamos con 1 porque todos los n�meros son divisibles por 1
    for (int i = 2; i * i <= numero; ++i)
    {
        if (numero % i == 0)
        {
            suma += i;
            if (i != numero / i)
            { // Evitar contar dos veces el mismo divisor en n�meros cuadrados perfectos
                suma += numero / i;
            }
        }
    }
    return suma;
}

bool sonAmigos(int num1, int num2)
{
    return (sumaDivisoresPropios(num1) == num2) && (sumaDivisoresPropios(num2) == num1);
}

int main()
{
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (sonAmigos(num1, num2))
    {
        cout << num1 << " y " << num2 << " son numeros amigos." << endl;
    }
    else
    {
        cout << num1 << " y " << num2 << " no son numeros amigos." << endl;
    }

    return 0;
}
