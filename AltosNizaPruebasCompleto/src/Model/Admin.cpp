#include "Admin.h"

Admin::Admin(){
    this->tarifaAdmin = 5000;
    // crearDummyData();
}

void Admin::crearDummyData(){
    Propiedad propUno(1, 1, 120, true);
    // Fundador* x = new Fundador("juan", 1, propUno);
    Fundador * x = new Fundador("nombre", 1, propUno);
    this->propietarios.insert({1, x});

    Propiedad propDos(2, 2, 160, false);
    Fundador* x1 = new Fundador("jose", 2, propDos);
    this->propietarios.insert({2, x1});

    Propiedad propTres(3, 1, 100, true);
    Reventa* x2 = new Reventa("juana", 3, propTres);
    this->propietarios.insert({3, x2});

    Propiedad propCuatro(4, 4, 1120, true);
    Fundador* x3 = new Fundador("juanito", 4, propCuatro);
    this->propietarios.insert({4, x3});

    Propiedad propCinco(6, 2, 120, false);
    Reventa* x4 = new Reventa("juance", 5, propCinco);
    this->propietarios.insert({5, x4});

    Propiedad propSeis(6, 1, 10, true);
    Reventa* x5 = new Reventa("juanpa", 6, propSeis);
    this->propietarios.insert({6, x5});
}

float Admin::recaudarAdmin(){
    float recaudo = 0;
    int i;
    for(i = 1; i < propietarios.size() + 1; i++){
        recaudo += this->propietarios[i]->calcularPagoAdmin(tarifaAdmin);
    }
    cout << recaudo << endl;
    return recaudo;
}

float Admin::recaudoIndividual(int id){
    float total = this->propietarios[id]->calcularPagoAdmin(tarifaAdmin);
    return total;
}

void Admin::mostrarBeneficios(int id){
    int check = -1, int i;
    for( int i = 1; i < propietarios.size() + 1; i++){
        int temp = this->propietarios[i]->getID();
        if ( temp == id ){
            check = 1;
        }
    }
    if (check == -1 ){
        throw std::domain_error("La id no existe\n");
    }
    if (id < 0 ){
        throw std::domain_error("La id no es valida\n");
    }
    try{
        this->propietarios[id]->mostrarBeneficios();
    } catch(istream::failure) {
        throw std::domain_error("La id debe ser un valor numerico\n");
    }
}

string Admin::mostrarPropParqueadero(){
    int i;
    string a;
    for(i = 1; i < propietarios.size() + 1; i++){
        if(this->propietarios[i]->getPropiedad().getParqueadero()){
            cout << this->propietarios[i]->getNombre() << endl;
            string a = this->propietarios[i]->getNombre();
        }
    }
    // test
    return a;
}

string Admin::cambiarTipoPropietario(int id,  int idNuevoProp, string nuevoProp){
    if (id < 0 || idNuevoProp < 0){
        throw std::domain_error("La id no es valida\n");
    }
    for( int i = 1; i < propietarios.size() + 1; i++){
        int temp = this->propietarios[i]->getID();
        if ( temp == idNuevoProp ){
            throw std::domain_error("La id del nuevo user no es valida\n");
        }
    }
    Propiedad propiedad = this->propietarios[id]->getPropiedad();
    Propietario * pFundador = this->propietarios[id];
    delete(pFundador); // Se elimina el propietario fundador
    this->propietarios.erase(id); // Se elimina también del mapa

    Reventa* pReventa = new Reventa(nuevoProp, idNuevoProp, propiedad);
    this->propietarios.insert({id, pReventa});
    return 'done.';
}
