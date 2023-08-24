// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 33

// Problema planteado:Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días.
#include <iostream>

int main()
{
    int d1,m1,a1,d2,m2,a2,difd,difm,difa;

    cout<<"Introduce la primera fecha: \n";
    cout<<"Dia: "; cin>>d1;
    cout<<"Mes: "; cin>>m1;
    cout<<"Ano: "; cin>>a1;
    cout<<"Introduce la segunda fecha: \n";
    cout<<"Dia: "; cin>>d2;
    cout<<"Mes: "; cin>>m2;
    cout<<"Ano: "; cin>>a2;
    difd=30-d1+d2;
    difm=12-m1+m2;
    difa=a2-a1;
    if(difd>=30){
        difm=difm+1;
        difd=difd-30;
    }
     if(difm>=12){
        difa=difa+1;
        difm=difm-12;
    }
    cout<<"La diferencia de fechas es: \n";
    cout<<difa<<" anos "<<difm<<" meses "<<difd<<" dias \n";
    system("pause");
    return 0;
}
