#include "Fundador.h"

Fundador::Fundador(){
    gratisSalonSocial = { true };
    descuentoTienda = 0.01;
    this->name = "NA"; this->identificacion = "NA";
}

Fundador::Fundador(string n, string id, Propiedad p){
    gratisSalonSocial = { true };
    descuentoTienda = 0.01;
    this->name = n; this->identificacion = id; this->propiedad = p;
}

void Fundador::mostrarBeneficios() {
    if ( gratisSalonSocial )
        cout << "Salon Social gratis.\n" ;
    cout << "Descuento en tiendas del %" << descuentoTienda * 100 << ".";
}

Fundador::~Fundador() = default;