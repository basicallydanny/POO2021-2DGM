#include "Propiedad.h"

Propiedad::Propiedad(){
    this->piso = 0;
    this->numero = 0;
    this->area = 0;
    this->tieneParqueadero = { true };
}

Propiedad::Propiedad(int piso, int numero, float area, bool parking){
    this->piso = piso;
    this->numero = numero;
    this->area = area;
    this->tieneParqueadero = parking;
}

float Propiedad::calcularAdministracion( float valorBaseAdmin ){
    return valorBaseAdmin + (2000 * this->piso) + (0.05 * this->area);
}

int Propiedad::getPiso(){
    return this->piso;
}
