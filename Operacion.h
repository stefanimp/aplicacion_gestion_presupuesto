//
// Created by stefan on 07/08/2023.
//

#ifndef CONTROL_DE_GASTOS_OPERACION_H
#define CONTROL_DE_GASTOS_OPERACION_H

#include "Categoria.h"

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
    void fromCSV(std::string &cadena);

};

#endif //CONTROL_DE_GASTOS_OPERACION_H
