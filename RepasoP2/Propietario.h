#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

using std::string;
using std::cout;

#include "Propiedad.h"

class Propietario{
protected:
    string name;
    string identificacion;

public:
    Propiedad propiedad;
    virtual ~Propietario();
    string getName();
    virtual void mostrarBeneficios() = 0;
};

#endif //PROPIETARIO_H