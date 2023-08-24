// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 15/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 5

// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )


#include <iostream>
#include <iomanip> // Incluir la biblioteca para el formato de salida
#include <cmath>

struct Point
{
    double x;
    double y;
};

double calculateDistance(const Point& p1, const Point& p2)
{
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main()
{
    Point p1, p2;

    cout << "Ingrese las coordenadas del punto P1 (x y): ";
    cin >> p1.x >> p1.y;

    cout << "Ingrese las coordenadas del punto P2 (x y): ";
    cin >> p2.x >> p2.y;

    double distancia = calculateDistance(p1, p2);

    // Establecer la precisión de salida a 3 decimales
    cout << fixed << setprecision(3);
    cout << "La distancia entre los puntos P1 y P2 es: " << distancia << endl;

    return 0;
}




