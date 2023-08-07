//
// Created by stefan on 07/08/2023.
//

#ifndef CONTROL_DE_GASTOS_FECHA_H
#define CONTROL_DE_GASTOS_FECHA_H

#include "string"
#include "ctime"
#include "stdexcept"
#include "iostream"

const int NUM_MESES_31_DIAS = 7;
const int MAX_DIAS_MES = 31;
const int MIN_DIAS_MES = 01;
const int MAX_MESES = 12;
const int MIN_MESES = 01;

class Fecha{
private:
    int dia = 00;    //Formato xx
    int mes = 01;    //Formato xx
    int agno = 1900;   //Formato xxxx
    std::string dia_semana = "";
public:
    //Constroctores y destructores
    Fecha();
    Fecha(int dia, int mes, int agno);
    Fecha(const Fecha &original);
    ~Fecha();
    //Getters y setters
    void setDia(int dia);
    void setMes(int mes);
    void setAgno(int agno);
    void setDiaSemanna(std::string dia_semana);
    int getDia() const;
    int getMes() const;
    int getAgno() const;
    std::string getDiaSemana() const;

};

#endif //CONTROL_DE_GASTOS_FECHA_H
