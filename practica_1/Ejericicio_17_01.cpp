// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 17

// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas


#include <iostream>
#include <iomanip>

int main()
{
    double valorEnBolivianos;
    // Tasa ficticia Bolivianos a Euros
    const double tasaCambioEuro = 0.12;
     // Tasa ficticia Bolivianos a Dólares
    const double tasaCambioDolar = 0.14;
    // Tasa ficticia Bolivianos a Libras Esterlinas
    const double tasaCambioLibra = 0.10;

    cout << "Ingrese el valor en bolivianos: ";
    cin >> valorEnBolivianos;

    double valorEnEuros = valorEnBolivianos * tasaCambioEuro;
    double valorEnDolares = valorEnBolivianos * tasaCambioDolar;
    double valorEnLibras = valorEnBolivianos * tasaCambioLibra;

    cout << "Equivalente a:\n";
    cout << fixed << setprecision(2);
    cout << valorEnEuros << " Euros" << endl;
    cout << valorEnDolares << " Dólares" << endl;
    cout << valorEnLibras << " Libras Esterlinas" << endl;

    return 0;
}
