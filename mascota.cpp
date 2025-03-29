#include "Mascota.h"
Mascota::Mascota(std::string nombre) : nombre(nombre), edad(0), nivelEnergia(100) {}
void Mascota::aprenderHabilidad(Habilidad habilidad) { habilidades.push_back(habilidad); }
void Mascota::usarObjeto(Objeto objeto) { /* Lógica de uso de objeto */ }
void Mascota::mostrarHistorial() {
    std::cout << "Historial de " << nombre << ":" << std::endl;
    for (const auto& evento : historial) {
        evento.mostrarEvento();
    }
}
std::string Mascota::getNombre() const { return nombre; }
