
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 47

// Problema planteado:Un negocio de �Cosm�ticos� de belleza, contratara a N vendedoras para la venta de sus
//productos. Cada Vendedora en promedio debe vender 10 productos en un mes.
//La cancelaci�n de los sueldos a las vendedoras se realiza cada fin de mes, bajo las
//siguientes caracter�sticas
//Una vendedora recibe un sueldo b�sico de acuerdo a su antig�edad (ver tabla) y
//adem�s se a�ade un sueldo extra por comisi�n de ventas del 10% del total vendido.
#include <iostream>

int main(){
    float n,c,a[100];
    cout<<"Introduce la cantidad de vendedoras: \n";
    cin>>n;
    cout<<"Introduce el sueldo base de las vendedoras: \n";
    cin>>c;

     // Leer las ventas de cada vendedora
    for(int i=0;i<=n-1;i++){
        cout<<"Cuanto vendio la vendedora "<<i+1<<" ?:\n";
        cin>>a[i];
    }
    // Calcular y mostrar los pagos para cada vendedora

    for(int i=0;i<=n-1;i++){
        cout<<"Vendedora "<<i+1<<" :\n";
        cout<<"Pago total: "<<c+a[i]*0.1<<"\n";
            cout<<"Pago recibido como extra: "<<a[i]*0.1<<"\n";
    }
    system("pause");
    return 0;
}
