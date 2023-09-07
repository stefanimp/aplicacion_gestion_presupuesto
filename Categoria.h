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
    //Constantes
    /**
     * @brief   Constante que dicta el número de clases que heredan de la clase Categoria
     * @warning Este numero debe ser incrementado o decrementado en caso de que se introduzcan o eliminen clases hijas de la clase Categoria
     * */
    const int CANTIDAD_CATEGORIAS = 2;
    /**
     * @brief   Constante vector de string donde se almacena el nombre de las clases que derivan de la clase Categoria
     * @warning Este vector debe ser modificado en caso de que se añadan o eliminen nuevas clases hijas de Categoria
     * */
    const std::string *TIPOS = new std::string ("Gasto","Ingreso");
    //Otros métodos
    virtual std::string toCSV() const;
    void fromCSV(std::string &cadena);

};

#endif //CONTROL_DE_GASTOS_CATEGORIA_H
