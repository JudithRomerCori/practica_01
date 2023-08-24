// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 18

// Problema planteado: Escribir un programa que calcule el volumen de una pir�mide recta de base cuadrada.



#include <iostream>
#include <cmath>

// Funci�n para calcular el volumen de una pir�mide de base cuadrada
double calcularVolumen(double longitudBase, double altura)
{
     // Utilizamos la f�rmula del volumen de una pir�mide de base cuadrada
    return (pow(longitudBase, 2) * altura) / 3.0;
}

int main()
{
    double longitudBase, altura;

    cout << "Ingrese la longitud del lado de la base de la pir�mide: ";
    cin >> longitudBase;

    cout << "Ingrese la altura de la pir�mide: ";
    cin >> altura;


    // Calcular el volumen utilizando la funci�n calcularVolumen
    double volumen = calcularVolumen(longitudBase, altura);

    cout << "El volumen de la pir�mide es: " << volumen << endl;

    return 0;
}
