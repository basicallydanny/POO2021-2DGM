#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

using std::string;

#include "Propiedad.h"

class Propietario{
protected:
    string name;
    string identificacion;
    Propiedad propiedad;

public:
    virtual void mostrarBeneficios() = 0;
};

#endif PROPIETARIO_H