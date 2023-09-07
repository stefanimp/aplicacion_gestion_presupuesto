/**
 * @brief Aplicación de control de gastos
 * @file main.cpp
 * @author Stefan Giovanni Imperato Lozano
 * @version 1.0
 * */

#include <iostream>
#include "Fecha.h"
#include "string"

//TODO al crear los objetos de tipo categoría para cargar desde el archivo csv, ir dando nombre y descripcion a estos en función de su posición, ppor si falla algun al hacer el método fromCSV que sea facil de reconocer cual es.

int main() {

    Ingreso *ingreso1 = new Ingreso("Trabajo","Trabjo remoto");
    std::string cadena3 = ingreso1->toCSV();
    std::cout<<cadena3 <<std::endl;

    /*
    std::string fecha1 = "01;01;2023;Miercoles;0;";

    Fecha *fecha_defecha1 = new Fecha();
    fecha_defecha1->fromCSV(fecha1);

    std::cout<<fecha_defecha1->getAgno();
    std::cout <<std::endl;

    Gasto *gasto_prueba = new Gasto("Comida","Compra semanal");

    Operacion *operacion1 = new Operacion();
    operacion1->setTipo(gasto_prueba);
    try{
        operacion1->toCSV();
    }catch (std::bad_alloc &error){
        std::cout<<error.what();
    }

    Gasto *gasto1 = new Gasto();
    std::string cadena2 = "Gasto;Compra Semanal;Compra semanal de comida";

    gasto1->fromCSV(cadena2);
    std::cout<<gasto1->getNombre() <<std::endl;

    std::string cadena1 = "Comida;21.34;Compra semanal;Ingreso;Comida;";
    operacion1->fromCSV(cadena1);


    delete fecha_defecha1;
    fecha_defecha1 = nullptr;
    */
    return 0;
}
