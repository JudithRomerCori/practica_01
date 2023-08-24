
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 7

// Problema planteado: Volumen de una esfera

#include <iostream>
#include <cctype> // Para utilizar la funci�n isalpha

int main() {
    char caracter;
    std::cout << "Ingrese un car�cter: ";
    std::cin >> caracter;

    // Convertir a may�scula para simplificar las comparaciones
    caracter = std::toupper(caracter);

    if (std::isalpha(caracter)) { // Verificar si es una letra
        if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            std::cout << "El car�cter ingresado es una vocal." << std::endl;
        } else {
            std::cout << "El car�cter ingresado es una consonante." << std::endl;
        }
    } else {
        std::cout << "El car�cter ingresado es especial o no es una letra." << std::endl;
    }

    return 0;
}
