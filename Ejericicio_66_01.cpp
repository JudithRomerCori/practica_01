// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 22/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 66

// Problema planteado:Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que
//permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor
//cantidad de billetes y monedas a convertir.


#include <iostream>
using namespace std;

int main() {
    double cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    // Verifica que la cantidad sea positiva
    if (cantidad < 0) {
        cout << "La cantidad ingresada no es valida.\n";
        return 1;  // Sale del programa con código de error
    }

    // Definir los valores de los billetes y monedas
    double valores[] = {100, 50, 20, 10, 5, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
    string nombres[] = {"100 billetes", "50 billetes", "20 billetes", "10 billetes", "5 billetes",
                        "1 billete", "50 centavos", "25 centavos", "10 centavos", "5 centavos", "1 centavo"};

    cout << "La menor cantidad de billetes y monedas para " << cantidad << " es:\n";


    for (int i = 0; i < sizeof(valores) / sizeof(valores[0]); i++) {
        int cantidadActual = cantidad / valores[i];
        if (cantidadActual > 0) {
            cout << cantidadActual << " " << nombres[i] << "\n";
            cantidad -= cantidadActual * valores[i];
        }
    }

    return 0;
}
