//
// Created by stefan on 08/08/2023.
//
#include "Operacion.h"

Operacion::Operacion(std::string nombre, float cantidad_monetaria, std::string descripcion, Categoria *tipo):nombre(nombre), descripcion(descripcion),cantidad_monetaria(cantidad_monetaria), tipo(tipo) {
    try{
        if(nombre == ""){
            throw std::invalid_argument("Operacion::Operacion, Error, el nombre de la operacion no puede estar vacio.");
        }
        if(descripcion == ""){
            throw std::invalid_argument("Operacion::Operacion, Error, el nombre de la operacion no puede estar vacio");
        }
    }catch (std::invalid_argument &e){
        std::cout<<e.what() <<std::endl;
    }
}

Operacion::~Operacion() {

}

void Operacion::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Operacion::setDescripcion(std::string descripcion) {
    this->descripcion = descripcion;
}

void Operacion::setCantMonetaria(float cantidad_monetaria) {
    this->cantidad_monetaria = cantidad_monetaria;
}

void Operacion::setTipo(Categoria *tipo) {
    this->tipo = tipo;
}

std::string Operacion::getNombre() const {
    return nombre;
}

std::string Operacion::getDescripcion() const {
    return descripcion;
}

float Operacion::getCantMonetaria() const {
    return cantidad_monetaria;
}

Categoria *Operacion::getTipo() const {
    return tipo;
}

std::string Operacion::toCSV() const {

}

void Operacion::fromCSV(std::string &cadena) {

}
