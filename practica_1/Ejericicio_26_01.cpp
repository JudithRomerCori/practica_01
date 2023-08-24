// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 26

// Problema planteado: En una tienda comercial, las amas de casa compran diversos art�culos de primera necesidad. Una ama de casa selecciona los art�culos de su preferencia pasando por los distintos mostradores, cada art�culo elegido es colocado en un carrito de mano, para asegurar el pago exacto de los art�culos comprados la se�ora anota el precio y la cantidad del art�culo, estableciendo cuanto pagara por este articulo; as� sumara los dem�s art�culos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con todos los art�culos de primera necesidad.



#include <iostream>

// Incluir la biblioteca string para usar el tipo de dato string
#include <string>

int main()
{
    int numArticulos;
    double totalCompra = 0.0;

    // Solicitar al usuario la cantidad de art�culos que va a comprar
    cout << "Bienvenido a la tienda. �Cu�ntos art�culos va a comprar? ";
    cin >> numArticulos;

    // Iterar para cada art�culo
    for (int i = 1; i <= numArticulos; ++i)
    {
        string nombreArticulo;
        double precioArticulo;
        int cantidadArticulo;

        cout << "Art�culo " << i << ":\n";
        cout << "Nombre: ";

        // Limpiar el buffer de entrada antes de leer una l�nea
        cin.ignore();
        getline(cin, nombreArticulo);

        cout << "Precio: $";
        cin >> precioArticulo;

        cout << "Cantidad: ";
        cin >> cantidadArticulo;

        double subtotalArticulo = precioArticulo * cantidadArticulo;
        totalCompra += subtotalArticulo;

        cout << "Subtotal del art�culo: $" << subtotalArticulo << endl;
    }

    cout << "Total de la compra: $" << totalCompra << endl;

    return 0;
}
