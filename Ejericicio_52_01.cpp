
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 52

// Problema planteado:Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o
//negativos.
#include <iostream>

int main(){
    int a,b,c=0,d=0;

    // Solicitar al usuario que ingrese el n�mero y el multiplicador
    cout<<"Introduzca un numero: \n";
    cin>>a;
    cout<<"Introduzca el multiplicador: \n";
    cin>>b;
    if (b<0 && a<0){
        d=1;
        b=b*(-1);
        }

    if (a>b)
        {
            c=a;
            a=b;
            b=c;

        }
    c=0;
    for(int i=1;i<=b;i++){
        c=c+a;
    }
    if (d==1){
        c=c*(-1);
    }
    cout<<"El resultado es: "<<c<<" \n";
    system("pause");
    return 0;
}
