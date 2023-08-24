
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora. Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar

#include <iostream>

int main()
{

    // Tarifas de estacionamiento
    const int tarifaPrimeraHora = 7;
    const int tarifaHoraAdicional = 5;

    // Solicitar al usuario la cantidad de horas que el vehículo está estacionado
    int horasEstacionado;
    cout << "Ingrese la cantidad de horas que el vehículo está estacionado: ";
    cin >> horasEstacionado;

    int costoEstacionamiento;

    // Calcular el costo de estacionamiento según las tarifas
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
