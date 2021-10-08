#include "Administracion.h"

Administracion::Administracion (){
    valorBaseAdmin = 50;
    Propiedad Uno(8, 801, 150, true);
    Propiedad Dos(2, 204, 120.5, false);
    Fundador Maria("Maria Rosas", "01", Uno);
    Reventa Teresa("Teresa Montes", "02", Dos);

    /*propietarios.push_back(Maria);
    propietarios.push_back(Teresa); PREGUNTAR !!*/
}

void Administracion::recaudarAdministracion(){
    int totalRecaudo = 0; // int i = 0;
    for (vector<Propietario>::iterator pPropietarios = propietarios.begin();
         pPropietarios != propietarios.end(); pPropietarios++){
        totalRecaudo += pPropietarios->propiedad.calcularAdministracion( valorBaseAdmin );
        // ALTERNATIVA: propietarios[i].propiedad.calcularAdministracion(valorBaseAdmin); i++;
    }
    cout << "El total recaudado es:" << totalRecaudo;
}

void Administracion::mostrarBeneficios(){
  // TO-DO: Preguntar si mostrar beneficios generales (fundador y reventa) o por cada propietario?

    for (vector<Propietario>::iterator pPropietarios = propietarios.begin();
         pPropietarios != propietarios.end(); pPropietarios++){
        cout << "Beneficios de" << pPropietarios->getName() << "del" << pPropietarios->propiedad.getPiso();
        pPropietarios->mostrarBeneficios(); cout << "\n";
    }
}
