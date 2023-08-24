// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 22/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 65

// Problema planteado:Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo
//de manera literal:



#include <iostream>
#include <string>

int main() {
    int numero;
    cout << "Ingrese un numero no mayor a dos digitos: ";
    cin >> numero;

    // Verifica que el número esté en el rango permitido
    if (numero < 0 || numero > 99) {
        cout << "El numero ingresado no esta en el rango permitido.\n";
        return 1;  // Sale del programa con código de error
    }

    // Arrays para representar los nombres de los números en las diferentes posiciones
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince"};
    string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    if (numero >= 1 && numero <= 15) {
        // Casos especiales del 1 al 15
        if (numero <= 9) {
            cout << unidades[numero] << "\n";
        } else {
            cout << especiales[numero - 10] << "\n";
        }
    } else {
        int decena = numero / 10;
        int unidad = numero % 10;

        // Si la unidad es cero, solo imprimimos la decena
        if (unidad == 0) {
            cout << decenas[decena] << "\n";
        } else {
            cout << decenas[decena] << " y " << unidades[unidad] << "\n";
        }
    }

    return 0;
}

