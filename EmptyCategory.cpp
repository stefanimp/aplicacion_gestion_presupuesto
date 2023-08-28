//
// Created by stefan on 23/08/2023.
//
#include "EmptyCategory.h"

EmptyCategory::EmptyCategory():std::bad_alloc() {

}

EmptyCategory::EmptyCategory(const EmptyCategory &original):std::bad_alloc(original) {

}

EmptyCategory::~EmptyCategory() throw() {

}