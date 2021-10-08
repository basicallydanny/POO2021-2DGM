#include "Propietario.h"

#ifndef REVENTA_H
#define REVENTA_H

class Reventa : public Propietario {
private:
    float descuentoGimnasio;
    
public:
    Reventa();
    Reventa(string n, string id, Propiedad p);
    virtual ~Reventa();
    virtual void mostrarBeneficios() override;
};

#endif REVENTA_H