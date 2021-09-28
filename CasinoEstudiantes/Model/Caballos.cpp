#include "Caballos.h"

/*Se pierde la cantidad apostada, pero se gana la cantidad apostada de gonzos
 multiplicada por el número de las apuestas en contra del caballo */

enum coloresCaballos { cMorado = 9, cAmarillo = 6, cAzul = 3, cRojo = 4, cVerde = 12 };

float CarreraCaballos::jugar(float gonzosApostar){
    float gonzosResultado; int caballoJugador; int opc;
    srand(time(NULL));
    cout << "\nSELECCIONE UN CABALLO:\n"
         << "1. Azul - "" (9/1)\n"
         << "2. Rojo - "" (6/1)\n"
         << "3. Amarillo - "" (3/1)\n"
         << "4. Morado - "" (4/1)\n"
         << "5. Verde - "" (12/1)\n"
         << "OPC:";
    cin >> opc;
    switch ( opc ){
        case 1:
            caballoJugador = cMorado; break;
        case 2:
            caballoJugador = cAmarillo; break;
        case 3:
            caballoJugador = cAzul; break;
        case 4:
            caballoJugador = cMorado; break;
        case 5:
            caballoJugador = cVerde; break;
    }

    bool ganadorCasino = (rand() % 100) < caballoJugador;

    if( ganadorCasino == true ){
        cout << "Su caballo ha ganado ." << endl;
        gonzosResultado = calcularResultado(gonzosApostar, caballoJugador);
        return gonzosResultado;
    } else {
        cout << "Su caballo ha perdido." << endl;
        gonzosResultado = 0;
        return gonzosResultado;
    }
}

float coloresCaballos::calcularResultado(float gonzosApostar, int apuesta) {
    return apuesta * gonzosApostar;
}

CarreraCaballos::~CarreraCaballos() noexcept {}{