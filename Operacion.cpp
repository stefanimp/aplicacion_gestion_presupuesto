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
    if(tipo == nullptr){        //TODO manejar esta excepción en el main con un dynamic cast indicando que si aparece una excepción de este tipo, dicha operación se debe detruir y no aparecer más en el fichaero donde se guarden las operacioens
        throw EmptyCategory();
    }

    std::stringstream aux;

    aux<<nombre <<";"
    <<cantidad_monetaria <<";"
    <<descripcion <<";"
    <<tipo->getNombre() <<";";

    return aux.str();

}

void Operacion::fromCSV(std::string &cadena, Categoria **tipos, int cantidad_tipos) {
    std::stringstream ss(cadena);
    std::string categoria;
    std::string nombre_operacion;

    std::getline(ss,nombre,';');
    ss>>cantidad_monetaria;
    ss.ignore( );
    std::getline(ss, descripcion, ';');
    std::getline(ss,categoria,';');
    std::getline(ss, nombre_operacion, ';');
    std::string tipo_categoria = categoria + ';' + nombre_operacion;

    for (int i = 0; i < cantidad_tipos; ++i) {
        if (tipo_categoria == tipos[i]->getNombre()){
            tipo = tipos[i];        //TODO comprobar si está bien el algoritmo y que se refencia bien la dirección de memoria
        }
    }
    if(tipo = nullptr){ //TODO manejar esta excepción en el main
        throw std::invalid_argument("Operacion::fromCSV, Error, no se ha encontrado el tipo de operacion.");
    }

    std::cout<< ss.str();
}
