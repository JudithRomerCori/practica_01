// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 29

// Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”,dicha promoción consiste en lo siguiente: Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se compran de cinco a 10 y de 200 Bs. si se compran más de 10. Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra.


#include <iostream>

int main()
{
    int cantidadLlantas;
    double precioPorLlanta;

      // Solicitar al usuario la cantidad de llantas que va a comprar
    cout << "Ingrese la cantidad de llantas que va a comprar: ";
    cin >> cantidadLlantas;

    // Verificar la cantidad de llantas y establecer el precio por llanta
    if (cantidadLlantas < 5)
    {
        precioPorLlanta = 300.0;
    } else if (cantidadLlantas >= 5 && cantidadLlantas <= 10)
    {
        precioPorLlanta = 250.0;
    }
    else
    {
        precioPorLlanta = 200.0;
    }
    // Calcular el total de la compra multiplicando la cantidad de llantas por el precio por llanta

    double totalCompra = cantidadLlantas * precioPorLlanta;

    // Mostrar el precio por cada llanta y el total de la compra
    cout << "Precio por cada llanta: " << precioPorLlanta << " Bs." << endl;
    cout << "Total de la compra: " << totalCompra << " Bs." << endl;

    return 0;
}
