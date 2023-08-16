#include <iostream>
#include "Fecha.h"
#include "string"


int main() {

    std::string fecha1 = "01;01;2023;Miercoles;0;";

    Fecha *fecha_defecha1 = new Fecha();
    fecha_defecha1->fromCSV(fecha1);

    std::cout<<fecha_defecha1->getAgno();

    return 0;
}
