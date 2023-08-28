//
// Created by stefan on 08/08/2023.
//

#ifndef CONTROL_DE_GASTOS_INGRESO_H
#define CONTROL_DE_GASTOS_INGRESO_H

#include "Categoria.h"

class Ingreso:public Categoria{
public:
    Ingreso() = default;
    Ingreso(std::string nombre, std::string descripcion);
    Ingreso(const Ingreso &original);
    virtual ~Ingreso();
    //Getters y Setters
    std::string getNombre() const override;
};

#endif //CONTROL_DE_GASTOS_INGRESO_H
