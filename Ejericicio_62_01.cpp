// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 62

// Problema planteado:En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales
//al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen
//2 pañales diarios. Se desea conocer el consumo total de pañales diarios.
#include <iostream>

int main(){
    // 'b' se inicializa en 0 para llevar un registro del total de pañales consumidos.

    int a,b;
    for(int i=1;i<=25;i++){
            // Manejo de caso de edad no válida.
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
