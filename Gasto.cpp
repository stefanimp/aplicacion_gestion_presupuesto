//
// Created by stefan on 07/08/2023.
//
#include "Gasto.h"

/**
 * @brief   Constructor parametrizado de la clase Gasto
 * @details Este constructor llama al constructor parametrizado de la clase padre Categoria
 * @param[in]nombre nombre del gasto que se creará
 * @param[in]descripcion    descripción del gasto que se creará
 * @pre el nombre y la descripción no pueden estar vacíos
 * @post    El objeto queda creado
 * */
Gasto::Gasto(std::string nombre, std::string descripcion): Categoria(nombre, descripcion) {

}

/**
 * @brief   Destructor de la clase Gasto
 * */
Gasto::~Gasto() noexcept {

}

/**
 * @brief   Devuelve la Categoria y el nombre del objeto
 * @details Definición del método abstracto getNombre de la clase Categoria
 * */
std::string Gasto::getNombre() const {
    return Categoria::TIPOS[0] + ';' + Categoria::getNombre();
}
