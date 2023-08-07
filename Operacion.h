//
// Created by stefan on 07/08/2023.
//

#ifndef CONTROL_DE_GASTOS_OPERACION_H
#define CONTROL_DE_GASTOS_OPERACION_H

#include "Categoria.h"
#include "Fecha.h"

class Operacion{
private:
    std::string nombre = "";
    float cantidad_monetaria = 0;   //POr defecto ene euros
    std::string descripcion = "";
    Fecha fecha;
    Categoria *tipo = nullptr;

};

#endif //CONTROL_DE_GASTOS_OPERACION_H
