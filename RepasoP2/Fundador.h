#include "Propietario.h"

#ifndef FUNDADOR_H
#define FUNDADOR_H

class Fundador : public Propietario {
private:
    float descuentoTienda;
    bool gratisSalonSolial;
    
public:
    virtual void mostrarBeneficios() override;

};

#endif FUNDADOR_H