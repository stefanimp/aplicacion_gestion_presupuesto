//
// Created by stefan on 07/08/2023.
//
/**
 * @brief   Definición de la clase Categoria
 * @file    Categoria.cpp
 * @author  Stefan Giovanni Imperato Lozano
 * @version 1.0
 * */
#include "Categoria.h"

/**
 * @brief   Constructor parametrizado de la clase Categoria
 * @details Este constructor es de una clase abstracta, por lo que será llamado por las clases que heredan de este
 * @param[innombre  nombre de la categoría que se creará
 * @param[in]descripcion  descripción de la categoría que se creará
 * @pre     El nombre y la descripción no pueden estar vacíos
 * @post    Manda la parte del objeto Categoria al constructor que lo esté llamando
 * @throws  std::invalid_argument si el nombre está vacío
 * @throws  std::invalid_argument si la descripción está vacía
 * */
Categoria::Categoria(std::string nombre, std::string descripcion):nombre(nombre), descripcion(descripcion)
{
    try{
        if (nombre==""){
            throw std::invalid_argument("Categoria::Categoria, Error, El nombre no puede estar vacio.");
        }
        if (descripcion==""){
            throw std::invalid_argument("Categoria::Categoria, Error, La descripcion no puede estar vacia.");
        }

    } catch (std::invalid_argument &e){
        std::cout<<e.what() <<std::endl;
    }
}

/**
 * @brief   Destructor de la clase Categoria
 * */
Categoria::~Categoria() {

}

/**
 * @brief   Modifica el valor del atributo nombre
 * @param[in]nombre valor que tendrá el atributo nombre
 * @pre El parámetro nombre no puede estar vacio
 * @post    El atributo nombre queda modificado
 * @throw   std::invalid_argument si el parámentro nombre está vacío
 *
 * */
void Categoria::setNombre(std::string nombre) {
    if (nombre == ""){
        throw std::invalid_argument("Categoria::setNombre, Error, El nombre no puede estar vacio");
    }
    this->nombre = nombre;
}

/**
 * @brief   Modifica el valor del atributo descripcion
 * @param[in]descripcion valor que tendrá el atributo descripcion
 * @pre El parámetro descripcion no puede estar vacio
 * @post    El atributo descripcion queda modificado
 * @throw   std::invalid_argument si el parámentro descripcion está vacío
 *
 * */
void Categoria::setDescripcion(std::string descripcion) {
    if (descripcion == ""){
        throw std::invalid_argument("Categoria::Categoria, Error, La descripcion no puede estar vacia.");
    }
    this->descripcion = descripcion;
}

/**
 * @brief   Devuelve el nombre del objeto Categoria
 * @details Es un método abstracto
 * @return  Devuelve un string con el nombre del objeto
 * */
std::string Categoria::getNombre() const {
    return nombre;
}

/**
 * @brief   Devuelve la descripción del objeto Categoria
 * @return  Devuelve un string con la descripcion del objeto
 * */
std::string Categoria::getDescripcion() const {
    return descripcion;
}

/**@brief   Convierte los datos del objeto Categoria en un string con formato csv
 * @details Devuelve un string con el formato Categoria;Nombre;Descripcion;
 * @post    Devuelve la información del objeto en formato CSV
 * @return  Devuelve un string con los datos del objeto en formato CSV
 * */
std::string Categoria::toCSV() const {
    std::stringstream aux;

    aux<<this->getNombre() <<';'
       <<Categoria::getDescripcion() <<';';

    return aux.str();
}

//Recibe strings con el formato //Gategoria;Nombre;Descripcion;
/**
 * @brief   Modifica los valores de un objeto de la clase Categoria a partir de un texto en formato CSV
 * @details Los valores del objeto que ya ha sido creado previamente quedan modificados según los valores del CSV
 * @param[in]cadena string donde están almacenados los nuevos datos del objeto
 * @pre La función de la que venga para cambiar los valores del objeto ha debido cerciorarse de que no se han los datos de más de un objeto
 * @post    Los atributos del objeto quedan modificados
 *
 * */
void Categoria::fromCSV(std::string &cadena) {
    std::stringstream ss(cadena);
    std::string tipo;
    // Esta función es comun para todos las tipos de categorías pero es el mainel que debe coger la cedena y ver de que tipo son para poder crear el objeto.
    std::getline(ss,tipo,';');
    std::getline(ss, nombre, ';');
    std::getline(ss, descripcion, ';');
}