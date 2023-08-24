// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 26

// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para asegurar el pago exacto de los artículos comprados la señora anota el precio y la cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con todos los artículos de primera necesidad.



#include <iostream>

// Incluir la biblioteca string para usar el tipo de dato string
#include <string>

int main()
{
    int numArticulos;
    double totalCompra = 0.0;

    // Solicitar al usuario la cantidad de artículos que va a comprar
    cout << "Bienvenido a la tienda. ¿Cuántos artículos va a comprar? ";
    cin >> numArticulos;

    // Iterar para cada artículo
    for (int i = 1; i <= numArticulos; ++i)
    {
        string nombreArticulo;
        double precioArticulo;
        int cantidadArticulo;

        cout << "Artículo " << i << ":\n";
        cout << "Nombre: ";

        // Limpiar el buffer de entrada antes de leer una línea
        cin.ignore();
        getline(cin, nombreArticulo);

        cout << "Precio: $";
        cin >> precioArticulo;

        cout << "Cantidad: ";
        cin >> cantidadArticulo;

        double subtotalArticulo = precioArticulo * cantidadArticulo;
        totalCompra += subtotalArticulo;

        cout << "Subtotal del artículo: $" << subtotalArticulo << endl;
    }

    cout << "Total de la compra: $" << totalCompra << endl;

    return 0;
}
