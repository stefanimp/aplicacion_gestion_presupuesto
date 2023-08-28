//
// Created by stefan on 07/08/2023.
//
#include "Categoria.h"

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

Categoria::~Categoria() {

}

void Categoria::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Categoria::setDescripcion(std::string descripcion) {
    this->descripcion = descripcion;
}

std::string Categoria::getNombre() const {
    return nombre;
}

std::string Categoria::getDescripcion() const {
    return descripcion;
}

std::string Categoria::toCSV() const {
    std::stringstream aux;

    aux<<this->getNombre() <<';'
       <<Categoria::getDescripcion() <<';';

    // debe devolver un string con el formato Categoria;Nombre;Descripcion;
    return aux.str();
}

//Recibe strings con el formato //Gategoria;Nombre;Descripcion;
void Categoria::fromCSV(std::string &cadena) {
    std::stringstream ss(cadena);
    std::string tipo;
    // Esta función es comun para todos las tipos de categorías pero es el mainel que debe coger la cedena y ver de que tipo son para poder crear el objeto.
    std::getline(ss,tipo,';');
    std::getline(ss, nombre, ';');
    std::getline(ss, descripcion, ';');
}