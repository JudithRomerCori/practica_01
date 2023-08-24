// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 18/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 11

// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato civil. Se paga por categor�a de acuerdo con la siguiente tabla. Categoria(A,B,C),PermanenteA(25%,20%,15%),Contrato CivilA(18%,14%,12%). Calcule el total ganado siendo el salario por hora de 150 Bs por hora. Se debe ingresar cuantas horas a la semana pasa clases y en que categor�a est�.

#include <iostream>

const double SALARIO_POR_HORA = 150.0;  // Salario por hora fijo

int main()
{
    int horasSemanales;
    char categoria;


    cout << "Ingrese la cantidad de horas a la semana que pasa clases: ";
    cin >> horasSemanales;

    cout << "Ingrese la categor�a (A, B o C): ";
    cin >> categoria;

    double salarioTotal = SALARIO_POR_HORA * horasSemanales;  // Calcular el salario total sin bono
    double porcentajeBono = 0.0;  // Porcentaje de bono por defecto

    // Determinar el porcentaje de bono seg�n la categor�a
    switch (categoria)
    {
        case 'A':
            porcentajeBono = 0.25;  // 25% de bono para categor�a A (Permanente)
            break;
        case 'B':
            porcentajeBono = 0.20;  // 20% de bono para categor�a B (Permanente)
            break;
        case 'C':
            porcentajeBono = 0.15;  // 15% de bono para categor�a C (Permanente)
            break;
        case 'D':
            porcentajeBono = 0.18;  // 18% de bono para categor�a D (Contrato Civil)
            break;
        case 'E':
            porcentajeBono = 0.14;  // 14% de bono para categor�a E (Contrato Civil)
            break;
        case 'F':
            porcentajeBono = 0.12;  // 12% de bono para categor�a F (Contrato Civil)
            break;
        default:
            cout << "Categor�a no v�lida." << endl;
            return 1;
    }

    // Calcular el total ganado (salario total m�s bono por categor�a)
    double totalGanado = salarioTotal + (salarioTotal * porcentajeBono);

    // Mostrar resultados
    cout << "Salario total: " << salarioTotal << " Bs." << endl;
    cout << "Total ganado (incluyendo bono por categor�a): " << totalGanado << " Bs." << endl;

    return 0;
}
