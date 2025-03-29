#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <vector>
#include "Habilidad.h"
#include "Objeto.h"
#include "Historial.h"

class Mascota {
private:
    std::string nombre;
    int edad;
    int nivelEnergia;
    std::vector<Habilidad> habilidades;
    std::vector<Historial> historial;
public:
    Mascota(std::string nombre);
    void aprenderHabilidad(Habilidad habilidad);
    void usarObjeto(Objeto objeto);
    void mostrarHistorial();
    std::string getNombre() const;
};
#endif