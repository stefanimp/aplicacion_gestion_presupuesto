//
// Created by stefan on 23/08/2023.
//

#ifndef CONTROL_DE_GASTOS_EMPTYCATEGORY_H
#define CONTROL_DE_GASTOS_EMPTYCATEGORY_H

#include "exception"

class EmptyCategory:public std::bad_alloc{
public:
    EmptyCategory();
    EmptyCategory(const EmptyCategory &original);
    ~EmptyCategory();
};

#endif //CONTROL_DE_GASTOS_EMPTYCATEGORY_H

