
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 53

// Problema planteado:
#include <iostream>
#include <math.h>
float factorial(float x){
    float c1=1;
    for(int j=1;j<=x;j++){
        c1=c1*j;
    }
    return c1;
}
int main(){
    float a,sen=0,cos=0,tan=0;
    std::cout<<"Introduzca el angulo: \n";
    std::cin>>a;
    a=a*(3.1416/180);
    for(int i=0;i<=200;i++){

        sen=sen+(((pow(-1,i))*(pow(a,(2*i+1))))/(factorial(2*i+1)));
        cos=cos+(((pow(-1,i))*(pow(a,(2*i))))/(factorial(2*i)));
    }
    tan=sen/cos;
    std::cout<<"El seno es: "<<sen<<" \n";
    std::cout<<"El coseno es: "<<cos<<" \n";
    std::cout<<"La tangente es: "<<tan<<" \n";
    system("pause");
    return 0;
}
/*NOTA IMPORTANTE: el calculo es por series de taylor
  cuando sea 0 aparecera una cifra muy pequena en su
  lugar y cuando sea infinito una cifra muy grande :)*/
