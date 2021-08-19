#include <iostream>
#include "Rectangulo.h"

// Constructor por defecto
Rectangulo::Rectangulo(){
    cout << "Estoy creando un rectangulo vacio...\n";
    this->largo = 0; // Valores por defecto para iniciar las variables de instancia
    this->ancho = 0;
    this->area = 0;
    this->perimetro = 0;
}

Rectangulo::Rectangulo(float ancho , float largo){
    cout << "Estoy creando un rectangulo vacio...\n";
    this->largo = largo; // Valores por defecto para iniciar las variables de instancia
    this->ancho = ancho;
    this->area = 0;
    this->perimetro = 0;
}

float Rectangulo::getLargo(){
    return largo;
}

void Rectangulo::setLargo(float largo){
    this->largo = largo;
}

float Rectangulo::getAncho(){
    return this->ancho;
}

void Rectangulo::setAncho(float ancho){
    this->ancho = ancho;
}

void Rectangulo::calcularPerimetro(){
    this->perimetro = (2 * largo) + (2 * ancho);
}

float Rectangulo::getPerimetro(){
    return this->perimetro;
}

void Rectangulo::calcularArea(){
    this->area = largo * ancho;
}

float Rectangulo::getArea(){
    return this->area;
}

void Rectangulo::mostrarFigura(){
    cout << "Largo: " << largo << "\n";
    cout << "Ancho: " << ancho << "\n";
    cout << "Area: " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}
