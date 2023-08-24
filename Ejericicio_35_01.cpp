
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 35

// Problema planteado:Un supermercado decide efectuar una promoción de descuentos por el valor de las
//compras que efectúan sus clientes, esta promoción se basa en las siguientes
//condiciones:
//Si el total de ventas es < 100 Bs. no se aplica ningún descuento
//Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
//Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
//Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo.
#include <iostream>

int main()
{
    int n;
    float a[100],b[100],c[100],d,e,f;
    d=0;e=0;f=0;

    // Solicitar al usuario el número de clientes
    cout<<"Ingrese el numero de clientes: \n";
    cin>>n;
    // Iterar para cada cliente
    for(int i=0;i<=n-1;i++)
        {
            // Calcular descuentos y totales según el monto de compra
        cout<<"Compras del cliente "<<i+1<<" :\n";
        cin>>a[i];
        if(a[i]>=500)
        {
            b[i]=a[i]*0.92;
            c[i]=a[i]*0.08;
        }
        else if(a[i]>=100)
        {
            b[i]=a[i]*0.95;
            c[i]=a[i]*0.05;
        }
        else
        {
            b[i]=a[i];
            c[i]=0;
        }
        d=d+a[i];
        e=e+b[i];
        f=f+c[i];
    }
    cout<<"El total de compras efectuadas es: "<<d<<" \n";
    cout<<"El total de ventas con descuento es: "<<e<<" \n";
    cout<<"El total de los descuentoos es: "<<f<<" \n";
    cout.precision(2);
    system("pause");
    return 0;
}
