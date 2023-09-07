//
// Created by stefan on 08/08/2023.
//
#include "Ingreso.h"

/**
 * @brief   Constructor parametrizado de la clase Ingreso
 * @details Este constructor llama al constructor parametrizado de la clase padre Categoria
 * @param[in]nombre nombre del ingreso que se creará
 * @param[in]descripcion    descripción del ingreso que se creará
 * @pre el nombre y la descripción no pueden estar vacíos
 * @post    El objeto queda creado
 * */
Ingreso::Ingreso(std::string nombre, std::string descripcion): Categoria(nombre, descripcion) {

}

/**
 * @brief   Destructor de la clase Ingreso
 * */
Ingreso::~Ingreso() noexcept {

}

/**
 * @brief   Devuelve la Categoria y el nombre del objeto
 * @details Definición del método abstracto getNombre de la clase Categoria
 * */
std::string Ingreso::getNombre() const {
    return Categoria::TIPOS[1] + ';' + Categoria::getNombre();
}


