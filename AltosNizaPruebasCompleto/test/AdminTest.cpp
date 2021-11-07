//
// Created by lufe0 on 3/11/2021.
//
// Edited by basicdanny on 4/11/2021.
//

// #include "gtest/gtest.h
#include "C:\Users\danie\Desktop\JAVE\POO2021-2DGM\AltosNizaPruebasCompleto\lib\googleTest\googletest\include\gtest\gtest.h"
// No encontraba el archivo al colocar solo #include "gtest/gtest.h" :(
#include "../src/Model/Admin.h"

// ----------------------------------------------------------------------
// •	Conocer el valor a pagar por administración dado la identificación del propietario.

TEST(AdminTest, recaudarAdmin){
    Admin admin;
    Propiedad propUno(1, 1, 120, true);
    Fundador * x = new Fundador("CAMILO", 1, propUno);
    admin.propietarios.insert({1, x});
    float resultado = admin.recaudoIndividual(1);
    EXPECT_EQ( 52000, resultado );
};


// •	CambiarTipoPropietario. Un propietario fundador le vende a un propietario de reventa.
// En esos casos se elimina el propietario fundador y se crea un nuevo propietario de reventa con los datos del nuevo.

TEST(AdminTest, cambiarTipoPropietario){
    Admin admin;
    string respuesta = 'done.';
    Propiedad propUno(1, 1, 120, true);
    Fundador * x = new Fundador("CAMILO", 1, propUno);
    admin.propietarios.insert({1, x});
    string acabado = admin.cambiarTipoPropietario(1,  2, 'CAMILA');
    EXPECT_EQ( respuesta, acabado );
};


// •	Imprimir para cada propietario los beneficios a los que tiene derecho.
// En particular el administrador quiere una cadena de texto que indique los beneficios.

TEST(AdminTest, mostrarBeneficios){
    Admin admin;
    Propiedad propUno(1, 1, 120, true);
    Fundador * x = new Fundador("CAMILO", 1, propUno);
    admin.propietarios.insert({1, x});
    int beneficio = admin.mostrarBeneficios(1);
    EXPECT_EQ( 2, beneficio );
};


// •	Conocer el valor recaudado por administración para todo el edificio.

TEST(AdminTest, mostrarBeneficios){
    Admin admin;
    Propiedad propUno(1, 1, 120, true);
    Fundador * x = new Fundador("CAMILO", 1, propUno);
    admin.propietarios.insert({1, x});
    Propiedad propDos(2, 2, 160, false);
    Fundador * x1 = new Fundador("CAMILA", 2, propDos);
    admin.propietarios.insert({2, x1});

    // CAMILO = 2000 (* PISO 1) + 50000 (BASE) = 52000
    // CAMILA = 2000 (* PISO 2) + 50000 (BASE) + 5% DE LA BASE  = 56500
    // RECAUDADO = 108500

    float recaudar = admin.recaudarAdmin();
    EXPECT_EQ( 108500, recaudar );
}


// •	Ver la lista de propietarios de propiedades que tienen parqueadero.

TEST(AdminTest, mostrarPropParqueadero){
    Admin admin;
    string name;
    string parkingName;
    Propiedad propUno(1, 1, 120, true);
    Fundador * x = new Fundador("CAMILO", 1, propUno);
    admin.propietarios.insert({1, x});
    Propiedad propDos(2, 2, 160, false);
    Fundador * x1 = new Fundador("CAMILA", 2, propDos);
    admin.propietarios.insert({2, x1});
    name = 'CAMILO';
    parkingName = admin.mostrarPropParqueadero();
    EXPECT_EQ( name, parkingName );
}
