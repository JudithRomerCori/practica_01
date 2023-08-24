// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 62

// Problema planteado:En una guarder�a hay 25 ni�os de 1, 2 y 3 a�os. Los ni�os de 1 a�o consumen 6 pa�ales
//al d�a, los ni�os de 2 a�os consumen 3 pa�ales diarios y los ni�os de 3 a�os consumen
//2 pa�ales diarios. Se desea conocer el consumo total de pa�ales diarios.
#include <iostream>

int main(){
    // 'b' se inicializa en 0 para llevar un registro del total de pa�ales consumidos.

    int a,b;
    for(int i=1;i<=25;i++){
            // Manejo de caso de edad no v�lida.
        cout<<"Edad del nino "<<i<<" :\n";
        cin>>a;
        if(a==1){
            b=b+6;
        }else if(a==2){
            b=b+3;
        }else if(a==3){
            b=b+2;
        }else{
            cout<<"Edad del nino no corresponde \n";
            cout<<" \n";
        }
    }
    cout<<"El total de panales consumidos es: "<<b<<" \n";
    system("pause");
    return 0;
}
