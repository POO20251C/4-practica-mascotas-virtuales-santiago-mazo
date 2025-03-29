#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>

class Objeto {
private:
    std::string nombre;
    std::string tipo;
    std::string efecto;
public:
    Objeto(std::string nombre, std::string tipo, std::string efecto);
    void usarObjeto();
};
#endif