#include <iostream>
#include "Triangulo.h"
#include <cmath>

// Constructor por defecto
Triangulo::Triangulo(){
    cout << "Estoy creando un triangulo vacio...\n";
    this->ladoUno = 0;
    this->ladoDos= 0;
    this->ladoTres= 0,
    this->area = 0;
    this->perimetro = 0;
}

Triangulo::Triangulo(float ladoUno, float ladoDos, float ladoTres){
    cout << "Estoy creando un triangulo vacio...\n";
    this->ladoUno = ladoUno;
    this->ladoDos= ladoDos;
    this->ladoTres= ladoTres;
    this->area = (ladoUno * ladoDos * sin(ladoTres)) / 2;
    this->perimetro = 0;
}

float Triangulo::getLadoUno(){
    return ladoUno;
}

void Triangulo::setLadoUno(float ladoUno){
    this->ladoUno = ladoUno;
}

float Triangulo::getLadoDos(){
    return ladoDos;
}

void Triangulo::setLadoDos(float ladoDos){
    this->ladoDos = ladoDos;
}

float Triangulo::getLadoTres(){
    return ladoTres;
}

void Triangulo::setLadoTres(float ladoTres){
    this->ladoTres = ladoTres;
}

void Triangulo::calcularPerimetro(){
    this->perimetro = ladoUno + ladoDos + ladoTres;
}

float Triangulo::getPerimetro(){
    return this->perimetro;
}

void Triangulo::calcularArea(){
    float value = (ladoUno + ladoDos + ladoTres) / 2;
    this->area = sqrt(value*(value-ladoUno)*(value-ladoDos)*(value-ladoTres));
}

float Triangulo::getArea(){
    return this->area;
}

void Triangulo::mostrarFigura(){
    cout << "Lados: " << ladoUno <<" "<< ladoDos <<" "<< ladoTres << "\n";
    cout << "Area: " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}
