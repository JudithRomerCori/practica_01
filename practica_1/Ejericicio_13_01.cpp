// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 13

// Problema planteado: . Indique la cantidad de dígitos que tiene un número entero


#include <iostream>


int contarDigitos(int numero)
{
    int contador = 0;
    while (numero != 0)
    {
        // Dividir el número por 10 elimina el último dígito
        numero /= 10;
        //Incrementar el contador de dígitos
        ++contador;
    }
    // Retornar la cantidad de dígitos
    return contador;
}

int main()
{
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

 // Llamar a la función contarDigitos para obtener la cantidad de dígitos
    int cantidadDigitos = contarDigitos(numero);

    // Mostrar la cantidad de dígitos en el número ingresado
    cout << "El número " << numero << " tiene " << cantidadDigitos << " dígitos." << endl;

    return 0;
}
