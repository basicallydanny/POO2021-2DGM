#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

class Triangulo{
private: //Atributos
    float ladoUno, ladoDos, ladoTres, perimetro, area;

public:           //Metodos
    Triangulo(); //Constructor
    Triangulo(float ladoUno, float ladoDos, float ladoTres); //Constructor
    void calcularPerimetro();
    void calcularArea();

    // Gets and sets
    void mostrarFigura();
    float getLadoUno(); float getLadoDos(); float getLadoTres();
    void setLadoUno(float ladoUno); void setLadoDos(float LadoDos); void setLadoTres(float LadoTres);
    float getPerimetro();
    float getArea();
};

#endif