#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include <string>
#include <vector>

#include "Propietario.h"
#include "Fundador.h"
#include "Reventa.h"

using namespace std;
using std::cout;
using std::vector;

class Administracion{
private:
    float valorBaseAdmin;
    vector <Propietario> propietarios;

public:
    Administracion();
    void recaudarAdministracion();
    void mostrarBeneficios();
};

#endif //ADMINISTRACION_H