#ifndef CASINO_CARRERACABALLOS_H
#define CASINO_CARRERACABALLOS_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class CarreraCaballos:public Juego {
private:
    bool ganadorCasino;
protected:
    int caballoJugador;
    float calcularResultado(float gonzosApostar) override;

public:
    float jugar(float gonzosApostar) override;
        virtual ~CarreraCaballos();
};

#endif //CASINO_CARRERACABALLOS_H
