#include "Fundador.h"

Fundador::Fundador(string nombre, int id, Propiedad &propiedad) : Propietario(nombre, id, propiedad) {}

int Fundador::mostrarBeneficios(){
    int beneficios = 2;
    cout << "1. Derecho a usar el salón social de manera gratuita." << endl 
        << "2. Descuento del 1 para la compra de productos en la tienda del edificio." << endl;
    // test
    return beneficios;
}


