#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <map>
#include "Propietario.h"
#include "Reventa.h"
#include "Fundador.h"

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::map;

class Admin{
    private:

        int tarifaAdmin;
        void crearDummyData();
    public:
        Admin();
        float recaudarAdmin();
        float recaudoIndividual(int id);
        void mostrarBeneficios(int id);
        string mostrarPropParqueadero();
        string cambiarTipoPropietario(int id,  int idNuevoProp, string nuevoProp);
        map<int, Propietario*> propietarios;
};

#endif