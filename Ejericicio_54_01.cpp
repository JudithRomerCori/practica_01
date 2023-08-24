
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 54

// Problema planteado:Hallar la raíz cuadrada de un número por aproximaciones, utilizar:
//http://es.wikipedia.org/wiki/C%C3%A1lculo_de_la_ra%C3%ADz_cuadrada
//(Algoritmo Babilónico)
#include <iostream>

int main(){
    float h,b,x,d=0;
    // Solicitar al usuario que ingrese un número
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
