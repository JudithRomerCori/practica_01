// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 18

// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.



#include <iostream>
#include <cmath>

// Función para calcular el volumen de una pirámide de base cuadrada
double calcularVolumen(double longitudBase, double altura)
{
     // Utilizamos la fórmula del volumen de una pirámide de base cuadrada
    return (pow(longitudBase, 2) * altura) / 3.0;
}

int main()
{
    double longitudBase, altura;

    cout << "Ingrese la longitud del lado de la base de la pirámide: ";
    cin >> longitudBase;

    cout << "Ingrese la altura de la pirámide: ";
    cin >> altura;


    // Calcular el volumen utilizando la función calcularVolumen
    double volumen = calcularVolumen(longitudBase, altura);

    cout << "El volumen de la pirámide es: " << volumen << endl;

    return 0;
}
