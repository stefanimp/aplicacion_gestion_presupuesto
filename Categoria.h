//
// Created by stefan on 07/08/2023.
//
#include <string>
#include <stdexcept>
#include <iostream>

#ifndef CONTROL_DE_GASTOS_CATEGORIA_H
#define CONTROL_DE_GASTOS_CATEGORIA_H

#include "sstream"

class Categoria{
private:
    std::string nombre = "";
    std::string descripcion = "";
public:
    //Constructores y destructores
    Categoria() = default;
    Categoria(std::string nombre, std::string descripcion);
    virtual ~Categoria();
    //Getters y setters
    void setNombre(std::string nombre);
    void setDescripcion(std::string descripcion);
    virtual std::string getNombre() const = 0;
    std::string getDescripcion() const;

    const int CANTIDAD_CATEGORIAS = 2;
    const std::string *TIPOS = new std::string ("Gasto","Ingreso");
    //Otros métodos
    virtual std::string toCSV() const;
    void fromCSV(std::string &cadena);

};

#endif //CONTROL_DE_GASTOS_CATEGORIA_H
