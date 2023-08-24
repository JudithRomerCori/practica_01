

// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 9

// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inv�lido
#include <iostream>
#include <string>

int main()
{
    std::string meses[] =
    {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    int numeroMes;

    // Solicitar al usuario ingresar un n�mero de mes
    cout << "Ingrese un n�mero de mes (1 al 12): ";
    cin >> numeroMes;

    // Verificar si el n�mero de mes es v�lido y mostrar el nombre correspondiente
    if (numeroMes >= 1 && numeroMes <= 12)
    {
        cout << "El mes correspondiente al n�mero " << numeroMes << " es: " << meses[numeroMes - 1] << std::endl;
    }
     else
    {
        cout << "Mes inv�lido. Ingrese un n�mero entre 1 y 12." << std::endl;
    }

    return 0;
}
