
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 2

// Problema planteado: Volumen de una esfera

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  float radio,volumen;
  const float PI=3.1416;
  cout<<"ingrese el radio de la esfera:"<<endl;
  cin>>radio;

  // formula para sacar el volumen de una esfera

  volumen=(4.0/3.0)*PI*pow(radio,3);
  cout<<"el volumen de la esfera es:"<<volumen<<endl;
}
