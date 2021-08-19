#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include <stdlib.h>

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;

class Rectangulo{
private: //Atributos
    float largo, ancho, perimetro, area;

public:           //Metodos
    Rectangulo(); //Constructor
    Rectangulo(float ancho, float largo); //Constructor V2
    void calcularPerimetro();
    void calcularArea();

    // Gets and sets
    void mostrarFigura();
    float getLargo();
    void setLargo(float largo);
    float getAncho();
    void setAncho(float ancho);
    float getPerimetro();
    float getArea();
};

#endif