// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 60

// Problema planteado:Los cubos de Nic�maco. Considera la siguiente propiedad descubierta por Nic�maco de
//Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos
//siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el
//tercer cubo, etc.
#include <iostream>

int main(){
    float n,a=1,b=1,c=1;
    // Solicita al usuario que introduzca un n�mero.
    cout<<"Introduzca el rango: \n";
    // Lee el n�mero introducido por el usuario.
    cin>>n;
    while (c<=n){
        cout<<a<<"^3 es igual a: "<<c<<" \n";
        cout<<" \n";
        c=0;
        for(int i=0;i<=a;i++){
            b=b+2;
            c=c+b;
        }
        a++;
    }
    system("pause");
    return 0;
}
