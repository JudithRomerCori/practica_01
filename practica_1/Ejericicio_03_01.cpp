// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 3

// Problema planteado: lector de N notas que saque el promedio general.

#include <iostream>
using namespace std;
main()

{
 int n;//cantidad de notas

 float a,c=0,prom;
 cout<<"ingrese la cantidad de notas: ";cin>>n;
 for(int i=0;i<n;i++)

 {
     //el valor de a varia en cada ciclo
     cout<<"ingrese la nota "<<i+1<<": ";cin>>a;
     c=c+a;

 }

 prom=c/n;
 cout<<"el promedio es: "<<prom;
}
