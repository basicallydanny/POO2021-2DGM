cmake_minimum_required(VERSION 3.20)
project(RepasoP2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(RepasoP2
        Administracion.cpp
        Administracion.h
        Fundador.cpp
        Fundador.h
        Propiedad.cpp
        Propiedad.h
        Propietario.cpp
        Propietario.h
        Reventa.cpp
        Reventa.h)
