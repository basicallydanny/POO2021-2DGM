#include "Reventa.h"

Reventa::Reventa(){
    descuentoGimnasio = 0.05;
    this->name = "NA"; this->identificacion = "NA";
}

Reventa::Reventa(string n, string id, Propiedad p){
    descuentoGimnasio = 0.05;
    this->name = n; this->identificacion = id; this->propiedad = p;
}

void Reventa::mostrarBeneficios() {
    cout << "Descuento en gimnasio del %" << descuentoGimnasio * 100 << ".";
}

Reventa::~Reventa() = default;