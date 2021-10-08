#include "Propietario.h"

#ifndef FUNDADOR_H
#define FUNDADOR_H

class Fundador : public Propietario {
private:
    float descuentoTienda;
    bool gratisSalonSocial;
    
public:
    Fundador();
    Fundador(string n, string id, Propiedad p);
    virtual ~Fundador();
    virtual void mostrarBeneficios() override;
};

#endif //FUNDADOR_H