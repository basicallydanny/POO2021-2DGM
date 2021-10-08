#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <iostream>

class Propiedad{
private:
    int piso;
    int numero;
    float area;
    bool tieneParqueadero;

public:
    Propiedad();
    Propiedad(int piso, int numero, float area, bool parking);
    int getPiso();
    float calcularAdministracion( float valorBaseAdmin );
};

#endif //PROPIEDAD_H