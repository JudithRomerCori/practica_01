// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares.

#include <iostream>
#include <cmath>

// Definición de una estructura para representar coordenadas rectangulares
struct CoordenadasRectangulares
{
    double x;
    double y;
};

// Función para convertir coordenadas polares a rectangulares
CoordenadasRectangulares convertirAPolares(double radio, double anguloEnGrados)
{
    CoordenadasRectangulares coordenadas;

    // Convertir el ángulo de grados a radianes
    double anguloEnRadianes = anguloEnGrados * (M_PI / 180.0);

     // Calcular las coordenadas rectangulares utilizando las fórmulas trigonométricas
    coordenadas.x = radio * cos(anguloEnRadianes);
    coordenadas.y = radio * sin(anguloEnRadianes);

    return coordenadas;
}

int main()
{
    double radio, anguloEnGrados;

    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Ingrese el ángulo en grados: ";
    cin >> anguloEnGrados;

    // Llamar a la función convertirAPolares para obtener las coordenadas rectangulares
    CoordenadasRectangulares rectangulares = convertirAPolares(radio, anguloEnGrados);

    cout << "Coordenadas rectangulares: (" << rectangulares.x << ", " << rectangulares.y << ")" << endl;

    return 0;
}
