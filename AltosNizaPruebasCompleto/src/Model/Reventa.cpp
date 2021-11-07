#include "Reventa.h"


Reventa::Reventa(string nombre, int id, Propiedad &propiedad) : Propietario(nombre, id, propiedad) {}

int Reventa::mostrarBeneficios(){
    int beneficios = 1;
    cout << "1. Descuento el 0,05 en la mensualidad del gimnasio." << endl;
    // test
    return beneficios;
}