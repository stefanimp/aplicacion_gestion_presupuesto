//
// Created by stefan on 07/08/2023.
//

#ifndef CONTROL_DE_GASTOS_OPERACION_H
#define CONTROL_DE_GASTOS_OPERACION_H

#include "EmptyCategory.h"
#include <exception>
#include "Categoria.h"
#include "Gasto.h"
#include "Ingreso.h"
#include "string"
#include "iostream"
#include "sstream"

class Operacion{
private:
    std::string nombre = "";
    float cantidad_monetaria = 0;   //Por defecto ene euros
    std::string descripcion = "";
    Categoria *tipo = nullptr;
public:
    //Constructores y destructores
    Operacion() = default;
    Operacion(std::string nombre, float cantidad_monetaria, std::string descripcion, Categoria *tipo);
    Operacion(const Operacion &original);
    ~Operacion();
    //Getters y setters
    void setNombre(std::string nombre);
    void setCantMonetaria(float cantidad_monetaria);
    void setDescripcion(std::string descripcion);
    void setTipo(Categoria *tipo);
    std::string getNombre() const;
    float getCantMonetaria() const;
    std::string getDescripcion() const;
    Categoria* getTipo() const;
    //Otros métodos
    std::string toCSV() const;
    void fromCSV(std::string &cadena, Categoria **tipos, int cantidad_tipos);

};

#endif //CONTROL_DE_GASTOS_OPERACION_H
