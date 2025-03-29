#include "Habilidad.h"
Habilidad::Habilidad(std::string nombre, int nivel) : nombre(nombre), nivelRequerido(nivel) {}
void Habilidad::usarHabilidad() {
    std::cout << "Usando habilidad: " << nombre << std::endl;
}
