

// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 63

// Problema planteado: Leer un valor numérico y convertirlo a un número romano (1-9999)
#include <iostream>
#include <string>

string aromano(int n) {
    if (n <= 0 || n >= 4000)
    {
        // Si el número está fuera del rango aceptable, devuelve "Error".
        return "Error";
    }

    const int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string num[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string res = "";
    int i = 0;

    while (n > 0) {
        while (n >= v[i]) {
            res += num[i];
            n -= v[i];
        }
        ++i;
    }

    return res;
}

int main() {
    int n;

    cout << "Introduzca un numero: ";
    cin >> n;

    string romano = aromano(n);
    if (romano == "Error") {
        cout << "Fuera del rango \n";
    } else {
        cout << "Representacion en romano: " << romano << "\n";
    }
    system("pause");
    return 0;
}
