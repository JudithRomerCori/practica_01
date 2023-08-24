
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 50

// Problema planteado:Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter.
//La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros
//parámetros dependiendo del código indicado en el tercer parámetro, y devolver el
//resultado
#include <iostream>
#include <math.h>
int main(){
    int a,b;
    char c;
    float res;

    // Solicitar al usuario que ingrese dos números
    cout<<"Escribe un numero: \n";
    cin>>a;
    cout<<"Escribe otro numero: \n";
    cin>>b;

    // Solicitar al usuario que elija una operación
    cout<<"Ingresa una operacion: \n";
    cout<<"S = suma \n";
    cout<<"R = resta \n";
    cout<<"M = multiplicacion \n";
    cout<<"D = division \n";

    // Realizar la operación correspondiente según el carácter ingresado
    cin>>c;
    switch (c)
    {
    case 'S':
        res=a+b;
        break;
    case 'R':
        res=a-b;
        break;
    case 'M':
        res=a*b;
        break;
    case 'D':
        res=a/float(b);
        break;
    default:
        cout<<"opearracion no valida \n";
        break;
    }
    cout<<"el resultado es: "<<res<<" \n";
    system("pause");
    return 0;
}
