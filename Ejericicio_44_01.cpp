
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 44

// Problema planteado:La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al
//precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se
//aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y
//calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.
#include <iostream>

int main()
{
    int n;
    float p,c1=0;
     // Ciclo para ingresar las ventas de cada producto
    cout<<"COMERCIAL ESTRELLA DEL SUR \n";
      // Solicitar la cantidad de productos vendidos
    cout<<"Introduce la cantidad de productos vendidos en el dia: \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Monto venta "<<i<<": \n";
        cin>>p;
        if(p>2500){
            p=p*0.95;
            c1=c1+p;
            cout<<"Descuento del 5% ! => "<<p<<": \n";
        }
        else{
            c1=c1+p;
        }
    }
    cout<<"La suma total de las ventas realizadas es: "<<c1<<"\n";
    cout<<"Monto a pagar por IVA a impuestos nacionales: "<<c1*0.13<<"\n";
    system("pause");
    return 0;
}
