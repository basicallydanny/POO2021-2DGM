#ifndef CASINO_CARRERACABALLOS_H
#define CASINO_CARRERACABALLOS_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class CarreraCaballos:public Juego {
protected:
    int caballoJugador;
    int cMorado, cVerde, cAmarillo, cAzul, cRojo;
    float calcularResultado(float gonzosApostar) override;

public:
    float jugar(float gonzosApostar, int apuesta) override;
        virtual ~CarreraCaballos();
};

#endif //CASINO_CARRERACABALLOS_H
