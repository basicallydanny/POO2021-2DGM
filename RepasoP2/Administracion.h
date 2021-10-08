#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include <string>
#include <vector>

#include "Propietario.h"

using namespace std;
using std::vector;

class Administracion{
private:
    float valorBaseAdmin;
    vector <Propietario> propietarios;

public:
    void recaudarAdministracion();
    void mostrarBeneficios();
};

#endif ADMINISTRACION_H