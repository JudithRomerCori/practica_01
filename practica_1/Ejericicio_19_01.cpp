// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares.

#include <iostream>
#include <cmath>

// Definici�n de una estructura para representar coordenadas rectangulares
struct CoordenadasRectangulares
{
    double x;
    double y;
};

// Funci�n para convertir coordenadas polares a rectangulares
CoordenadasRectangulares convertirAPolares(double radio, double anguloEnGrados)
{
    CoordenadasRectangulares coordenadas;

    // Convertir el �ngulo de grados a radianes
    double anguloEnRadianes = anguloEnGrados * (M_PI / 180.0);

     // Calcular las coordenadas rectangulares utilizando las f�rmulas trigonom�tricas
    coordenadas.x = radio * cos(anguloEnRadianes);
    coordenadas.y = radio * sin(anguloEnRadianes);

    return coordenadas;
}

int main()
{
    double radio, anguloEnGrados;

    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Ingrese el �ngulo en grados: ";
    cin >> anguloEnGrados;

    // Llamar a la funci�n convertirAPolares para obtener las coordenadas rectangulares
    CoordenadasRectangulares rectangulares = convertirAPolares(radio, anguloEnGrados);

    cout << "Coordenadas rectangulares: (" << rectangulares.x << ", " << rectangulares.y << ")" << endl;

    return 0;
}
