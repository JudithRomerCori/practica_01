
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 51

// Problema planteado:Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El
//método para obtener el cociente y el resto es por restas sucesivas
#include <iostream>

int main(){
    int a,b,c=0;

    // Solicitar al usuario que ingrese el dividendo y el divisor
    cout<<"El dividendo: \n";
    cin>>a;
    cout<<"El divisor: \n";
    cin>>b;
      // Calcular el cociente y el resto mediante un bucle while
    while (a>=b){
        a=a-b;
        c++;
    }
    cout<<"El cociente es: "<<c<<" \n";
    cout<<"El resto es: "<<a<<" \n";
    system("pause");
    return 0;
}
