#ifndef VIEW_H
#define VIEW_H

#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

const int CAP = 10;

class View{
private:
    int cantidadRec;
    int cantidadTri;
    int cantidadCir;
    Rectangulo arrRectangulos[CAP];
    Triangulo arrTriangulos[CAP];
    Circulo arrCirculos[CAP];

public:           
    View(); 
    void mostrarMenu();
    void agregarRectangulos(); 
    void agregarTriangulos(); 
    void agregarCirculos(); 
    void agregarFiguraGrande();
    void mostrarTriangulos();
    void mostrarRectangulos();
    void mostrarCirculos();
    void mostrarFiguraGrande();
};

#endif