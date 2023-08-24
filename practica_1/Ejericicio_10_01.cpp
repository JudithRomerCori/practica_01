
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 7

// Problema planteado: Volumen de una esfera

#include <iostream>
#include <cctype> // Para utilizar la función isalpha

int main() {
    char caracter;
    std::cout << "Ingrese un carácter: ";
    std::cin >> caracter;

    // Convertir a mayúscula para simplificar las comparaciones
    caracter = std::toupper(caracter);

    if (std::isalpha(caracter)) { // Verificar si es una letra
        if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            std::cout << "El carácter ingresado es una vocal." << std::endl;
        } else {
            std::cout << "El carácter ingresado es una consonante." << std::endl;
        }
    } else {
        std::cout << "El carácter ingresado es especial o no es una letra." << std::endl;
    }

    return 0;
}
