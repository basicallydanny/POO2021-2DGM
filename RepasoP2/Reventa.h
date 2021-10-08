#include "Propietario.h"

#ifndef REVENTA_H
#define REVENTA_H

class Reventa : public Propietario {
private:
    float descuentoGimnasio;
    
public:
    virtual void mostrarBeneficios() override;

};

#endif REVENTA_H