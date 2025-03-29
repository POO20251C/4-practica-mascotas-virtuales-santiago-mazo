#include "Historial.h"
Historial::Historial(std::string fecha, std::string descripcion) : fecha(fecha), descripcion(descripcion) {}
void Historial::mostrarEvento() {
    std::cout << fecha << " - " << descripcion << std::endl;
}
