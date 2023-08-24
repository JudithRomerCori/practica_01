// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 23

// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matem�tico Ullman) que consiste en lo siguiente:
//- Empiece con cualquier entero positivo.
//- Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
//- Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendr� el n�mero 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26, la secuencia ser�: 26 13 40 20 10 5 16 8 4 2 1


#include <iostream>

int main()
{
    int n;

    // Solicitar al usuario que ingrese un n�mero entero n mayor que 1
    cout << "Ingrese un n�mero entero n > 1: ";
    cin >> n;

    // Verificar si el n�mero es menor o igual a 1
    if (n <= 1)
    {
        cout << "El n�mero debe ser mayor que 1." << endl;
        // Terminar el programa con c�digo de error
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

    cout << n << endl;  // Imprime el �ltimo elemento (1)

    return 0;
}
