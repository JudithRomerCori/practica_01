
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 58

// Problema planteado:Generar:
#include <iostream>

int main(){
    float n,d=0;
     // Solicita al usuario el número de filas a generar.
    cout<<"Introduzca un numero de filas a generar: \n";
    cin>>n;
    for(int i=1;i<=n;i++){
              // Imprime la segunda mitad de números en la fila, descendiendo.
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<" \n";
    }
    system("pause");
    return 0;
}
