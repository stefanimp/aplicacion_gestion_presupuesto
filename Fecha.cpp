//
// Created by stefan on 07/08/2023.
//
#include "Fecha.h"

Fecha::Fecha() {
    // Obtener la fecha y hora actual del sistema
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    // Asignar los valores de día, mes y año actuales al objeto Fecha
    dia = now->tm_mday;
    mes = now->tm_mon + 1; // El valor de tm_mon es 0 para enero, 1 para febrero, etc.
    agno = now->tm_year + 1900; // El valor de tm_year es el número de años desde 1900

    // Puedes asignar el nombre del día de la semana también si lo deseas
    // Los valores de tm_wday son 0 para domingo, 1 para lunes, etc.
    std::string dias_semana[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    dia_semana = dias_semana[now->tm_wday];
}

Fecha::Fecha(int dia, int mes, int agno):dia(dia), mes(mes), agno(agno) {
    int v[NUM_MESES_31_DIAS] = {1, 3, 5, 7, 8, 10, 12};
    try {
        if (dia < MIN_DIAS_MES || dia > MAX_DIAS_MES){
            throw std::invalid_argument("Fecha::Fecha, Error, el dia introducido no es correcto");
        }
        for (int i = 0; i < NUM_MESES_31_DIAS; ++i) {
            if(mes == v[i] && dia == MAX_DIAS_MES){
                throw std::invalid_argument("Fecha::Fecha, Error, el día introducido no es correcto");
            }
        }
        if (mes == 2 && dia > 29){
            throw std::invalid_argument("Fecha::Fecha, Error, El dia introducido no es correcto");
        }
        if(mes > MAX_MESES || mes < MIN_MESES){
            throw std::invalid_argument("Fecha::Fecha, Error, El mes introducido no es correcto");
        }
    } catch (std::invalid_argument &e){
        std::cout<<e.what() <<std::endl;

    }
    std::tm timeinfo = {}; // Inicializamos a 0 para asegurarnos de que los campos estén limpios
    timeinfo.tm_mday = dia;
    timeinfo.tm_mon = mes - 1; // Restamos 1 porque en std::tm los meses van de 0 a 11
    timeinfo.tm_year = agno - 1900; // Restamos 1900 porque std::tm cuenta los años desde 1900
    std::mktime(&timeinfo);
    int dia_semana_numero = timeinfo.tm_wday;
    std::string dias_semana[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    this->dia_semana = dias_semana[dia_semana_numero];
}
