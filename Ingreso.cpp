//
// Created by stefan on 08/08/2023.
//
#include "Ingreso.h"

Ingreso::Ingreso(std::string nombre, std::string descripcion): Categoria(nombre, descripcion) {

}

Ingreso::~Ingreso() noexcept {

}

std::string Ingreso::getNombre() const {
    return Categoria::TIPOS[1] + ';' + Categoria::getNombre();
}


