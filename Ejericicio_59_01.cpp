
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 59

// Problema planteado:Conjetura capic�a: Para obtener un n�mero capic�a a partir de otro n�mero se invierte
//el orden de sus cifras y se suman el n�mero dado y el invertido. Este proceso se
//contin�a las veces que sean necesarias hasta obtener un capic�a. Por ejemplo:
#include <iostream>

bool capicua(int n) {
    int org = n;
    int rev = 0;

     // Invierte el n�mero mientras extrae sus d�gitos uno por uno.
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    // Compara el n�mero original con su versi�n invertida.
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
