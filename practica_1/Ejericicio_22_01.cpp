// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 22

// Problema planteado:En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre. Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.
#include <iostream>

int main()
{
    int cantidadComputadoras;
    double precioPorComputadora;

    cout << "Ingrese la cantidad de computadoras a comprar: ";
    cin >> cantidadComputadoras;

    cout << "Ingrese el precio de cada computadora: ";
    cin >> precioPorComputadora;

    double totalCompra = cantidadComputadoras * precioPorComputadora;
    double descuento = 0.0;

    if (cantidadComputadoras < 5)
    {
        descuento = 0.10;  // 10% de descuento
    }
    else if (cantidadComputadoras < 10)
    {
        descuento = 0.20;  // 20% de descuento
    }
    else
    {
        descuento = 0.40;  // 40% de descuento
    }

    double montoDescuento = totalCompra * descuento;
    double totalConDescuento = totalCompra - montoDescuento;

    cout << "Total de compra: $" << totalCompra << sendl;
    cout << "Descuento aplicado: $" << montoDescuento << endl;
    cout << "Total con descuento: $" << totalConDescuento << endl;

    return 0;
}
