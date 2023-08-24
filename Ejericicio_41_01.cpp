
// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 41

// Problema planteado:Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en
//función a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que
//trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al
//doble de una hora normal, considere además un descuento del 5% a todos los obreros
//para pagar su prima de seguro. Por lo tanto determine: el pago total y el pago neto por
//cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la
//prima de manera general.
#include <iostream>

int main(){
    int n,h,a[100];
    // Solicitar la cantidad de obreros y el pago por hora
    float bruh, net;

    // Solicitar la cantidad de obreros y el pago por hora
    cout<<"Introduce la cantidad de obreros: \n";
    cin>>n;
    cout<<"Introduce cuanto ganaran los obreros por hora: \n";
    cin>>h;

    // Solicitar las horas trabajadas por cada obrero
    for(int i=0;i<=n-1;i++){
        cout<<"Cuantas horas trabajo el obrero "<<i+1<<" ?:\n";
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<"Obrero "<<i+1<<" :\n";
        if(a[i]<40){
            cout<<"Pago total: "<<a[i]*h<<"\n";
            cout<<"Pago neto: "<<a[i]*h*0.95<<"\n";
            bruh=bruh+a[i]*h;
            net=net+a[i]*h*0.05;
        }
        else{
            cout<<"Pago total: "<<(40+(a[i]-40)*2)*h<<"\n";
            cout<<"Pago neto: "<<(40+(a[i]-40)*2)*h*0.95<<"\n";
            bruh=bruh+(40+(a[i]-40)*2)*h;
            net=net+(40+(a[i]-40)*2)*h*0.05;
        }
    }
    cout<<"El pago total a todos los obreros sera: "<<bruh<<"\n";
    cout<<"El pago neto a todos los obreros sera: "<<bruh*0.95<<"\n";
    cout<<"El total retenido por la prima sera: "<<net<<"\n";
    system("pause");
    return 0;
}
