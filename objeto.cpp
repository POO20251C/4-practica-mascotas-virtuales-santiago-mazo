#include "Objeto.h"
Objeto::Objeto(std::string nombre, std::string tipo, std::string efecto) : nombre(nombre), tipo(tipo), efecto(efecto) {}
void Objeto::usarObjeto() {
    std::cout << "Usando objeto: " << nombre << " efecto: " << efecto << std::endl;
}
