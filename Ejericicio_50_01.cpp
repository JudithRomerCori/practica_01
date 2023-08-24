
// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 50

// Problema planteado:Escribe una funci�n que tome 3 par�metros: dos de tipo enteros y uno de tipo car�cter.
//La funci�n deber� sumar, restar, multiplicar o dividir los valores de los dos primeros
//par�metros dependiendo del c�digo indicado en el tercer par�metro, y devolver el
//resultado
#include <iostream>
#include <math.h>
int main(){
    int a,b;
    char c;
    float res;

    // Solicitar al usuario que ingrese dos n�meros
    cout<<"Escribe un numero: \n";
    cin>>a;
    cout<<"Escribe otro numero: \n";
    cin>>b;

    // Solicitar al usuario que elija una operaci�n
    cout<<"Ingresa una operacion: \n";
    cout<<"S = suma \n";
    cout<<"R = resta \n";
    cout<<"M = multiplicacion \n";
    cout<<"D = division \n";

    // Realizar la operaci�n correspondiente seg�n el car�cter ingresado
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
