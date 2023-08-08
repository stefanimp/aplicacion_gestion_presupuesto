cmake_minimum_required(VERSION 3.24)
project(Control_De_Gastos)

set(CMAKE_CXX_STANDARD 17)

add_executable(Control_De_Gastos main.cpp Categoria.h Categoria.cpp Gasto.h Gasto.cpp Operacion.h Fecha.h Fecha.cpp Operacion.cpp Ingreso.h Ingreso.cpp)
