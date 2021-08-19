#include <iostream>
#include "Circulo.h"
#include <cmath>

Circulo::Circulo(){
    cout<<"Estoy generando un circulo vacio...\n";
    this->radio = 0;
    this->area = 0;
    this->perimetro =0;
}

Circulo::Circulo(float radio){
    cout<<"Estoy generando un circulo vacio...\n";
    this->radio = radio;
    this->area = 0;
    this->perimetro = 0;
}

float Circulo::getRadio(){
    return radio;
}

void Circulo::setRadio(float radio){
    this->radio = radio;
}

void Circulo::calcularPerimetro(){
    this->perimetro = M_PI * 2 * radio;
}

float Circulo::getPerimetro(){
    return this->perimetro;
}

void Circulo::calcularArea(){
    this->area = M_PI * (pow(radio,2));
}

float Circulo::getArea(){
    return this->area;
}

void Circulo::mostrarFigura(){
    cout << "Radio: " << radio << "\n";
    cout << "Area: " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}
