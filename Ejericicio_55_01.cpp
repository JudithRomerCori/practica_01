
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 55

// Problema planteado:Generar las secuencias:
#include <iostream>

int main(){
    float n,d=0;
    cout<<"Introduzca un numero inicial de la secuencia: \n";
    cin>>n;

    // Bucle externo que controla el n�mero de filas en la secuencia
    for(int i=n;i>=1;i--)
        {
     // Bucle interno que imprime los n�meros en cada fila
        for(int j=1;j<=i;j++){
        cout<<j<<" ";
        }
        cout<<" \n";
    }
    system("pause");
    return 0;
}
