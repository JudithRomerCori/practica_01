// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 23

// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
//- Empiece con cualquier entero positivo.
//- Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
//- Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26, la secuencia será: 26 13 40 20 10 5 16 8 4 2 1


#include <iostream>

int main()
{
    int n;

    // Solicitar al usuario que ingrese un número entero n mayor que 1
    cout << "Ingrese un número entero n > 1: ";
    cin >> n;

    // Verificar si el número es menor o igual a 1
    if (n <= 1)
    {
        cout << "El número debe ser mayor que 1." << endl;
        // Terminar el programa con código de error
        return 1;
    }

    // Mostrar el encabezado para la secuencia de Ullman
    cout << "Secuencia de Ullman para " << n << ": ";

    // Generar la secuencia de Ullman hasta que n sea igual a 1
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            // Si n es par, dividir por 2
            n /= 2;
        }
        else
        {
            // Si n es impar, multiplicar por 3 y sumar 1
            n = n * 3 + 1;
        }
    }

    cout << n << endl;  // Imprime el último elemento (1)

    return 0;
}
