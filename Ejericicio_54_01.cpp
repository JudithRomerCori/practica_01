
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 54

// Problema planteado:Hallar la ra�z cuadrada de un n�mero por aproximaciones, utilizar:
//http://es.wikipedia.org/wiki/C%C3%A1lculo_de_la_ra%C3%ADz_cuadrada
//(Algoritmo Babil�nico)
#include <iostream>

int main(){
    float h,b,x,d=0;
    // Solicitar al usuario que ingrese un n�mero
    cout<<"Introduzca un numero: \n";
    cin>>x;

    // Inicializar 'b' con el valor de 'x'
    b=x;
    for(int i=0;i<=200;i++){
        h=0.5*((x/b)+b);
        b=h;
    }
    cout<<"El resultado es: "<<b<<" \n";
    system("pause");
    return 0;
}
