// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 18/08/2023

// N�mero de ejericio: 13

// Problema planteado: . Indique la cantidad de d�gitos que tiene un n�mero entero


#include <iostream>


int contarDigitos(int numero)
{
    int contador = 0;
    while (numero != 0)
    {
        // Dividir el n�mero por 10 elimina el �ltimo d�gito
        numero /= 10;
        //Incrementar el contador de d�gitos
        ++contador;
    }
    // Retornar la cantidad de d�gitos
    return contador;
}

int main()
{
    int numero;
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

 // Llamar a la funci�n contarDigitos para obtener la cantidad de d�gitos
    int cantidadDigitos = contarDigitos(numero);

    // Mostrar la cantidad de d�gitos en el n�mero ingresado
    cout << "El n�mero " << numero << " tiene " << cantidadDigitos << " d�gitos." << endl;

    return 0;
}
