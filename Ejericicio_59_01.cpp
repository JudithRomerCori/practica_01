
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 59

// Problema planteado:Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte
//el orden de sus cifras y se suman el número dado y el invertido. Este proceso se
//continúa las veces que sean necesarias hasta obtener un capicúa. Por ejemplo:
#include <iostream>

bool capicua(int n) {
    int org = n;
    int rev = 0;

     // Invierte el número mientras extrae sus dígitos uno por uno.
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    // Compara el número original con su versión invertida.
    return org == rev;
}

int main() {
    int a, b;

    cout << "Indruduzca el Numero inferior del rango N: ";
    cin >> a;

    cout << "Indruduzca el Numero superior del rango M: ";
    cin >> b;
    cout << "Los numeros capicuas son entre "<<a<<" y "<<b<<" son: \n";
    for (int n = a; n <= b; ++n) {
        if (capicua(n)) {
            cout << n << "\n";
        }
    }
    system("pause");
    return 0;
}
