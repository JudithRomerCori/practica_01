
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 40

// Problema planteado:Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:
//5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio
//del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el
//cambio a entregar empleando el menor número posible de monedas.

#include <iostream>

int main()
{
    float a,b,c;
    int bs5=0,bs1=0,bs05=0,bs02=0,bs01=0,d;

    // Solicitar el precio del artículo y la cantidad entregada por el consumidor
    cout<<"Introduce el precio del articulo: \n";
    cin>>a;
    cout<<"Introduce la cantidad entregada por el consumidor: \n";
    cin>>b;

    // Calcular el cambio en centavos
    c=10*(b-a);
    // Convertir a entero
    c=int(c);
    while(c>0){
        if(c>=50){
            bs5++;
            c=c-50;
        }
        else if(c>=10){
            bs1++;
            c=c-10;
        }
        else if(c>=5){
            bs05++;
            c=c-5;
        }
        else if(c>=2){
            bs02++;
            c=c-2;
        }
        else {
            bs01++;
            c=0;
        }
    }

    // Imprimir la cantidad de cada tipo de moneda en el cambio
    cout<<"El cambio sera de: \n";
    cout<<bs5<<" monedas de 5 bs \n";
    cout<<bs1<<" monedas de 1 bs \n";
    cout<<bs05<<" monedas de 0.5 bs \n";
    cout<<bs02<<" monedas de 0.2 bs \n";
    cout<<bs01<<" monedas de 0.1 bs \n";
    system("pause");
    return 0;
}
