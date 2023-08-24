
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 34

// Problema planteado:Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>

int main(){
    int c,n,c1,sum;


    // Solicitar al usuario el número de términos a mostrar
    cout<<"Introduce el numero n de terminos a mostrar: \n";
    cin>>n;
    c=1;
    c1=0;
    cout<<"La sucesion es: \n";
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<c<<" ";
        }
        else
        {
            if(i==2)
            {
                cout<<", "<<c;
            }
            else
            {
                sum=c;
                // Calcular la suma de los dígitos de "sum"
                while(sum>0)
                {
                    c1=c1+sum%10;
                    sum=sum/10;
                }
                c=c+c1;
                c1=0;
                cout<<", "<<c;
            }
        }
    }
    cout<<"\n";
    system("pause");
    return 0;
}
