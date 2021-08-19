#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

class Circulo{
private: //Atributos
    float radio, perimetro, area;

public:           //Metodos
    Circulo(); //Constructor
    Circulo(float radio); //Constructor V2
    void calcularPerimetro();
    void calcularArea();

    // Gets and sets
    void mostrarFigura();
    float getRadio(); 
    void setRadio(float radio); 
    float getPerimetro();
    float getArea();
};

#endif