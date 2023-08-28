//
// Created by stefan on 07/08/2023.
//

#ifndef CONTROL_DE_GASTOS_GASTO_H
#define CONTROL_DE_GASTOS_GASTO_H

#include "Categoria.h"

class Gasto: public Categoria{
public:
    //Constructores y destructores
    Gasto() = default;
    Gasto(std::string nombre, std::string descripcion);
    virtual ~Gasto();
    //Getters y Setters
    std::string getNombre() const override;

};

#endif //CONTROL_DE_GASTOS_GASTO_H
