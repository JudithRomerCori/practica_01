// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 32

// Problema planteado:. Leer un n�mero entero y mostrarlo con las cifras al rev�s.


#include <iostream>

int main(){
    int c,n,n1;

    // Solicitar al usuario introducir el n�mero
    cout<<"Introduce el numero: \n";
    cin>>n;
    n1=n;
    c=0;
    while(n1>0){
        c=(c*10)+(n1%10);
        n1=n1/10;
    }
    cout<<"El numero con las cifras al reves es: \n";
    cout<<c<<"\n";
    system("pause");
    return 0;
}
