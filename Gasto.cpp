//
// Created by stefan on 07/08/2023.
//
#include "Gasto.h"

Gasto::Gasto(std::string nombre, std::string descripcion): Categoria(nombre, descripcion) {

}

Gasto::~Gasto() noexcept {

}

std::string Gasto::getNombre() const {
    return "Gasto:" + Categoria::getNombre();
}
