

// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 9

// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido
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

    // Solicitar al usuario ingresar un número de mes
    cout << "Ingrese un número de mes (1 al 12): ";
    cin >> numeroMes;

    // Verificar si el número de mes es válido y mostrar el nombre correspondiente
    if (numeroMes >= 1 && numeroMes <= 12)
    {
        cout << "El mes correspondiente al número " << numeroMes << " es: " << meses[numeroMes - 1] << std::endl;
    }
     else
    {
        cout << "Mes inválido. Ingrese un número entre 1 y 12." << std::endl;
    }

    return 0;
}
