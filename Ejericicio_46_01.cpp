
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 46

// Problema planteado:La empresa �Limbo S.A.�, empresa de seguros tiene contratados a N vendedores. Cada
//uno hace tres ventas a la semana. Su pol�tica de pagos es que un vendedor recibe un
//sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compa��a
//desea saber cu�nto dinero obtendr� en la semana cada vendedor por concepto de
//comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y
//sus comisiones
#include <iostream>

int main()
{
    float n,c;
    cout<<"EMPRESA LIMBO S.A. \n";
    cout<<"Introduce la cantidad de vendedores: \n";
    cin>>n;
    cout<<"Introduce el sueldo base de los vendedores: \n";
    cin>>c;

    cout<<"Monto obtenido por comisiones de cada vendedor: "<<c*0.3<<"\n";
    cout<<"Sueldo base mas comisiones obtenidas por cada vendedor: "<<c*1.3<<"\n";
    /*Se considera que las comisiones de cada venta son del 10%, en total 30%
    Si en realidad el monto total de las tres ventas fueran el 10%, cambiar:
    el 0.3 por 0.1 y el 1.3 por 1.1*/
    system("pause");
    return 0;
}
