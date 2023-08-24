
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora. Ingrese la cantidad de horas que un veh�culo est� estacionado y calcule cuanto debe pagar

#include <iostream>

int main()
{

    // Tarifas de estacionamiento
    const int tarifaPrimeraHora = 7;
    const int tarifaHoraAdicional = 5;

    // Solicitar al usuario la cantidad de horas que el veh�culo est� estacionado
    int horasEstacionado;
    cout << "Ingrese la cantidad de horas que el veh�culo est� estacionado: ";
    cin >> horasEstacionado;

    int costoEstacionamiento;

    // Calcular el costo de estacionamiento seg�n las tarifas
    if (horasEstacionado <= 1)
    {
        costoEstacionamiento = tarifaPrimeraHora;
    }
    else
    {
        costoEstacionamiento = tarifaPrimeraHora + (horasEstacionado - 1) * tarifaHoraAdicional;
    }

    cout << "El costo de estacionamiento es: " << costoEstacionamiento << " Bs" << endl;

    return 0;
}
